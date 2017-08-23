#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>

QTextEdit* MainWindow::teLog = 0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    teLog = ui->teLog;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbnDegubMsg_clicked()
{
    qDebug() << "hello";
}

void MainWindow::on_pbnCriticalMsg_clicked()
{
    qCritical() << "Oh, oh no, oh no, no no no";
}
