#include "database.h"
#include "ui_database.h"
#include "QStandardItemModel"
#include "QStandardItem"
 temp* t[10];   //decleard globally
database::database(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::database)
{

    count=0;
    ui->setupUi(this);
}

database::~database()
{
    int i=0;
    while(i<count)
    {
        this->ui->label_11->setText(QString("DESTRUCTOR"));
        delete t[i];
    }
    delete ui;
}

void database::on_pushButton_clicked() //submit
{
    QString name,address,bloodgroup;
    float ht,wt;
    long telno,mobno,dlno;
    long plno;

    name=this->ui->lineEdit->text();
    address=this->ui->lineEdit_2->text();
    bloodgroup=this->ui->lineEdit_3->text();
    ht=this->ui->lineEdit_4->text().toFloat();
    wt=this->ui->lineEdit_5->text().toFloat();
    telno=this->ui->lineEdit_6->text().toLong();
    mobno=this->ui->lineEdit_7->text().toLong();
    plno=this->ui->lineEdit_8->text().toLong();
    dlno=this->ui->lineEdit_9->text().toLong();
    t[count]=new temp;
    t[count]->submit(name,address,bloodgroup,ht,wt,telno,mobno,dlno,plno);
    count++;
}

void database::on_pushButton_2_clicked()//display
{
    QStandardItemModel *m=new QStandardItemModel(10,9,this);
    QStandardItem *row;

    temp tmpobj;
    int i=0;
    while(i<count)
    {
         tmpobj=t[i]->display();

         m->setHorizontalHeaderItem(0,new QStandardItem(QString("Name")));

        row=new QStandardItem(QString(t[i]->name));
        m->setItem(i,0,row);
        row=new QStandardItem(QString(t[i]->address));
        m->setItem(i,1,row);
        row=new QStandardItem(QString(t[i]->bloodgroup));
        m->setItem(i,2,row);





        this->ui->tableView->setModel(m);
         i++;
    }


}
