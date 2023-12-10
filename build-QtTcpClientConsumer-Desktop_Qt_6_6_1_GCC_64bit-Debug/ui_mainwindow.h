/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *connect;
    QPushButton *disconnect;
    QListWidget *listWidget;
    QPushButton *update;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSlider *time;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *start;
    QPushButton *stop;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_5;
    Plotter *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(586, 410);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(229, 17));
        label->setMaximumSize(QSize(229, 16777215));

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(229, 25));
        lineEdit->setMaximumSize(QSize(229, 16777215));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        connect = new QPushButton(centralWidget);
        connect->setObjectName("connect");
        connect->setMinimumSize(QSize(111, 25));
        connect->setMaximumSize(QSize(111, 16777215));

        horizontalLayout_4->addWidget(connect);

        disconnect = new QPushButton(centralWidget);
        disconnect->setObjectName("disconnect");
        disconnect->setMinimumSize(QSize(110, 25));
        disconnect->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_4->addWidget(disconnect);


        verticalLayout->addLayout(horizontalLayout_4);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setMinimumSize(QSize(229, 105));
        listWidget->setMaximumSize(QSize(229, 16777215));

        verticalLayout->addWidget(listWidget);

        update = new QPushButton(centralWidget);
        update->setObjectName("update");
        update->setMinimumSize(QSize(229, 25));
        update->setMaximumSize(QSize(229, 16777215));

        verticalLayout->addWidget(update);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(229, 17));
        label_2->setMaximumSize(QSize(229, 16777215));

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        time = new QSlider(centralWidget);
        time->setObjectName("time");
        time->setMinimumSize(QSize(201, 16));
        time->setMaximumSize(QSize(201, 16777215));
        time->setMinimum(1);
        time->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(time);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(25, 20));
        label_3->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        start = new QPushButton(centralWidget);
        start->setObjectName("start");
        start->setMinimumSize(QSize(111, 25));
        start->setMaximumSize(QSize(111, 16777215));

        horizontalLayout_2->addWidget(start);

        stop = new QPushButton(centralWidget);
        stop->setObjectName("stop");
        stop->setMinimumSize(QSize(110, 25));
        stop->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_2->addWidget(stop);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(111, 17));
        label_4->setMaximumSize(QSize(111, 16777215));

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(110, 17));
        label_5->setMaximumSize(QSize(110, 16777215));

        horizontalLayout->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        widget = new Plotter(centralWidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(326, 331));

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 586, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP do Server", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Timing", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
