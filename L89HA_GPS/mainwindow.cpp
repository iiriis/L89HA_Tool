#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialport>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* trigger when the Settings in menu bar is clicked */
    connect(ui->menuSettings, &QMenu::aboutToShow, this, &MainWindow::update_port_list);
}

MainWindow::~MainWindow()
{
    delete ui;
}


/* Callback when Exit is clicked in File */
void MainWindow::update_port_list()
{
    /* Get a list of available serial ports */
    QList<QSerialPortInfo> portList = QSerialPortInfo::availablePorts();

    /* check if the list > 0 then populate the submenu of Ports */
    if(portList.size() == 0)
        ui->menuPort->setDisabled(true);

    else
    {
        /* Create a list to hold the serial port actions */
        QList<QAction*> portActions;

        /* Add an action for each available port */
        for (const QSerialPortInfo &port : portList) {
            QAction *action = new QAction(port.portName(), this);
            portActions.append(action);
        }
        /* clear the Port menu before populating to avoid repetations */
        ui->menuPort->clear();

        /* populating new Ports as actions */
        ui->menuPort->addActions(portActions);

        /*enable the Port menu */
        ui->menuPort->setDisabled(false);
    }

    // Print the name and description of each serial port
    for (const QSerialPortInfo &port : portList) {
        qDebug() << "Name:" << port.portName() << "Description:" << port.description();
    }
}
