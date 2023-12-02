#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "terminal.h"

#include <QMainWindow>
#include <QtSerialport>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void initWidegtStates();

    void processTextTerminal(QByteArray data);

    void update_port_list();

    void onSerialPortSelected(QAction *action);
    void onBaudSelected(QAction *action);

    void on_actionConnect_triggered();

    void handleSerialReceive();

    void handleSerialError(QSerialPort::SerialPortError error);

    void on_actionTerminal_triggered();

private:
    Ui::MainWindow *ui;
    terminal *tty;

};
#endif // MAINWINDOW_H
