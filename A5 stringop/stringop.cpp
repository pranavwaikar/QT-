#include "stringop.h"
#include "ui_stringop.h"
#include "temp.h"
temp t1,t2,t3;
Stringop::Stringop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Stringop)
{
    ui->setupUi(this);
}

Stringop::~Stringop()
{
    delete ui;
}

void Stringop ::accept()
{
    t1.str=this->ui->lineEdit->text();
    t2.str=this->ui->lineEdit_2->text();
}

void Stringop::display()
{
    this->ui->lineEdit_3->setText(QString(t3.str));
}

void Stringop::on_pushButton_clicked()  //equality =
{
    accept();

    if((t1=t2)==0)
    {
        t3.str="Strings are equal";
    }
    else
    {
        t3.str="Strings are not equal";
    }
    display();
}

void Stringop::on_pushButton_2_clicked() //copy ==
{
    accept();
    t3==t1;
    display();
}

void Stringop::on_pushButton_3_clicked()    //concat +
{
    accept();
    t1+t2;
    t3==t1;
    display();
}

void Stringop::on_pushButton_4_clicked()    //display <<
{
    accept();
    t3<<t1;
    display();
}

void Stringop::on_pushButton_5_clicked()    //reverse >>
{
    accept();
    t3>>t1;
    display();
}

void Stringop::on_pushButton_6_clicked()    //pail
{
    accept();

    t3>>t1;
    if((t3=t1)==0)
    {
        t3.str="String is pailindrome";
    }
    else
    {
        t3.str="String is not pailindrome";
    }
   display();
}

void Stringop::on_pushButton_7_clicked()    //substr
{
    accept();
    int x=0;
    x=t1.substr(t2);
    t3.str=("The substring occurence is "+(QString::number(x)));
    display();
}
