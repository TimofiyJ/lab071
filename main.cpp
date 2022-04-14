#include "mainwindow.h"
#include "deque.h"
#include <QApplication>


int Node::amount=0;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
