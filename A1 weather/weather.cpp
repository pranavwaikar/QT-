#include "weather.h"
#include "ui_weather.h"
#include "QStandardItem"
#include "QStandardItemModel"
#include "qstandarditemmodel.h"
//temp t[31];
//int i=0;
weather::weather(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::weather)
{
    ui->setupUi(this);
}

weather::~weather()
{
    delete ui;
}

void weather::on_pushButton_clicked()//accept
{
    t[i].day=this->ui->lineEdit->text().toInt();
    t[i].ht=this->ui->lineEdit_2->text().toFloat();
    t[i].lt=this->ui->lineEdit_3->text().toFloat();
    t[i].amtrain=this->ui->lineEdit_4->text().toFloat();
    t[i].amtsnow=this->ui->lineEdit_5->text().toFloat();
    i++;
}

void weather::on_pushButton_2_clicked() //display
{
    QStandardItemModel *m;
    QStandardItem *row;
    m=new QStandardItemModel(31,5,this);

    m->setHorizontalHeaderItem(0,new QStandardItem(QString("Day")));
    m->setHorizontalHeaderItem(1,new QStandardItem(QString("High temp")));
    m->setHorizontalHeaderItem(2,new QStandardItem(QString("Low temp")));
    m->setHorizontalHeaderItem(3,new QStandardItem(QString("Ammount of rain")));
    m->setHorizontalHeaderItem(4,new QStandardItem(QString("Ammount of snow")));

    int i=0;

    while(i<31)
    {
        row=new QStandardItem(QString::number(t[i].day));
        m->setItem(i,0,row);
        row=new QStandardItem(QString::number(t[i].ht));
        m->setItem(i,1,row);
        row=new QStandardItem(QString::number(t[i].lt));
        m->setItem(i,2,row);
        row=new QStandardItem(QString::number(t[i].amtrain));
        m->setItem(i,3,row);
        row=new QStandardItem(QString::number(t[i].amtsnow));
        m->setItem(i,4,row);

        this->ui->tableView->setModel(m);
        i++;
    }
}

void weather::on_pushButton_4_clicked()
{
    QApplication::quit();
}

void weather::on_pushButton_3_clicked() //Average
{
    i=0;
    int d=1;
    float ht=0,lt=0,rain=0,snow=0;
    while(t[i].day!=99)
    {
        ht =ht+t[i].ht;
        lt=lt+t[i].lt;
        rain=rain+t[i].amtrain;
        snow=snow+t[i].amtsnow;
        d++;
        i++;
    }
    d--;

    ht=ht/d;
    lt=lt/d;
    rain=rain/d;
    snow=snow/d;

    QStandardItemModel *m;
    QStandardItem *row;
    m=new QStandardItemModel(1,5,this);


    m->setHorizontalHeaderItem(0,new QStandardItem(QString("Day")));
    m->setHorizontalHeaderItem(1,new QStandardItem(QString("High temp")));
    m->setHorizontalHeaderItem(2,new QStandardItem(QString("Low temp")));
    m->setHorizontalHeaderItem(3,new QStandardItem(QString("Ammount of rain")));
    m->setHorizontalHeaderItem(4,new QStandardItem(QString("Ammount of snow")));

    row=new QStandardItem(QString::number(d));
    m->setItem(0,0,row);
    row=new QStandardItem(QString::number(ht));
    m->setItem(0,1,row);
    row=new QStandardItem(QString::number(lt));
    m->setItem(0,2,row);
    row=new QStandardItem(QString::number(rain));
    m->setItem(0,3,row);
    row=new QStandardItem(QString::number(snow));
    m->setItem(0,4,row);

    this->ui->tableView_2->setModel(m);

}
