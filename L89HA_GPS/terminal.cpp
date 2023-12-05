#include "terminal.h"
#include "ui_terminal.h"
#include "mainwindow.h"


MainWindow *mainWindow;

/* terminal window that holds all the serial terminal
 * operations
 */
terminal::terminal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::terminal)
{
    ui->setupUi(this);

    /* reference to the MainWindow parent object using dynamic_cast */
    mainWindow = dynamic_cast<MainWindow*>(this->parentWidget());

    /* Check if the dynamic cast returns the pointer to the parent window */
    if (mainWindow == nullptr) {
        qDebug() << "Parent widget name is not valid!";
    }

    /* change the window size */
    setWindowSize();

    /* set the text Terminal in read only mode */
    ui->textTerminal->setReadOnly(true);

    ui->textTerminal->setMouseTracking(true);

    /* Connect the datareceived signal to a slot to get the data from mainwindow */
    connect(mainWindow, &MainWindow::dataReceived, this, &terminal::handleSerialDataReceive);

}

terminal::~terminal()
{
    delete ui;
}


/* Function to set the size of the terminal screen */
void terminal::setWindowSize()
{
    const int ratio = 3;

    QScreen* screen = QApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();

    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();

    // Calculate the desired width and height of the window
    int windowWidth = screenWidth / ratio;
    int windowHeight = screenHeight / ratio;

    // Create a QRect representing the window geometry
    QRect windowRect = QRect(0, 0, windowWidth, windowHeight);

    // Center the QRect on the screen
    windowRect.moveCenter(screenGeometry.center());

    this->setGeometry(windowRect);

}

void terminal::on_textInput_LineEdit_returnPressed()
{
    ui->textTerminal->insertPlainText("Sent:\n");
}

/* Function to update the text Terminal with the new data on arrival*/
void terminal::handleSerialDataReceive(const QByteArray& data) {


    /* check if the terminal window is active and the some data is received in serial port */
    if(ui->textTerminal->isVisible() && data.length() > 0) {

        /* check if the autoscroll is checked then move the cursor at the end */
        if(ui->autoscroll_CheckBox->isChecked())
            ui->textTerminal->moveCursor(QTextCursor::End);

        /* add the data to the terminal */
        ui->textTerminal->insertPlainText(data);
    }
}

