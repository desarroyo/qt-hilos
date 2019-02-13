#include <QApplication>

#include "hilo_abcd.h"
#include "portablesleep.h"

HiloABCD::HiloABCD(int hilo, int quantum, int start, int end, int velocidad)
    : m_running(true)
{
    m_hilo      = hilo;
    m_hiloStart = start;
    m_hiloEnd   = end;
    m_hiloQuantum = quantum;
    m_espera = false;
    m_hiloVelocidad = velocidad;
}

void HiloABCD::setVelocidad(int velocidad)
{
    m_hiloVelocidad = velocidad;
}

void HiloABCD::setQuantum(int quantum)
{
    m_hiloQuantum = quantum;
}


int  HiloABCD::getQuantum()
{
    return m_hiloQuantum;
}

void HiloABCD::doWork()
{
    int i = 0;
    while (m_running) {
        if(!m_espera){
            emit updateCount(i, m_hilo);
            i++;
            qApp->processEvents();
        }
        PortableSleep::msleep(m_hiloVelocidad);
    }
    emit finished();
}

void HiloABCD::stopWork()
{
    m_running = false;
}

bool HiloABCD::isWaiting()
{
    return m_espera;
}

void HiloABCD::doWait(bool esperar)
{
    m_espera = esperar;
}
