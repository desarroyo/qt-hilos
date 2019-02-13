#ifndef __MAIN_WINDOW_H__
#define __MAIN_WINDOW_H__

#include <QMainWindow>

#include "ui_mainwindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent=0);
        Q_SLOT void setEditText(const QString & str) {
            updateInfiniteCount(10);
          }

private slots:
        void updateCount(int cnt, int hilo);
        void updateInfiniteCount(int cnt);

        void startCount();
        void startInfiniteCount();

        void countFinished();
        void infiniteCountFinished();

        void on_btnRandom_clicked();

        void on_slHilo01_valueChanged(int value);

        void on_slHilo02_valueChanged(int value);

        void on_slHilo03_valueChanged(int value);

        void on_slHilo04_valueChanged(int value);

        void on_slVelocidad_valueChanged(int value);


        void reinicia();
        void actualizaVelocidadHilo();

    private:
        void connectSignalsSlots();

        bool countRunning;
        bool infiniteCountRunning;

        Ui_MainWindow ui;


};

#endif // __MAIN_WINDOW_H__
