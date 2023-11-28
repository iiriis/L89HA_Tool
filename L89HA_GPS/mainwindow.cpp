#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialport>
#include <QMessageBox>
#include <QRegularExpression>

/* Gloabl Serial Port object */
QSerialPort serialPort;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* initialise the widget states */
    initWidegtStates();


    /* trigger when the Settings in menu bar is clicked */
    connect(ui->menuPort, &QMenu::aboutToShow, this, &MainWindow::update_port_list);

    /* trigger when action of menu port or sub-menu of menu port is selected */
    connect(ui->menuPort, &QMenu::triggered, this, &MainWindow::onSerialPortSelected);

    /* trigger when action of menu baud or sub-menu of menu baud is selected */
    connect(ui->menuBaud, &QMenu::triggered, this, &MainWindow::onBaudSelected);

    /* Connect the readyRead() signal to a slot */
    connect(&serialPort, &QSerialPort::readyRead, this, &MainWindow::handleSerialReceive);

}

MainWindow::~MainWindow()
{
    delete ui;
}

/* initialise all the widgets states */
void MainWindow::initWidegtStates(){

    /* set the default baud 115200 bps checked in the baud menu*/
    ui->action115200_bps->setChecked(true);

    /* set the default baudRate of serial port to 115200 bps */
    serialPort.setBaudRate(QSerialPort::Baud115200);
}

/* Callback whenever menu Port is going to open
 * This is to update the port list with everytime
 * user opens the port menu
 */
void MainWindow::update_port_list(){

    /* Get a list of available serial ports */
    QList<QSerialPortInfo> portList = QSerialPortInfo::availablePorts();

    /* Check if the list is empty */
    if(portList.size() == 0) {
        /* If there are no ports, disable the Port menu */
        ui->menuPort->setDisabled(true);
    }

    else {
        /* Clear the Port menu before populating to avoid repetitions */
        ui->menuPort->clear();

        /* Create a list to hold the serial port actions */
        QList<QAction*> portActions;

        /* Add an action for each available port as sub-menu items */
        for (const QSerialPortInfo &port : portList) {
            QAction *action = new QAction(port.portName(), this);
            action->setCheckable(true);

            /* Check if the current port is the selected port, and set the checked state accordingly */
            if(port.portName() == serialPort.portName()) {
                action->setChecked(true);
            }

            /* add the actions (port names) to the port sub-menu */
            portActions.append(action);
        }

        /* Populate the Port menu with the new Ports */
        ui->menuPort->addActions(portActions);

        /* Enable the Port menu */
        ui->menuPort->setDisabled(false);

    }
}

/* Callback function to handle the selection of a
 * serial port action from the submenu and set
 * the serial port name.
 */
void MainWindow::onSerialPortSelected(QAction *action){

    /* Check if the triggered action is in the Serial Ports submenu */
    if (ui->menuPort->actions().contains(action)) {
        /* Get the name of the selected serial port from the action text */
        QString portName = action->text();

        /* Set the serial port name and the other properties */
        serialPort.setPortName(portName);

    }
}

/* Callback function to handle the selection of a
 * baud from the submenu and set the serial port baud rate.
 */
void MainWindow::onBaudSelected(QAction *action){

    /* Uncheck all actions in the Baud menu first*/
    for (QAction *otherAction : ui->menuBaud->actions()) {
            otherAction->setChecked(false);
    }

    /* check the selected baud */
    action->setChecked(true);

    /* set the BaudRate of the serial Port from the baud menu action (value) */
    serialPort.setBaudRate(action->text().toLong());
}

/* Callback function to connect to the Serial Port
 * when connect is clicked
 */
void MainWindow::on_actionConnect_triggered()
{
    serialPort.close();
    qDebug() << serialPort.portName();

    /* open the serial port in read and write mode */
    if (serialPort.open(QIODevice::ReadWrite)) {
        qDebug() << "Serial port opened successfully";
    }

    else {
        /* If the serial port cannot be opened, display an error dialog */
        QMessageBox::critical(this, tr("Error"), tr("Cannot open serial port: %1").arg(serialPort.errorString()));
    }
}

/* Callback function to read the data from the Serial Port */
void MainWindow::handleSerialReceive() {

    QRegularExpression regex("[\\r\\n]");

    /* Read the data from the port */
    QByteArray data = serialPort.readAll();

    /* Convert the data to a string */
    QString stringData = QString::fromUtf8(data);

    /* Print the string to the console */
    qDebug() << stringData;


}
