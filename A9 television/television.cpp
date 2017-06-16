#include "television.h"
#include "ui_television.h"
#include "QString"

television::television(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::television)
{
    ui->setupUi(this);
}

television::~television()
{
    delete ui;
}

void television::on_pushButton_clicked()    //finalize
{

    int len,price,ss;
    QString s1=this->ui->lineEdit->text();
    len=this->ui->lineEdit->text().length();
    ss=this->ui->lineEdit_2->text().toInt();
    price=this->ui->lineEdit_3->text().toInt();


    this->ui->label_4->setText("Model no is "+s1);
    this->ui->label_5->setText("Screen size is "+QString::number(ss));
    this->ui->label_6->setText("price is "+QString::number(price));
    try
    {
        if(len>4)
        {
            throw 1;
        }

        if(ss<12 ||ss>70)
        {
            throw 2;
        }

        if(price>5000 || price<0)
        {
            throw 3;
        }
        this->ui->label_7->setText("Everything correct :) ");
    }
    catch(int arg)
    {
        if(arg==1)
        {
            this->ui->label_7->setText("Invalid Model no!!");
        }

        if(arg==2)
        {
            this->ui->label_7->setText("Invalid screen size!!");
        }

        if(arg==3)
        {
            this->ui->label_7->setText("Invalid price!!");
        }
    }

}
