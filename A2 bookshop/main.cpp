#include "bookshop.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bookshop w;
    w.show();

    return a.exec();
}
