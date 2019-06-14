#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(960,600);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_pushButton_clicked()
{
    open_option = new Option;

    open_option->show();

    close();
}
