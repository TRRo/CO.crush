#ifndef OPTION_H
#define OPTION_H

#include <QMainWindow>

#include "level.h"

namespace Ui {
class Option;
}

class Option : public QMainWindow
{
    Q_OBJECT

public:
    explicit Option(QWidget *parent = nullptr);
    ~Option();

private slots:
    void on_guess_pushButton_clicked();

    void on_register_pushButton_clicked();

    void on_signin_pushButton_clicked();

private:
    Ui::Option *ui;

    Level *open_level;
};

#endif // OPTION_H
