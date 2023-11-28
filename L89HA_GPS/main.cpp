#include "mainwindow.h"
#include <QStyleFactory>
#include <QFile>
#include <QApplication>
#include <QScreen>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    a.setStyle(QStyleFactory::create("Fusion"));

    /*
    QFile file(":/themes/theme.qss");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString styleSheet = QLatin1String(file.readAll());
    a.setStyleSheet(styleSheet);
    */

    MainWindow w;
    w.show();


/*###############---Resize the window as per the device---#######################*/
    QScreen* screen = QApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();

    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();

    // Calculate the desired width and height of the window
    int windowWidth = screenWidth / 1.5;
    int windowHeight = screenHeight / 1.5;

    // Create a QRect representing the window geometry
    QRect windowRect = QRect(0, 0, windowWidth, windowHeight);

    // Center the QRect on the screen
    windowRect.moveCenter(screenGeometry.center());

    w.setGeometry(windowRect);  // Resize the window to half the screen
/*###############################################################################*/



    return a.exec();
}

