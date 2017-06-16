#include "complex.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    complex w;
    w.show();

    return a.exec();
}
