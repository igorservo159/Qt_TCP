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
          SLOT(startTimer()));

  connect(ui->stop,
          SIGNAL(clicked(bool)),
          this,
          SLOT(stopTimer()));

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
    qDebug() << "Disconnected";
    ui->label_4->setText("Disconnected");
  }
}

void MainWindow::putData(){
  QDateTime datetime;
  QString str;
  qint64 msecdate;

  if(socket->state()== QAbstractSocket::ConnectedState){

    msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
    str = "set "+ QString::number(msecdate) + " " +
        QString::number(rand()%35)+"\r\n";

      qDebug() << str;
      qDebug() << socket->write(str.toStdString().c_str())
               << " bytes written";
      if(socket->waitForBytesWritten(3000)){
        qDebug() << "wrote";
      }
  }
}

void MainWindow::tEvent(QTimerEvent *event){

}

void MainWindow::startTimer(){

}

void MainWindow::stopTimer(){

}

void MainWindow::connect_click(){

}

void MainWindow::disconnect_click(){

}

MainWindow::~MainWindow(){
  delete socket;
  delete ui;
}
