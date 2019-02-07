#include "mainwindow.h"
#include <QApplication>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct arg_struct {
    int arg1;
    int arg2;
    int pb;
};



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    printf("RANDOM1\n");
    w.show();
printf("RANDOM2\n");


    return a.exec();
}
