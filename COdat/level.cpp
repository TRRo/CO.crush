#include "level.h"
#include "ui_level.h"

Level::Level(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);

    setFixedSize(960,600);
}

Level::~Level()
{
    delete ui;
}
