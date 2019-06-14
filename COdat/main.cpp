#include "mainwindow.h"
#include <QApplication>

#include <QSplashScreen>
#include <QPixmap>
#include <QTime>

void sleep(unsigned int);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QSplashScreen * scr= new QSplashScreen;
    scr->setPixmap(QPixmap(":/logo/img/Logo/LOGOOOOOO.png"));
    scr->show();

    sleep(1000);

    MainWindow w;
    w.show();

    scr->close();

    return a.exec();
}

void sleep(unsigned int msec)
{
    QTime wait = QTime::currentTime().addMSecs(msec);
    while(QTime::currentTime() < wait)
    {

    }
}
