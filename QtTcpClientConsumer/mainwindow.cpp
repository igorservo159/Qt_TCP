#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  std::vector<long long> temposIniciais = {0, 1, 2, 3, 5, 7};
  std::vector<float> valoresIniciais = {0.0, 10.0, 15.0, 5.0, 9.0, 4.0};
  ui->widget->load(temposIniciais, valoresIniciais);
  socket = new QTcpSocket(this);
  tcpConnect();

  connect(ui->connect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(connect_click()));
  connect(ui->disconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(disconnect_click()));
  connect(ui->update,
          SIGNAL(clicked(bool)),
          this,
          SLOT(update()));
  connect(ui->listWidget,
          SIGNAL(itemClicked(QListWidgetItem*)),
          this,
          SLOT(selectMachine(QListWidgetItem*)));
  connect(ui->start,
          SIGNAL(clicked(bool)),
          this,
          SLOT(start()));
  connect(ui->time,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(updateInterval(int)));
  connect(ui->stop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stop()));

  selectedMachine = "";

  ui->start->setVisible(false);
  ui->stop->setVisible(false);

  ui->label_4->setText("Disconnected");
  ui->label_5->setText("Disabled");
  status = 0;
  dataTimer = nullptr;
}

void MainWindow::tcpConnect(){
  socket->connectToHost(ui->lineEdit->text(),1234);
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
    ui->label_4->setText("Connected");
    status = 1;
  }
  else{
    qDebug() << "Disconnected";
    qDebug() << "Connection error:" << socket->errorString();
    ui->label_4->setText("Disconnected");
  }
}

void MainWindow::connect_click(){
    tcpConnect();
}

void MainWindow::disconnect_click(){
    socket -> disconnectFromHost();
    qDebug() << "Disconnected";
    ui->label_4->setText("Disconnected");
    ui->label_5->setText("Disabled");
    status = 0;
}

void MainWindow::getData(){
  QString str;
  QByteArray array;
  QStringList list;
  qint64 thetime;
  float thevalue;
  std::vector<long long> tempos;
  std::vector<float> valores;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState && !selectedMachine.isEmpty()){
    if(socket->isOpen()){
      qDebug() << "reading...";
      QString command = "get " + selectedMachine + " 50\r\n";
      socket->write(command.toUtf8());
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok1, ok2;
          str = list.at(0);
          thetime = str.toLongLong(&ok1);
          str = list.at(1);
          thevalue = str.toFloat(&ok2);
          if(ok1 && ok2)
            qDebug() << thetime << ": " << thevalue;
          tempos.push_back(thetime);
          valores.push_back(thevalue);
        }
      }
      ui->widget->load(tempos, valores);
    }
  }
}

void MainWindow::update(){
    QString str;
    if(socket->ConnectedState == QAbstractSocket::ConnectedState){
        ui->listWidget->clear();
        socket->write("list\r\n");
        socket->waitForBytesWritten(3000);
        socket->waitForReadyRead(3000);
        qDebug() << socket->bytesAvailable();
        while(socket->bytesAvailable()){
            str = socket->readLine().replace("\r", "").replace("\n", "");
            qDebug() << str;
            if(str.size() > 0){
                ui->listWidget->addItem(str);
            }
        }
    }
}

void MainWindow::selectMachine(QListWidgetItem *item){
    selectedMachine = item->text();
    ui->start->setVisible(true);
    ui->stop->setVisible(true);
    qDebug() << "Selected Machine: " << selectedMachine;
}

void MainWindow::start(){
    int t = 1000*ui->time->value();
    if (dataTimer && dataTimer->isActive()) {
        dataTimer->stop();
    }

    if(status == 1){
        ui->label_5->setText("Activated");
        dataTimer = new QTimer(this);
        connect(dataTimer, SIGNAL(timeout()), this, SLOT(getData()));
        dataTimer->start(t);
    } else{
        ui->label_5->setText("Disabled");
    }
}

void MainWindow::updateInterval(int value){
    if (status == 1 && dataTimer && dataTimer->isActive()) {
        int t = 1000 * ui->time->value();
        dataTimer->setInterval(t);
    }
    QString valor = QString::number(value);
    ui->label_3->setText(valor);
}

void MainWindow::stop(){
    ui->label_5->setText("Disabled");
    if(dataTimer->isActive()){
        dataTimer->stop();
        qDebug() << "Timer stopped";
    }
}

MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}
//std::vector<long> Tempo;
//std::vector<int> Valor;
