#ifndef __HILO_ABCD_H__
#define __HILO_ABCD_H__

#include <QObject>

class HiloABCD : public QObject
{
    Q_OBJECT

    public:
        HiloABCD(int hilo, int speed, int start, int end, int velocidad);

    public slots:
        void doWork();
        void stopWork();
        void setQuantum(int);
        void setVelocidad(int);
        void doWait(bool);
        int getQuantum();
        bool isWaiting();

    signals:
        void updateCount(int, int);
        void finished();

    private:
        int m_hilo;
        unsigned int m_hiloQuantum;
        int m_hiloStart;
        int m_hiloEnd;
        int m_hiloVelocidad;
        bool m_running;
        bool m_espera;
};

#endif // __INFINITE_COUNT_WORKER_H__
