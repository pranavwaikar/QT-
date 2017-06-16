#include "matop.h"
#include "ui_matop.h"

matop::matop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::matop)
{
    ui->setupUi(this);
}

matop::~matop()
{
    delete ui;
}

void matop::accepti()
{
    a[0][0]=this->ui->a11->text().toInt();
    a[0][1]=this->ui->a12->text().toInt();
    a[0][2]=this->ui->a13->text().toInt();
    a[1][0]=this->ui->a21->text().toInt();
    a[1][1]=this->ui->a22->text().toInt();
    a[1][2]=this->ui->a23->text().toInt();
    a[2][0]=this->ui->a31->text().toInt();
    a[2][1]=this->ui->a32->text().toInt();
    a[2][2]=this->ui->a33->text().toInt();

    b[0][0]=this->ui->b11->text().toInt();
    b[0][1]=this->ui->b12->text().toInt();
    b[0][2]=this->ui->b13->text().toInt();
    b[1][0]=this->ui->b21->text().toInt();
    b[1][1]=this->ui->b22->text().toInt();
    b[1][2]=this->ui->b23->text().toInt();
    b[2][0]=this->ui->b31->text().toInt();
    b[2][1]=this->ui->b32->text().toInt();
    b[2][2]=this->ui->b33->text().toInt();
}

void matop::acceptf()
{
    a1[0][0]=this->ui->a11->text().toFloat();
    a1[0][1]=this->ui->a12->text().toFloat();
    a1[0][2]=this->ui->a13->text().toFloat();
    a1[1][0]=this->ui->a21->text().toFloat();
    a1[1][1]=this->ui->a22->text().toFloat();
    a1[1][2]=this->ui->a23->text().toFloat();
    a1[2][0]=this->ui->a31->text().toFloat();
    a1[2][1]=this->ui->a32->text().toFloat();
    a1[2][2]=this->ui->a33->text().toFloat();

    b1[0][0]=this->ui->b11->text().toFloat();
    b1[0][1]=this->ui->b12->text().toFloat();
    b1[0][2]=this->ui->b13->text().toFloat();
    b1[1][0]=this->ui->b21->text().toFloat();
    b1[1][1]=this->ui->b22->text().toFloat();
    b1[1][2]=this->ui->b23->text().toFloat();
    b1[2][0]=this->ui->b31->text().toFloat();
    b1[2][1]=this->ui->b32->text().toFloat();
    b1[2][2]=this->ui->b33->text().toFloat();
}

void matop::displayi()
{
    this->ui->c11->setText(QString::number(c[0][0]));
    this->ui->c12->setText(QString::number(c[0][1]));
    this->ui->c13->setText(QString::number(c[0][2]));
    this->ui->c21->setText(QString::number(c[1][0]));
    this->ui->c22->setText(QString::number(c[1][1]));
    this->ui->c23->setText(QString::number(c[1][2]));
    this->ui->c31->setText(QString::number(c[2][0]));
    this->ui->c32->setText(QString::number(c[2][1]));
    this->ui->c33->setText(QString::number(c[2][2]));
}

void matop::displayf()
{
    this->ui->c11->setText(QString::number(c1[0][0]));
    this->ui->c12->setText(QString::number(c1[0][1]));
    this->ui->c13->setText(QString::number(c1[0][2]));
    this->ui->c21->setText(QString::number(c1[1][0]));
    this->ui->c22->setText(QString::number(c1[1][1]));
    this->ui->c23->setText(QString::number(c1[1][2]));
    this->ui->c31->setText(QString::number(c1[2][0]));
    this->ui->c32->setText(QString::number(c1[2][1]));
    this->ui->c33->setText(QString::number(c1[2][2]));
}

void matop::on_pushButton_clicked() //+
{
   if(this->ui->radioButton->isChecked())
   {
       accepti();
       add(a,b,c);
       displayi();
   }

   if(this->ui->radioButton_2->isChecked())
   {
       acceptf();
       add(a1,b1,c1);
       displayf();
   }
}

void matop::on_pushButton_2_clicked()   //-
{
    if(this->ui->radioButton->isChecked())
    {
        accepti();
        sub(a,b,c);
        displayi();
    }

    if(this->ui->radioButton_2->isChecked())
    {
        acceptf();
        sub(a1,b1,c1);
        displayf();
    }
}

void matop::on_pushButton_3_clicked()   //*
{
    if(this->ui->radioButton->isChecked())
    {
        accepti();
        mul(a,b,c);
        displayi();
    }

    if(this->ui->radioButton_2->isChecked())
    {
        acceptf();
        mul(a1,b1,c1);
        displayf();
    }

}
