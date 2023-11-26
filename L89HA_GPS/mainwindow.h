#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void update_port_list();

    void onSerialPortSelected(QAction *action);
    void onBaudSelected(QAction *action);

    void on_actionConnect_triggered();

    void handleSerialReceive();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
