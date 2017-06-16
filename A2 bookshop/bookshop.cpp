#include "bookshop.h"
#include "ui_bookshop.h"
#include"QStandardItem"
#include "QStandardItemModel"
#include "QMessageBox"

bookshop::bookshop(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bookshop)
{

    ui->setupUi(this);
}

bookshop::~bookshop()
{
    delete ui;
}

void bookshop::on_pushButton_clicked()//submit
{
    t[i]=new book;
    t[i]->title=this->ui->lineEdit->text();
    t[i]->author=this->ui->lineEdit_2->text();
    t[i]->publisher=this->ui->lineEdit_4->text();
    t[i]->price=this->ui->lineEdit_3->text().toInt();
    t[i]->stock=this->ui->lineEdit_5->text().toInt();
    i++;
}

void bookshop::on_pushButton_2_clicked() //display
{
    QStandardItemModel *m;
    QStandardItem *row;
    m=new QStandardItemModel(10,5,this);

    m->setHorizontalHeaderItem(0,new QStandardItem(QString("Title")));
    m->setHorizontalHeaderItem(1,new QStandardItem(QString("Author")));
    m->setHorizontalHeaderItem(2,new QStandardItem(QString("Publisher")));
    m->setHorizontalHeaderItem(3,new QStandardItem(QString("Price")));
    m->setHorizontalHeaderItem(4,new QStandardItem(QString("stock")));

    int x=0;
    while(x<i)
    {
        row=new QStandardItem(QString(t[x]->title));
        m->setItem(x,0,row);
        row=new QStandardItem(QString(t[x]->author));
        m->setItem(x,1,row);
        row=new QStandardItem(QString(t[x]->publisher));
        m->setItem(x,2,row);
        row=new QStandardItem(QString::number(t[x]->price));
        m->setItem(x,3,row);
        row=new QStandardItem(QString::number(t[x]->stock));
        m->setItem(x,4,row);
        this->ui->tableView->setModel(m);
        x++;
    }

}

void bookshop::on_pushButton_3_clicked() //search
{
    QString s1,s2;
    s1=this->ui->lineEdit_6->text();
    s2=this->ui->lineEdit_7->text();
    int x=0;
    int flag=0;
    while(x<i)
    {
        if(s1==t[x]->title && s2==t[x]->author)
        {
            flag=1;
            QMessageBox msgbox;
            msgbox.information(this,"BOOK FOUND","Book is available in the book shop!",QMessageBox::Ok);
            msgbox.show();

            QStandardItemModel *m=new QStandardItemModel(10,5,this);
            QStandardItem *row;

            m->setHorizontalHeaderItem(0,new QStandardItem(QString("Title")));
            m->setHorizontalHeaderItem(1,new QStandardItem(QString("Author")));
            m->setHorizontalHeaderItem(2,new QStandardItem(QString("Publication")));
            m->setHorizontalHeaderItem(3,new QStandardItem(QString("Price")));
            m->setHorizontalHeaderItem(4,new QStandardItem(QString("Stock")));

            row=new QStandardItem(QString(t[x]->title));
            m->setItem(x,0,row);
            row=new QStandardItem(QString(t[x]->author));
            m->setItem(x,1,row);
            row=new QStandardItem(QString(t[x]->publisher));
            m->setItem(x,2,row);
            row=new QStandardItem(QString::number(t[x]->price));
            m->setItem(x,3,row);
            row=new QStandardItem(QString::number(t[x]->stock));
            m->setItem(x,4,row);
            this->ui->tableView_2->setModel(m);
            break;
        }

        x++;

    }
    if(flag==0)
    {
        QMessageBox msg;
        msg.information(this,"BookShop","Book not available",QMessageBox::Ok);
        msg.show();
    }
}

void bookshop::on_pushButton_4_clicked()//buy
{
    QString s1,s2;
    int quantity;
    s1=this->ui->lineEdit_6->text();
    s2=this->ui->lineEdit_7->text();
    quantity=this->ui->lineEdit_8->text().toInt();

    int x=0;
    while(x<i)
    {
        if(s1==t[x]->title && s2==t[x]->author && quantity<=t[x]->stock)
        {
            QMessageBox msgbox;
            msgbox.information(this,"BOOK FOUND","Book is available!",QMessageBox::Ok);

            t[x]->stock=t[x]->stock-quantity;
            t[x]->price=t[x]->price*quantity;

            QStandardItemModel *m=new QStandardItemModel(10,5,this);
            QStandardItem *row;

            m->setHorizontalHeaderItem(0,new QStandardItem(QString("Title")));
            m->setHorizontalHeaderItem(1,new QStandardItem(QString("Author")));
            m->setHorizontalHeaderItem(2,new QStandardItem(QString("Publication")));
            m->setHorizontalHeaderItem(3,new QStandardItem(QString("Total Price")));
            m->setHorizontalHeaderItem(4,new QStandardItem(QString("Remaining Stock")));

            row=new QStandardItem(QString(t[x]->title));
            m->setItem(x,0,row);
            row=new QStandardItem(QString(t[x]->author));
            m->setItem(x,1,row);
            row=new QStandardItem(QString(t[x]->publisher));
            m->setItem(x,2,row);
            row=new QStandardItem(QString::number(t[x]->price));
            m->setItem(x,3,row);
            row=new QStandardItem(QString::number(t[x]->stock));
            m->setItem(x,4,row);
            this->ui->tableView_2->setModel(m);
            break;
        }
        x++;

    }


}
