#ifndef __HILO_ABCD_H__
#define __HILO_ABCD_H__

#include <QObject>

class HiloABCD : public QObject
{
    Q_OBJECT

    public:
        HiloABCD(int hilo, int speed, int start, int end);

    public slots:
        void doWork();
        void stopWork();
        void velocidad(int);

    signals:
        void updateCount(int, int);
        void finished();

    private:
        int m_hilo;
        unsigned int m_hiloSpeed;
        int m_hiloStart;
        int m_hiloEnd;
        bool m_running;
};

#endif // __INFINITE_COUNT_WORKER_H__
