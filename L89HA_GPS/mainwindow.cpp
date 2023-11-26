#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialport>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* trigger when the Settings in menu bar is clicked */
    connect(ui->menuSettings, &QMenu::aboutToShow, this, &MainWindow::on_actionExit_triggered);
}

MainWindow::~MainWindow()
{
    delete ui;
}


/* Callback when Exit is clicked in File */
void MainWindow::on_actionExit_triggered()
{
    QCoreApplication::quit();
}

