#include <QMessageBox>
#include <QThread>

#include "mainwindow.h"
#include "hilo_ui.h"
#include "hilo_abcd.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <QApplication>
#include <QMetaObject>
#include <qobjectdefs.h>

#ifdef _WIN32
#  include <windows.h>
#else
#  include <unistd.h>
#endif

int periodo = 250;

int vel_a= 0;
int vel_b= 0;
int vel_c= 0;
int vel_d= 0;

int q_a= 0;
int q_b= 0;
int q_c= 0;
int q_d= 0;


int cont_a= 0;
int cont_b= 0;
int cont_c= 0;
int cont_d= 0;

HiloABCD *workerA;
HiloABCD *workerB;
HiloABCD *workerC;
HiloABCD *workerD;

struct arg_struct {
    int hilo;
    int vel;
    MainWindow *mw;
    QProgressBar *pb;
};



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      infiniteCountRunning(false),
      countRunning(false)
{
    ui.setupUi(this);
    this->setWindowTitle("Sincronización múltiple");


    ui.lblHilo01->setStyleSheet("QLabel { color : blue; }");
    ui.lblHilo02->setStyleSheet("QLabel { color : red; }");
    ui.lblHilo03->setStyleSheet("QLabel { color : green; }");
    ui.lblHilo04->setStyleSheet("QLabel { color : gray; }");

    ui.lblHilo01_velocidad->setStyleSheet("QLabel { color : blue; }");
    ui.lblHilo02_velocidad->setStyleSheet("QLabel { color : red; }");
    ui.lblHilo03_velocidad->setStyleSheet("QLabel { color : green; }");
    ui.lblHilo04_velocidad->setStyleSheet("QLabel { color : gray; }");

    ui.pbHilo01->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: #fbf3ec;}QProgressBar::chunk {background-color: #99d4d9;width: 20px;}");
    ui.pbHilo01->setAlignment(Qt::AlignCenter);
    ui.pbHilo02->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: #fbf3ec;}QProgressBar::chunk {background-color: #daa482;width: 20px;}");
    ui.pbHilo02->setAlignment(Qt::AlignCenter);
    ui.pbHilo03->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: #fbf3ec;}QProgressBar::chunk {background-color: #44aa44;width: 20px;}");
    ui.pbHilo03->setAlignment(Qt::AlignCenter);
    ui.pbHilo04->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: #fbf3ec;}QProgressBar::chunk {background-color: #71cfae;width: 20px;}");
    ui.pbHilo04->setAlignment(Qt::AlignCenter);

    vel_a = 10;
    ui.slHilo01->setValue(vel_a);
    ui.pbHilo01->setValue(cont_a);

    vel_b = 100;
    ui.slHilo02->setValue(vel_b);
    ui.pbHilo02->setValue(cont_b);

    vel_c = 20;
    ui.slHilo03->setValue(vel_c);
    ui.pbHilo03->setValue(cont_c);

    vel_d = 189;
    ui.slHilo04->setValue(vel_d);
    ui.pbHilo04->setValue(cont_d);


    connectSignalsSlots();
}

void MainWindow::updateCount(int cnt, int hilo)
{
    switch (hilo) {
        case 1:
        cont_a = cont_a+1;
        q_a = q_a+1;
        ui.pbHilo01->setValue(cont_a);
        break;
    case 2:
        cont_b = cont_b+1;
        q_b = q_b+1;
        ui.pbHilo02->setValue(cont_b);
        break;
    case 3:
        cont_c = cont_c+1;
        q_c = q_c+1;
        ui.pbHilo03->setValue(cont_c);
        break;
    case 4:
        cont_d = cont_d+1;
        q_d = q_d+1;
        ui.pbHilo04->setValue(cont_d);
        break;
    }

    if(q_a >= workerA->getQuantum() && cont_a < periodo){
        workerA->doWait(true);
        q_a = 0;
    }else if(cont_a >= periodo){
        workerA->doWait(true);
        q_a = 0;
    }
    if(q_b >= workerB->getQuantum() && cont_b < periodo){
        workerB->doWait(true);
        q_b = 0;
    }else if(cont_b >= periodo){
        workerB->doWait(true);
        q_b = 0;
    }
    if(q_c >= workerC->getQuantum() && cont_c < periodo){
        workerC->doWait(true);
        q_c = 0;
    }else if(cont_c >= periodo){
        workerC->doWait(true);
        q_c = 0;
    }
    if(q_d >= workerD->getQuantum() && cont_d < periodo){
        workerD->doWait(true);
        q_d = 0;
    }else if(cont_d >= periodo){
        workerD->doWait(true);
        q_d = 0;
    }

    if(workerA->isWaiting() && workerB->isWaiting() && workerC->isWaiting() && workerD->isWaiting()){

        if(cont_a >= periodo && cont_b >= periodo && cont_c >= periodo && cont_d >= periodo ){
            reinicia();
        }

         if(cont_a < periodo)
            workerA->doWait(false);
         if(cont_b < periodo)
            workerB->doWait(false);
         if(cont_c < periodo)
            workerC->doWait(false);
         if(cont_d < periodo)
            workerD->doWait(false);

    }

    /*
    if(cont_a >= 100 && cont_b >= 100 && cont_c >= 100 && cont_d >= 100 ){
        reinicia();
    }
    */

}

void MainWindow::reinicia(){
    cont_a = 0;
    q_a = 0;
    ui.pbHilo01->setValue(cont_a);

    cont_b = 0;
    q_b = 0;
    ui.pbHilo02->setValue(cont_b);

    cont_c = 0;
    q_c = 0;
    ui.pbHilo03->setValue(cont_c);

    cont_d = 0;
    q_d = 0;
    ui.pbHilo04->setValue(cont_d);
}

void MainWindow::updateInfiniteCount(int cnt)
{
    ui.lblCount->setText(QString::number(cnt)+" seg.");
    ui.pbHilo01->setValue(cont_a);
}

void MainWindow::startCount()
{
    QThread  *workerThreadA;
    QThread  *workerThreadB;
    QThread  *workerThreadC;
    QThread  *workerThreadD;



    if (countRunning) {
        QMessageBox::critical(this, "Error", "Los Hilos ya estan corriendo!");
        return;
    }

    workerThreadA = new QThread;
    workerThreadB = new QThread;
    workerThreadC = new QThread;
    workerThreadD = new QThread;

    int velocidad = 1;

    switch(ui.slVelocidad->value()){
        case 1:
            velocidad = 1;
        break;
        case 2:
            velocidad = 10;
        break;
        case 3:
            velocidad = 100;
        break;
    }

    workerA       = new HiloABCD(1, ui.slHilo01->value(), 0, 100, velocidad);
    workerB       = new HiloABCD(2, ui.slHilo02->value(), 0, 100, velocidad);
    workerC       = new HiloABCD(3, ui.slHilo03->value(), 0, 100, velocidad);
    workerD       = new HiloABCD(4, ui.slHilo04->value(), 0, 100, velocidad);


    workerA->moveToThread(workerThreadA);
    workerB->moveToThread(workerThreadB);
    workerC->moveToThread(workerThreadC);
    workerD->moveToThread(workerThreadD);

    connect(workerThreadA, SIGNAL(started()), workerA, SLOT(doWork()));
    connect(workerThreadB, SIGNAL(started()), workerB, SLOT(doWork()));
    connect(workerThreadC, SIGNAL(started()), workerC, SLOT(doWork()));
    connect(workerThreadD, SIGNAL(started()), workerD, SLOT(doWork()));

    connect(workerA, SIGNAL(finished()), workerThreadA, SLOT(quit()));
    connect(workerB, SIGNAL(finished()), workerThreadB, SLOT(quit()));
    connect(workerC, SIGNAL(finished()), workerThreadC, SLOT(quit()));
    connect(workerD, SIGNAL(finished()), workerThreadD, SLOT(quit()));

    connect(workerA, SIGNAL(finished()), workerA, SLOT(deleteLater()));
    connect(workerB, SIGNAL(finished()), workerB, SLOT(deleteLater()));
    connect(workerC, SIGNAL(finished()), workerC, SLOT(deleteLater()));
    connect(workerD, SIGNAL(finished()), workerD, SLOT(deleteLater()));

    connect(workerA, SIGNAL(finished()), this, SLOT(countFinished()));
    connect(workerB, SIGNAL(finished()), this, SLOT(countFinished()));
    connect(workerC, SIGNAL(finished()), this, SLOT(countFinished()));
    connect(workerD, SIGNAL(finished()), this, SLOT(countFinished()));

    connect(workerThreadA, SIGNAL(finished()), workerThreadA, SLOT(deleteLater()));
    connect(workerThreadB, SIGNAL(finished()), workerThreadB, SLOT(deleteLater()));
    connect(workerThreadC, SIGNAL(finished()), workerThreadC, SLOT(deleteLater()));
    connect(workerThreadD, SIGNAL(finished()), workerThreadD, SLOT(deleteLater()));

    connect(workerA, SIGNAL(updateCount(int, int)), this, SLOT(updateCount(int, int)));
    connect(workerB, SIGNAL(updateCount(int, int)), this, SLOT(updateCount(int, int)));
    connect(workerC, SIGNAL(updateCount(int, int)), this, SLOT(updateCount(int, int)));
    connect(workerD, SIGNAL(updateCount(int, int)), this, SLOT(updateCount(int, int)));

    connect(ui.btnStop, SIGNAL(clicked()), workerA, SLOT(stopWork()));
    connect(ui.btnStop, SIGNAL(clicked()), workerB, SLOT(stopWork()));
    connect(ui.btnStop, SIGNAL(clicked()), workerC, SLOT(stopWork()));
    connect(ui.btnStop, SIGNAL(clicked()), workerD, SLOT(stopWork()));

    workerThreadA->start();
    workerThreadB->start();
    workerThreadC->start();
    workerThreadD->start();





    countRunning = true;
}

void MainWindow::startInfiniteCount()
{

    QThread             *workerThread;
    HiloUI *worker;

    if (infiniteCountRunning) {
        QMessageBox::critical(this, "Error", "El hilo de UI ya esta corriendo!");
        return;
    }

    workerThread = new QThread;
    worker       = new HiloUI;
    worker->moveToThread(workerThread);
    connect(workerThread, SIGNAL(started()), worker, SLOT(doWork()));
    connect(worker, SIGNAL(finished()), workerThread, SLOT(quit()));
    connect(worker, SIGNAL(finished()), worker, SLOT(deleteLater()));
    connect(workerThread, SIGNAL(finished()), workerThread, SLOT(deleteLater()));
    connect(worker, SIGNAL(finished()), this, SLOT(infiniteCountFinished()));
    connect(worker, SIGNAL(updateCount(int)), this, SLOT(updateInfiniteCount(int)));
    connect(ui.btnStop, SIGNAL(clicked()), worker, SLOT(stopWork()));
    workerThread->start();

    infiniteCountRunning = true;

    /*
    pthread_t referencia;

    printf("Iniciando el proceso\n");

    struct arg_struct args;
       args.hilo = 1;
       args.vel = 100;
       args.mw = this;
       args.pb = this->ui.pbHilo01;

    pthread_create(&referencia, NULL, ejecutaSegundoPlano, (void *) &args);
    pthread_join(referencia,NULL);

    */
}

void MainWindow::countFinished()
{
    countRunning = false;

   reinicia();
}

void MainWindow::infiniteCountFinished()
{
    infiniteCountRunning = false;
    /*
    cont_a = 0;
    ui.pbHilo01->setValue(cont_a);
    */
}

void MainWindow::connectSignalsSlots()
{
    connect(ui.btnStart, SIGNAL(clicked()), this, SLOT(startInfiniteCount()));
    connect(ui.btnStart, SIGNAL(clicked()), this, SLOT(startCount()));
}

void MainWindow::on_btnRandom_clicked()
{

    vel_a = rand() %200;
    ui.slHilo01->setValue(vel_a);

    vel_b = rand() %200;
    ui.slHilo02->setValue(vel_b);

    vel_c = rand() %200;
    ui.slHilo03->setValue(vel_c);

    vel_d = rand() %200;
    ui.slHilo04->setValue(vel_d);

    actualizaVelocidadHilo();

}

void MainWindow::actualizaVelocidadHilo(){
    if(workerA){
        workerA->setQuantum(vel_a);
    }
    if(workerB){
        workerB->setQuantum(vel_b);
    }
    if(workerC){
        workerC->setQuantum(vel_c);
    }
    if(workerD){
        workerD->setQuantum(vel_d);
    }
}

void MainWindow::on_slVelocidad_valueChanged(int value)
{
    int velocidad = 1;

    switch(value){
        case 1:
            velocidad = 1;
        break;
        case 2:
            velocidad = 10;
        break;
        case 3:
            velocidad = 100;
        break;
    }

    if(workerA){
        workerA->setVelocidad(velocidad);
        workerB->setVelocidad(velocidad);
        workerC->setVelocidad(velocidad);
        workerD->setVelocidad(velocidad);
    }
}

void MainWindow::on_slHilo01_valueChanged(int value)
{
    vel_a = value;
    ui.lblHilo01_velocidad->setText(QString::number(value));
    actualizaVelocidadHilo();
}

void MainWindow::on_slHilo02_valueChanged(int value)
{
    vel_b = value;
    ui.lblHilo02_velocidad->setText(QString::number(value));
    actualizaVelocidadHilo();
}

void MainWindow::on_slHilo03_valueChanged(int value)
{
    vel_c = value;
    ui.lblHilo03_velocidad->setText(QString::number(value));
    actualizaVelocidadHilo();
}

void MainWindow::on_slHilo04_valueChanged(int value)
{
    vel_d = value;
    ui.lblHilo04_velocidad->setText(QString::number(value));
    actualizaVelocidadHilo();
}
