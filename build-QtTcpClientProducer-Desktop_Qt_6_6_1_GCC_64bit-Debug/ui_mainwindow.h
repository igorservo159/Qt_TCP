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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *connect;
    QPushButton *disconnect;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QSlider *min;
    QLCDNumber *display_min;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSlider *max;
    QLCDNumber *display_max;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSlider *time;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *start;
    QPushButton *stop;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLabel *label_5;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(442, 337);
        MainWindow->setMinimumSize(QSize(442, 337));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(199, 25));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        connect = new QPushButton(centralWidget);
        connect->setObjectName("connect");
        connect->setMinimumSize(QSize(96, 25));

        horizontalLayout_5->addWidget(connect);

        disconnect = new QPushButton(centralWidget);
        disconnect->setObjectName("disconnect");
        disconnect->setMinimumSize(QSize(95, 25));

        horizontalLayout_5->addWidget(disconnect);


        verticalLayout->addLayout(horizontalLayout_5);

        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(64, 17));

        verticalLayout->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        min = new QSlider(centralWidget);
        min->setObjectName("min");
        min->setMinimumSize(QSize(125, 15));
        min->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(min);

        display_min = new QLCDNumber(centralWidget);
        display_min->setObjectName("display_min");
        display_min->setMinimumSize(QSize(64, 23));

        horizontalLayout_4->addWidget(display_min);


        verticalLayout->addLayout(horizontalLayout_4);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(64, 17));

        verticalLayout->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        max = new QSlider(centralWidget);
        max->setObjectName("max");
        max->setMinimumSize(QSize(125, 15));
        max->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(max);

        display_max = new QLCDNumber(centralWidget);
        display_max->setObjectName("display_max");
        display_max->setMinimumSize(QSize(64, 23));

        horizontalLayout_3->addWidget(display_max);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(47, 20));

        horizontalLayout->addWidget(label_3);

        time = new QSlider(centralWidget);
        time->setObjectName("time");
        time->setMinimum(1);
        time->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(time);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(31, 20));

        horizontalLayout->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        start = new QPushButton(centralWidget);
        start->setObjectName("start");
        start->setMinimumSize(QSize(96, 25));

        horizontalLayout_2->addWidget(start);

        stop = new QPushButton(centralWidget);
        stop->setObjectName("stop");
        stop->setMinimumSize(QSize(95, 25));

        horizontalLayout_2->addWidget(stop);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(91, 17));

        horizontalLayout_6->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setMinimumSize(QSize(201, 258));

        horizontalLayout_7->addWidget(textBrowser);


        gridLayout->addLayout(horizontalLayout_7, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 442, 22));
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
        lineEdit->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Timing", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
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
