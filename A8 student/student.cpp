#include "student.h"
#include "ui_student.h"
#include "stud.h"
#include "QStandardItem"
#include "QStandardItemModel"
#include "QMessageBox"

display d[10];
int i=0;
student::student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::student)
{
    ui->setupUi(this);
}

student::~student()
{
    delete ui;
}

void student::on_pushButton_clicked()   //submit
{
    QString name,subname;
    int rno,in,ex,subcode;

    name=this->ui->lineEdit->text();
    rno=this->ui->lineEdit_2->text().toInt();
    subname=this->ui->lineEdit_3->text();
    subcode=this->ui->lineEdit_4->text().toInt();
    in=this->ui->lineEdit_5->text().toInt();
    ex=this->ui->lineEdit_6->text().toInt();

    d[i].acc(name,subname,rno,in,ex,subcode);
    i++;
}



void student::on_pushButton_2_clicked() //display
{
    int x=0;
    QStandardItemModel *m=new QStandardItemModel(10,5,this);
    QStandardItem *row;

    while(x<10)
    {
        row=new QStandardItem(QString(d[x].name));
        m->setItem(x,0,row);
        row=new QStandardItem(QString(d[x].subname));
        m->setItem(x,1,row);
        row=new QStandardItem(QString::number(d[x].rno));
        m->setItem(x,2,row);
        row=new QStandardItem(QString::number(d[x].in));
        m->setItem(x,3,row);
        row=new QStandardItem(QString::number(d[x].ex));
        m->setItem(x,4,row);
        row=new QStandardItem(QString::number(d[x].subcode));
        m->setItem(x,5,row);

        this->ui->tableView->setModel(m);
        x++;
    }
}

void student::on_pushButton_3_clicked() //search
{
    int r;
    r=this->ui->lineEdit_7->text().toInt();
    int x=0;
    int flag=0;
    while (x<10)
    {
        if(r==d[x].rno)
        {
            flag=1;
            QMessageBox msg;
            msg.information(this,"Student","Record found",QMessageBox::Ok);
            break;
        }
        x++;
    }
    if(flag==0)
    {
        QMessageBox msg;
        msg.information(this,"Student","Record Not found",QMessageBox::Ok);
    }

}

void student::on_pushButton_4_clicked()//update
{
    int r;
    r=this->ui->lineEdit_7->text().toInt();
    int x=0;
    int flag=0;
    while (x<10)
    {
        if(r==d[x].rno)
        {
            flag=1;
            QMessageBox msg;
            msg.information(this,"Student","Record found now updating",QMessageBox::Ok);
            QString name,subname;
            int rno,in,ex,subcode;

            name=this->ui->lineEdit->text();
            rno=this->ui->lineEdit_2->text().toInt();
            subname=this->ui->lineEdit_3->text();
            subcode=this->ui->lineEdit_4->text().toInt();
            in=this->ui->lineEdit_5->text().toInt();
            ex=this->ui->lineEdit_6->text().toInt();

            d[x].acc(name,subname,rno,in,ex,subcode);

            break;
        }
        x++;
    }
    if(flag==0)
    {
        QMessageBox msg;
        msg.information(this,"Student","Record Not found,Can not update",QMessageBox::Ok);
    }
}

void student::on_pushButton_5_clicked() //delete
{
    int r;
    r=this->ui->lineEdit_7->text().toInt();
    int x=0;
    int flag=0;
    while (x<10)
    {
        if(r==d[x].rno)
        {
            flag=1;
            QMessageBox msg;
            msg.information(this,"Student","Record found now deleting",QMessageBox::Ok);
            QString name="x",subname="x";
            int rno=0,in=0,ex=0,subcode=0;
            d[x].acc(name,subname,rno,in,ex,subcode);
            break;
        }
        x++;
    }
    if(flag==0)
    {
        QMessageBox msg;
        msg.information(this,"Student","Record Not found,can not delete",QMessageBox::Ok);
    }
}
