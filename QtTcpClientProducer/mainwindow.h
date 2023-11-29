#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimerEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  void tcpConnect();

public slots:
  void putData();
  void tEvent(QTimerEvent *event);
  void startTimer();
  void stopTimer();

private slots:
  void connect_click();

  void disconnect_click();

  //void on_start_clicked();

  //void on_min_valueChanged(int value);

  //void on_max_valueChanged(int value);

  //void on_time_valueChanged(int value);

  //void on_LIMPAR_clicked();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  int timer;
  int status;
};

#endif // MAINWINDOW_H
