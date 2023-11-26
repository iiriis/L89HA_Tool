/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *action4800_bps;
    QAction *action9600_bps;
    QAction *action19200_bps;
    QAction *action38400_bps;
    QAction *action57600_bps;
    QAction *action115200_bps;
    QAction *action23400_bps;
    QAction *action921600_bps;
    QAction *action921600_bps_2;
    QAction *action2000000bps;
    QAction *actionConnect;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuSettings;
    QMenu *menuPort;
    QMenu *menuBaud;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(614, 424);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        action4800_bps = new QAction(MainWindow);
        action4800_bps->setObjectName("action4800_bps");
        action4800_bps->setCheckable(true);
        action9600_bps = new QAction(MainWindow);
        action9600_bps->setObjectName("action9600_bps");
        action9600_bps->setCheckable(true);
        action19200_bps = new QAction(MainWindow);
        action19200_bps->setObjectName("action19200_bps");
        action19200_bps->setCheckable(true);
        action38400_bps = new QAction(MainWindow);
        action38400_bps->setObjectName("action38400_bps");
        action38400_bps->setCheckable(true);
        action57600_bps = new QAction(MainWindow);
        action57600_bps->setObjectName("action57600_bps");
        action57600_bps->setCheckable(true);
        action115200_bps = new QAction(MainWindow);
        action115200_bps->setObjectName("action115200_bps");
        action115200_bps->setCheckable(true);
        action23400_bps = new QAction(MainWindow);
        action23400_bps->setObjectName("action23400_bps");
        action23400_bps->setCheckable(true);
        action921600_bps = new QAction(MainWindow);
        action921600_bps->setObjectName("action921600_bps");
        action921600_bps->setCheckable(true);
        action921600_bps_2 = new QAction(MainWindow);
        action921600_bps_2->setObjectName("action921600_bps_2");
        action921600_bps_2->setCheckable(true);
        action2000000bps = new QAction(MainWindow);
        action2000000bps->setObjectName("action2000000bps");
        action2000000bps->setCheckable(true);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName("actionConnect");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");

        gridLayout->addWidget(textBrowser, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 614, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName("menuSettings");
        menuPort = new QMenu(menuSettings);
        menuPort->setObjectName("menuPort");
        menuBaud = new QMenu(menuSettings);
        menuBaud->setObjectName("menuBaud");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menuFile->addAction(actionExit);
        menuSettings->addAction(menuPort->menuAction());
        menuSettings->addAction(menuBaud->menuAction());
        menuSettings->addAction(actionConnect);
        menuBaud->addAction(action4800_bps);
        menuBaud->addAction(action9600_bps);
        menuBaud->addAction(action19200_bps);
        menuBaud->addAction(action38400_bps);
        menuBaud->addAction(action57600_bps);
        menuBaud->addAction(action115200_bps);
        menuBaud->addAction(action23400_bps);
        menuBaud->addAction(action921600_bps);
        menuBaud->addAction(action921600_bps_2);
        menuBaud->addAction(action2000000bps);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        action4800_bps->setText(QCoreApplication::translate("MainWindow", "4800", nullptr));
        action9600_bps->setText(QCoreApplication::translate("MainWindow", "9600", nullptr));
        action19200_bps->setText(QCoreApplication::translate("MainWindow", "19200", nullptr));
        action38400_bps->setText(QCoreApplication::translate("MainWindow", "38400", nullptr));
        action57600_bps->setText(QCoreApplication::translate("MainWindow", "57600", nullptr));
        action115200_bps->setText(QCoreApplication::translate("MainWindow", "115200", nullptr));
        action23400_bps->setText(QCoreApplication::translate("MainWindow", "23400", nullptr));
        action921600_bps->setText(QCoreApplication::translate("MainWindow", "500000", nullptr));
        action921600_bps_2->setText(QCoreApplication::translate("MainWindow", "921600", nullptr));
        action2000000bps->setText(QCoreApplication::translate("MainWindow", "2000000", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">ello WOk</p></body></html>", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        menuPort->setTitle(QCoreApplication::translate("MainWindow", "Port", nullptr));
        menuBaud->setTitle(QCoreApplication::translate("MainWindow", "Baud", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
