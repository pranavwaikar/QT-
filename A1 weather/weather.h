#ifndef WEATHER_H
#define WEATHER_H

#include <QMainWindow>
#include"temp.h"

namespace Ui {
class weather;
}

class weather : public QMainWindow
{
    Q_OBJECT

public:
    int i=0;
    temp t[31];

    explicit weather(QWidget *parent = 0);
    ~weather();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::weather *ui;
};

#endif // WEATHER_H
