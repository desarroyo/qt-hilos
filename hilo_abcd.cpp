#include <QApplication>

#include "hilo_abcd.h"
#include "portablesleep.h"

HiloABCD::HiloABCD(int hilo, int velocidad, int start, int end)
    : m_running(true)
{
    m_hilo      = hilo;
    m_hiloStart = start;
    m_hiloEnd   = end;
    m_hiloSpeed = velocidad;
}

void HiloABCD::velocidad(int velocidad)
{
    m_hiloSpeed = velocidad;
}

void HiloABCD::doWork()
{
    int i = 0;
    while (m_running) {
        emit updateCount(i, m_hilo);
        i++;
        qApp->processEvents();
        PortableSleep::msleep(m_hiloSpeed);
    }
    emit finished();
}

void HiloABCD::stopWork()
{
    m_running = false;
}
