#include "television.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    television w;
    w.show();

    return a.exec();
}
