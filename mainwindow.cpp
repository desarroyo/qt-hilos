#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <QMetaObject>
#include <qobjectdefs.h>

struct arg_struct {
    int hilo;
    int vel;
    Ui_MainWindow mw;
};

int a = 0;
static int vel_a= 0;
int vel_b= 0;
int vel_c= 0;
int vel_d= 0;


void *ejecutaSegundoPlano(void *puntero){
    //nanosleep((const struct timespec[]){{0, 500000000L}}, NULL);
    printf("Ejecutando el proceso\n");
    MainWindow *args = (MainWindow *)args;
    //setValorPB();
    //this->ui->pbHilo01->setText("Ejecutando el proceso\n");
args->setEditText("");
//args->ui->pbHilo01->setValue(2);
//    QMetaObject::invokeMethod(args->ui, "setEditText", Q_ARG(QString, "random string"));
    //QMetaObject::invokeMethod(, "setEditText", Q_ARG(QString, "random string"));
    //printf("\nis [%d]",args->ui.pbHilo01->value());
    vel_b = 100;
    if(vel_b >0){
        printf("\n BOOM! cnt is [%d]", vel_b);
    }
    return NULL;
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //this->ui->btnStart->setStyleSheet("QPushButton {background-color: #44aa44;}");

    this->ui->lblHilo01->setStyleSheet("QLabel { color : blue; }");
    this->ui->lblHilo02->setStyleSheet("QLabel { color : red; }");
    this->ui->lblHilo03->setStyleSheet("QLabel { color : green; }");
    this->ui->lblHilo04->setStyleSheet("QLabel { color : gray; }");

    this->ui->lblHilo01_velocidad->setStyleSheet("QLabel { color : blue; }");
    this->ui->lblHilo02_velocidad->setStyleSheet("QLabel { color : red; }");
    this->ui->lblHilo03_velocidad->setStyleSheet("QLabel { color : green; }");
    this->ui->lblHilo04_velocidad->setStyleSheet("QLabel { color : gray; }");

    this->ui->pbHilo01->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: #fbf3ec;}QProgressBar::chunk {background-color: #99d4d9;width: 20px;}");
    this->ui->pbHilo02->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: #fbf3ec;}QProgressBar::chunk {background-color: #daa482;width: 20px;}");
    this->ui->pbHilo03->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: #fbf3ec;}QProgressBar::chunk {background-color: #44aa44;width: 20px;}");
    this->ui->pbHilo04->setStyleSheet("QProgressBar {border: 2px solid grey;border-radius: 5px;background-color: #fbf3ec;}QProgressBar::chunk {background-color: #71cfae;width: 20px;}");

    vel_a = rand() %200;
    this->ui->slHilo01->setValue(vel_a);

    vel_b = rand() %200;
    this->ui->slHilo02->setValue(vel_b);

    vel_c = rand() %200;
    this->ui->slHilo03->setValue(vel_c);

    vel_d = rand() %200;
    this->ui->slHilo04->setValue(vel_d);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setPB01(int value)
{
    this->ui->pbHilo01->setValue(value);
}



void MainWindow::on_slHilo01_actionTriggered(int action)
{

}

void MainWindow::on_slHilo01_valueChanged(int value)
{
    this->ui->lblHilo01_velocidad->setText(QString::number(value));
}

void MainWindow::on_slHilo02_valueChanged(int value)
{
    this->ui->lblHilo02_velocidad->setText(QString::number(value));
}

void MainWindow::on_slHilo03_valueChanged(int value)
{
    this->ui->lblHilo03_velocidad->setText(QString::number(value));
}

void MainWindow::on_slHilo04_valueChanged(int value)
{
    this->ui->lblHilo04_velocidad->setText(QString::number(value));
}

void MainWindow::on_btnRandom_clicked()
{
    printf("RANDOM\n");

    vel_a = rand() %200;
    this->ui->slHilo01->setValue(vel_a);

    vel_b = rand() %200;
    this->ui->slHilo02->setValue(vel_b);

    vel_c = rand() %200;
    this->ui->slHilo03->setValue(vel_c);

    vel_d = rand() %200;
    this->ui->slHilo04->setValue(vel_d);


}

void MainWindow::on_btnStart_clicked()
{

//    QMetaObject::invokeMethod(this, "setEditText", Q_ARG(QString, "random string"));
    //QMetaObject::invokeMethod(Ui_MainWindow(QWidget), "setEditText", Q_ARG(QString, "random string"));


    pthread_t referencia;

    printf("Iniciando el proceso\n");

    struct arg_struct args2;
       args2.hilo = 1;
       args2.vel = 100;
       //args.mw = NULL;

     void *args = this;

    pthread_create(&referencia, NULL, ejecutaSegundoPlano, (void *) &args);
    pthread_join(referencia,NULL);

    printf("Terminando el proceso\n");
}
