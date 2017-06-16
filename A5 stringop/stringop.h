#ifndef STRINGOP_H
#define STRINGOP_H

#include <QMainWindow>

namespace Ui {
class Stringop;
}

class Stringop : public QMainWindow
{
    Q_OBJECT

public:
    void accept();
    void display();
    explicit Stringop(QWidget *parent = 0);
    ~Stringop();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Stringop *ui;
};

#endif // STRINGOP_H
