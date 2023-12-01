#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent), ui(new Ui::MainWindow){
  ui->setupUi(this);
  socket = new QTcpSocket(this);

  connect(ui->connect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(connect_click()));

  connect(ui->disconnect,
          SIGNAL(clicked(bool)),
          this,
          SLOT(disconnect_click()));

  connect(ui->start,
          SIGNAL(clicked(bool)),
          this,
          SLOT(start()));

  connect(ui->stop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stop()));

  connect(ui->min,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(min_value(int)));

  connect(ui->max,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(max_value(int)));

  connect(ui->time,
          SIGNAL(valueChanged(int)),
          this,
          SLOT(time_value(int)));

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
    qDebug() << "deu errado";
    qDebug() << "Connection error:" << socket->errorString();
    ui->label_4->setText("Disconnected");
  }
}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  int min = ui->display_min->value();
  int max = ui->display_max->value();

  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " +
          QString::number(min+(rand()%(max-min)))+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str())
               << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
      ui->textBrowser->append(str);
  }
}

//void MainWindow::tEvent(QTimerEvent *event){}

void MainWindow::start(){
    int t = 1000*ui->time->value();
    if (dataTimer && dataTimer->isActive()) {
        dataTimer->stop();
    }

    if(status == 1){
        ui->label_5->setText("Activated");
        dataTimer = new QTimer(this);
        connect(dataTimer, SIGNAL(timeout()), this, SLOT(putData()));
        dataTimer->start(t);
    } else{
        ui->label_5->setText("Disabled");
    }
}

void MainWindow::stop(){
    ui->label_5->setText("Disabled");
    if(dataTimer->isActive()){
        dataTimer->stop();
        qDebug() << "Timer stopped";
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

void MainWindow::min_value(int value){
    ui->display_min->display(value);
}

void MainWindow::max_value(int value){
    ui->display_max->display(value);
}

void MainWindow::time_value(int value){
    QString valor = QString::number(value);
    ui->label_6->setText(valor);
}

void MainWindow::clearText(){
    ui->textBrowser->clear();
}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}
