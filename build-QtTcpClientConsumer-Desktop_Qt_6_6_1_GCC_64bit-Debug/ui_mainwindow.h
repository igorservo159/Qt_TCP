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
    QHBoxLayout *horizontalLayout_3;
    QPushButton *connect;
    QPushButton *disconnect;
    QListWidget *listWidget;
    QPushButton *update;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *start;
    QPushButton *stop;
    Plotter *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(526, 390);
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

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        connect = new QPushButton(centralWidget);
        connect->setObjectName("connect");
        connect->setMinimumSize(QSize(111, 25));
        connect->setMaximumSize(QSize(111, 16777215));

        horizontalLayout_3->addWidget(connect);

        disconnect = new QPushButton(centralWidget);
        disconnect->setObjectName("disconnect");
        disconnect->setMinimumSize(QSize(110, 25));
        disconnect->setMaximumSize(QSize(110, 16777215));

        horizontalLayout_3->addWidget(disconnect);


        verticalLayout->addLayout(horizontalLayout_3);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setMinimumSize(QSize(229, 110));
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

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setMinimumSize(QSize(212, 15));
        horizontalSlider->setMaximumSize(QSize(212, 16777215));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(9, 17));
        label_3->setMaximumSize(QSize(9, 16777215));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        start = new QPushButton(centralWidget);
        start->setObjectName("start");
        start->setMinimumSize(QSize(111, 25));
        start->setMaximumSize(QSize(111, 16777215));

        horizontalLayout->addWidget(start);

        stop = new QPushButton(centralWidget);
        stop->setObjectName("stop");
        stop->setMinimumSize(QSize(110, 25));
        stop->setMaximumSize(QSize(110, 16777215));

        horizontalLayout->addWidget(stop);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        widget = new Plotter(centralWidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(271, 311));

        gridLayout->addWidget(widget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 526, 22));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
