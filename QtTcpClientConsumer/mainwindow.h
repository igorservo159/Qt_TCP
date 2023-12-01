#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QListWidgetItem>


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
  void getData();
  void update();
  void start();
  void stop();

private slots:
  void connect_click();
  void disconnect_click();
  void selectMachine(QListWidgetItem *item);
  void updateInterval(int value);

private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
  QTimer *dataTimer;
  QString selectedMachine;
  int status;
};

#endif // MAINWINDOW_H
