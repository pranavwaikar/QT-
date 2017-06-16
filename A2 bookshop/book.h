#ifndef BOOK_H
#define BOOK_H
#include "QString"
#include "string.h"

class book
{
public:
    QString title,author,publisher;
    int price,stock;
    book();
};

#endif // BOOK_H
