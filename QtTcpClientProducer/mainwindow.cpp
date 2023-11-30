#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

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
          SLOT(startTime()));

  connect(ui->stop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stopTime()));

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

  int min = ui->display_max->value();
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

void MainWindow::tEvent(QTimerEvent *event){

}

void MainWindow::startTime(){
    int t = 1000*ui->time->value();
    timer = startTimer(t);
    if(status == 1){
        ui->label_5->setText("Activated");
    } else{
        ui->label_5->setText("Disabled");
    }
}

void MainWindow::stopTime(){
    killTimer(timer);
    ui->label_5->setText("Disabled");
}

void MainWindow::connect_click(){
    tcpConnect();
    status = 1;
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
