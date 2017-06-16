#ifndef TEMP_H
#define TEMP_H

class temp
{

    int r1;
    float img1;
    friend class complex;
 public:
    void submit(int r1,float i1);
    int displayr();
    float displayi();
    temp display();
    temp operator+(temp c);
    temp operator-(temp c);
    temp operator*(temp c);
    temp operator/(temp c);
    temp();
};

#endif // TEMP_H
