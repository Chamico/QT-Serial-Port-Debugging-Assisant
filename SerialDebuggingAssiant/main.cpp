#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow my_win_;

    my_win_.setWindowTitle("串口调试助手");   //设置标题

    my_win_.show();

    return a.exec();
}
