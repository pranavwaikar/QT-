#ifndef TEMP_H
#define TEMP_H
#include "QString"
#include "database.h"

class temp
{

    QString name,address,bloodgroup;
    float ht,wt;
    long telno,mobno,dlno;
    public:
    long plno;
    friend class database;
    temp();
    void  submit(QString n,QString a,QString b,float ht,float wt,long telno,long mobno,long dlno,long plno);
    temp display();

};

#endif // TEMP_H
