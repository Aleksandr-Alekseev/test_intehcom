#include "mainwindow.h"
#include "tableSort.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //tableSort window;
    w.show();
    return a.exec();
}
