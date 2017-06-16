#ifndef TELEVISION_H
#define TELEVISION_H

#include <QMainWindow>

namespace Ui {
class television;
}

class television : public QMainWindow
{
    Q_OBJECT

public:
    explicit television(QWidget *parent = 0);
    ~television();

private slots:
    void on_pushButton_clicked();

private:
    Ui::television *ui;
};

#endif // TELEVISION_H
