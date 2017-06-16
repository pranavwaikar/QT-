#include "matop.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    matop w;
    w.show();

    return a.exec();
}
