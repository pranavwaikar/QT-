#ifndef STUD_H
#define STUD_H
#include "QString"

class stud
{
protected:
    QString name,subname;
public:
    int rno;
    void stud_acc(QString n,QString s,int r);
    stud();
};

class marks:public virtual stud
{
protected:
    int in,ex;
public:
    marks();
    void marks_acc(int i,int e);
};

class subject:public virtual stud
{
protected:
    int subcode;
public:
    subject();
    void sub_acc(int sc);

};

class display:public marks,public subject
{
    friend class student;
public:
    void acc(QString n,QString sn,int rno,int in,int ex,int sc);
};

#endif // STUD_H
