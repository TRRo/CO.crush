#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "option.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_start_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    Option *open_option;
};

#endif // MAINWINDOW_H
