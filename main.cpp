#include "batarychecker.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bataryChecker w;
    w.show();
    return a.exec();
}
