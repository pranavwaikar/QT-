#ifndef MATOP_H
#define MATOP_H

#include <QMainWindow>

namespace Ui {
class matop;
}

class matop : public QMainWindow
{
    Q_OBJECT

public:
    int a[3][3],b[3][3],c[3][3];
    float a1[3][3],b1[3][3],c1[3][3];
    void accepti();
    void acceptf();
    void displayi();
    void displayf();
    explicit matop(QWidget *parent = 0);
    ~matop();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::matop *ui;
};


template<class t>
void add(t m1[3][3],t m2[3][3],t m3[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
}


template<class t>
void sub(t m1[3][3],t m2[3][3],t m3[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m3[i][j]=m1[i][j]-m2[i][j];
        }
    }
}

template<class t>
void mul(t m1[3][3],t m2[3][3],t m3[3][3])
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m3[i][j]=0;
            for(k=0;k<3;k++)
            {
                m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
            }
        }
    }

}


#endif // MATOP_H
