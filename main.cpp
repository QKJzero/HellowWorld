#include "mainwindow.h"
#include <QApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    int b=0;
    b=1;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
