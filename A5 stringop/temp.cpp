#include "temp.h"
#include "string.h"
#include "QString"
temp::temp()
{
    str="";
}

int temp::operator =(temp t1)
{
    if(this->str==t1.str)
    {
        return 0;
    }
    else
    {
    return -1;
    }
}

void temp::operator ==(temp t1)
{

    this->str=t1.str;

}

void temp::operator +(temp t1)
{

    this->str=this->str + t1.str;

}

 void temp::operator <<(temp t1)
 {
     this->str=t1.str;
 }

 void temp::operator >>(temp t1)
 {
       QString b;
       b=t1.str;
       QByteArray ba=b.toUtf8();
       char *d=ba.data();
       std::reverse(d, d+b.length());   //why???????
       b=QString(d);
       this->str=b;
 }



 int temp::substr(temp t1)
 {
    int i=0;
    i=this->str.count(t1.str,Qt::CaseInsensitive);
    return i;
 }
