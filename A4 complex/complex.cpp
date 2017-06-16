#include "complex.h"
#include "ui_complex.h"
#include "temp.h"

temp t1,t2,t3;
complex::complex(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::complex)
{
    ui->setupUi(this);
}

complex::~complex()
{
    delete ui;
}

void complex::disp()
{
    temp obj;
    obj=t3.display();
    this->ui->lineEdit_5->setText((QString::number(obj.r1))+(QString("+i"))+(QString::number(obj.img1)));
    int r1=0;
    float i1=0;
    r1=t3.displayr();
    i1=t3.displayi();
    this->ui->lineEdit_5->setText((QString::number(r1))+(QString("+i"))+(QString::number(i1)));
}

void complex::accept()
{
    int r1,r2;
    float i1,i2;
    r1=this->ui->lineEdit->text().toInt();
    i1=this->ui->lineEdit_2->text().toFloat();
    r2=this->ui->lineEdit_3->text().toInt();
    i2=this->ui->lineEdit_4->text().toFloat();
    t1.submit(r1,i1);
    t2.submit(r2,i2);
}

void complex::on_pushButton_clicked() //accept
{
    int r1,r2;
    float i1,i2;
    r1=this->ui->lineEdit->text().toInt();
    i1=this->ui->lineEdit_2->text().toFloat();
    r2=this->ui->lineEdit_3->text().toInt();
    i2=this->ui->lineEdit_4->text().toFloat();
    t1.submit(r1,i1);
    t2.submit(r2,i2);
}

void complex::on_pushButton_3_clicked() //+
{
    accept();
    t3=t1+t2;
    disp();
}

void complex::on_pushButton_4_clicked() //-
{
     accept();
    t3=t1-t2;
    disp();
}

void complex::on_pushButton_5_clicked() //*
{
     accept();
    t3=t1*t2;
    disp();
}

void complex::on_pushButton_6_clicked()
{
     accept();
    t3=t1/t2;
    disp();
}
