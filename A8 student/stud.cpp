#include "stud.h"

stud::stud()
{
    name="x";
    subname="x";
    rno=0;
}

marks::marks()
{
    in=0;
    ex=0;
}

subject::subject()
{
    subcode=0;
}

void stud::stud_acc(QString n, QString s,int r)
{
    name=n;
    subname=s;
    rno=r;
}

void marks::marks_acc(int i, int e)
{
    in=i;
    ex=e;
}

void subject::sub_acc(int sc)
{
    subcode=sc;
}

void display::acc(QString n, QString sn, int rno, int in, int ex, int sc)
{
    stud_acc(n,sn,rno);
    marks_acc(in,ex);
    sub_acc(sc);
}
