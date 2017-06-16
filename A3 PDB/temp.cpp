#include "temp.h"
#include "database.h"
temp::temp()
{
    name="x";
    address="x";
    bloodgroup="x";
    ht=0;
    wt=0;
    telno=0;
    mobno=0;
    dlno=0;
    plno=0;
}

void temp::submit(QString n,QString a,QString b,float ht,float wt,long telno,long mobno,long dlno,long plno)
{
   this->name=n;
   this->address=a;
   this->bloodgroup=b;
   this->ht=ht;
   this->wt=wt;
   this->telno=telno;
   this->mobno=mobno;
   this->dlno=dlno;
   this->plno=plno;
}

temp temp::display()
{
    temp t1;

    t1.name=this->name;
    t1.address=this->address;
    t1.bloodgroup=this->bloodgroup;
    t1.ht=this->ht;
    t1.wt=this->wt;
    t1.telno=this->telno;
    t1.mobno=this->mobno;
    t1.plno=this->plno;
    t1.dlno=this->dlno;

    return t1;
}
