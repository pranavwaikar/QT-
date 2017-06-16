#ifndef COMPLEX_H
#define COMPLEX_H

#include <QMainWindow>

namespace Ui {
class complex;
}

class complex : public QMainWindow
{
    Q_OBJECT

public:
    void accept();
    void disp();
    explicit complex(QWidget *parent = 0);
    ~complex();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::complex *ui;
};

#endif // COMPLEX_H
