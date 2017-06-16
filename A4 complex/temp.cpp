#include "temp.h"

temp::temp()
{
    this->r1=0;
    this->img1=0;
}

void temp::submit(int r1, float i1)
{
    this->r1=r1;
    this->img1=i1;
}

int temp::displayr()
{
    return (this->r1);
}

float temp::displayi()
{
    return (this->img1);
}

temp temp::display()
{
    temp tob;
    tob.r1=this->r1;
    tob.img1=this->img1;
    return tob;
}

temp temp::operator +(temp c)
{
    temp t1;
    t1.r1=this->r1+c.r1;
    t1.img1=this->img1+c.img1;
    return t1;
}

temp temp::operator -(temp c)
{
    temp t1;
    t1.r1=this->r1-c.r1;
    t1.img1=this->img1-c.img1;
    return t1;

}

temp temp::operator *(temp c)
{
    temp t1;
    t1.r1=this->r1*c.r1;
    t1.img1=this->img1*c.img1;
    return t1;

}

temp temp::operator /(temp c)
{
    temp t1;
    t1.r1=this->r1/c.r1;
    t1.img1=this->img1/c.img1;
    return t1;
}
