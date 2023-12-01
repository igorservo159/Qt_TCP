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
  //void tEvent(QTimerEvent *event);
  void start();
  void stop();

private slots:
  void connect_click();

  void disconnect_click();

  void min_value(int value);

  void max_value(int value);

  void time_value(int value);

  void clearText();

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QTimer *dataTimer;
  int status;
};

#endif // MAINWINDOW_H
