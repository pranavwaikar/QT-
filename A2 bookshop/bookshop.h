#ifndef BOOKSHOP_H
#define BOOKSHOP_H
#include"book.h"
#include <QMainWindow>

namespace Ui {
class bookshop;
}

class bookshop : public QMainWindow
{
    Q_OBJECT

public:
    book *t[10];
    int i;



    explicit bookshop(QWidget *parent = 0);
    ~bookshop();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::bookshop *ui;
};

#endif // BOOKSHOP_H
