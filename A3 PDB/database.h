#ifndef DATABASE_H
#define DATABASE_H
#include "temp.h"
#include <QMainWindow>

namespace Ui {
class database;
}

class database : public QMainWindow
{
    Q_OBJECT

public:
     int count;
    explicit database(QWidget *parent = 0);

    ~database();

private slots:
     void on_pushButton_clicked();

     void on_pushButton_2_clicked();

private:
    Ui::database *ui;
};

#endif // DATABASE_H
