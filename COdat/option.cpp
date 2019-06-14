#include "option.h"
#include "ui_option.h"

#include <stdio.h>
#include <fstream>
#include <QMessageBox>

using namespace std;

Option::Option(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Option)
{
    ui->setupUi(this);

    setFixedSize(480,360);
}

Option::~Option()
{
    delete ui;
}

void Option::on_guess_pushButton_clicked()
{
    open_level = new Level;

    open_level->show();

    close();
}

void Option::on_register_pushButton_clicked()
{
        ofstream fout;
        ifstream fin;
        QString name=ui->name_lineEdit->text();
        QByteArray ba=name.toLatin1();

        string p;
        p=ba.data();

        bool flag=true;
        if(p=="")
            flag=false;
        else
        {
            for(int i=0 ; i < p.size() ; i++)
            {
                if( !( (p[i]>='A' && p[i]<='Z') || (p[i]>='a' && p[i]<='z') ))
                {
                    flag=false;
                    break;
                }
            }
        }


        if(flag)
        {
            p = p+".txt";
            fin.open(p);
            if(!fin)
            {
                fout.open(p);
                fout<<"1 0 0 0"<<endl;

                open_level = new Level;
                open_level->show();
                close();
            }
            else
                QMessageBox::information(this, tr("警告"), tr("已註冊過"));
        }
        else
        {
            QMessageBox::information(this, tr("FQ"), tr("阿是聽不懂國語喔"));
        }
}

void Option::on_signin_pushButton_clicked()
{
    ifstream fin;
        QString name=ui->name_lineEdit->text();
        QByteArray ba=name.toLatin1();

        string p;
        p=ba.data();

        bool flag=true;
        if(p=="")
            flag=false;
        else
        {
            for(int i=0; i<p.size(); i++)
            {
                if( !( (p[i]>='A' && p[i]<='Z') || (p[i]>='a' && p[i]<='z') ))
                {
                    flag=false;
                    break;
                }
            }
        }

        if(flag)
        {
            p = p+".txt";
            fin.open(p);
            if(fin){
                int k;
                fin>>k;
                //cout<<k<<endl;

                open_level = new Level;
                open_level->show();
                close();
            }
            else
                QMessageBox::information(this, tr("警告"), tr("無此玩家"));
        }
        else
        {
            QMessageBox::information(this, tr("FQ"), tr("阿是聽不懂國語喔"));
        }
}
