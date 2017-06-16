#ifndef TEMP_H
#define TEMP_H
#include "string.h"
#include "QString"
class temp
{

public:
     QString str;
    friend class Stringop;
    int operator =(temp t1);
    void operator ==(temp t1);
    void operator +(temp t1);
    void operator <<(temp t1);
    void operator >>(temp t1);
    int substr(temp t1);
    temp();
};

#endif // TEMP_H
