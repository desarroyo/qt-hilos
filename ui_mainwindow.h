/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupHilos;
    QPushButton *btnStop;
    QLabel *lblCount;
    QLabel *lblms_3;
    QLabel *lblminslider_7;
    QLabel *lblHilo02;
    QLabel *lblms;
    QLabel *lblminslider_3;
    QLabel *lblHilo03_velocidad;
    QLabel *lblms_4;
    QLabel *lblminslider_4;
    QPushButton *btnStart;
    QLabel *lblHilo01;
    QProgressBar *pbHilo03;
    QLabel *lblminslider_6;
    QLabel *lblHilo04;
    QLabel *lblminslider_2;
    QSlider *slHilo03;
    QLabel *lblminslider_8;
    QSlider *slHilo02;
    QSlider *slHilo04;
    QLabel *lblHilo02_velocidad;
    QProgressBar *pbHilo04;
    QProgressBar *pbHilo02;
    QLabel *lblms_2;
    QSlider *slHilo01;
    QProgressBar *pbHilo01;
    QLabel *lblminslider_5;
    QLabel *lblHilo04_velocidad;
    QLabel *lblminslider;
    QLabel *lblHilo01_velocidad;
    QLabel *lblHilo03;
    QPushButton *btnRandom;
    QLabel *label;
    QLabel *lblTiempoTranscurrido;
    QSlider *slVelocidad;
    QLabel *lblms_5;
    QLabel *lblHilo01_velocidad_2;
    QLabel *lblHilo01_velocidad_3;
    QLabel *lblHilo01_velocidad_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(481, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupHilos = new QGroupBox(centralwidget);
        groupHilos->setObjectName(QString::fromUtf8("groupHilos"));
        btnStop = new QPushButton(groupHilos);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setGeometry(QRect(400, 350, 51, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8("assets/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon);
        btnStop->setIconSize(QSize(30, 30));
        lblCount = new QLabel(groupHilos);
        lblCount->setObjectName(QString::fromUtf8("lblCount"));
        lblCount->setGeometry(QRect(410, 20, 51, 31));
        lblCount->setLayoutDirection(Qt::RightToLeft);
        lblCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblms_3 = new QLabel(groupHilos);
        lblms_3->setObjectName(QString::fromUtf8("lblms_3"));
        lblms_3->setGeometry(QRect(430, 180, 31, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Black"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lblms_3->setFont(font);
        lblms_3->setFrameShape(QFrame::NoFrame);
        lblms_3->setFrameShadow(QFrame::Raised);
        lblms_3->setMidLineWidth(0);
        lblms_3->setTextFormat(Qt::PlainText);
        lblms_3->setMargin(5);
        lblminslider_7 = new QLabel(groupHilos);
        lblminslider_7->setObjectName(QString::fromUtf8("lblminslider_7"));
        lblminslider_7->setGeometry(QRect(280, 210, 21, 21));
        lblminslider_7->setLayoutDirection(Qt::LeftToRight);
        lblminslider_7->setFrameShape(QFrame::NoFrame);
        lblminslider_7->setFrameShadow(QFrame::Raised);
        lblminslider_7->setMidLineWidth(0);
        lblminslider_7->setTextFormat(Qt::PlainText);
        lblminslider_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblminslider_7->setMargin(5);
        lblHilo02 = new QLabel(groupHilos);
        lblHilo02->setObjectName(QString::fromUtf8("lblHilo02"));
        lblHilo02->setGeometry(QRect(10, 150, 231, 21));
        lblHilo02->setFont(font);
        lblHilo02->setFrameShape(QFrame::NoFrame);
        lblHilo02->setFrameShadow(QFrame::Raised);
        lblHilo02->setMidLineWidth(0);
        lblHilo02->setTextFormat(Qt::PlainText);
        lblHilo02->setMargin(5);
        lblms = new QLabel(groupHilos);
        lblms->setObjectName(QString::fromUtf8("lblms"));
        lblms->setGeometry(QRect(430, 60, 31, 21));
        lblms->setFont(font);
        lblms->setFrameShape(QFrame::NoFrame);
        lblms->setFrameShadow(QFrame::Raised);
        lblms->setMidLineWidth(0);
        lblms->setTextFormat(Qt::PlainText);
        lblms->setMargin(5);
        lblminslider_3 = new QLabel(groupHilos);
        lblminslider_3->setObjectName(QString::fromUtf8("lblminslider_3"));
        lblminslider_3->setGeometry(QRect(420, 150, 31, 21));
        lblminslider_3->setLayoutDirection(Qt::LeftToRight);
        lblminslider_3->setFrameShape(QFrame::NoFrame);
        lblminslider_3->setFrameShadow(QFrame::Raised);
        lblminslider_3->setMidLineWidth(0);
        lblminslider_3->setTextFormat(Qt::PlainText);
        lblminslider_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblminslider_3->setMargin(5);
        lblHilo03_velocidad = new QLabel(groupHilos);
        lblHilo03_velocidad->setObjectName(QString::fromUtf8("lblHilo03_velocidad"));
        lblHilo03_velocidad->setGeometry(QRect(380, 180, 51, 21));
        lblHilo03_velocidad->setFont(font);
        lblHilo03_velocidad->setLayoutDirection(Qt::LeftToRight);
        lblHilo03_velocidad->setFrameShape(QFrame::NoFrame);
        lblHilo03_velocidad->setFrameShadow(QFrame::Raised);
        lblHilo03_velocidad->setMidLineWidth(0);
        lblHilo03_velocidad->setTextFormat(Qt::PlainText);
        lblHilo03_velocidad->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblHilo03_velocidad->setMargin(5);
        lblms_4 = new QLabel(groupHilos);
        lblms_4->setObjectName(QString::fromUtf8("lblms_4"));
        lblms_4->setGeometry(QRect(430, 240, 31, 21));
        lblms_4->setFont(font);
        lblms_4->setFrameShape(QFrame::NoFrame);
        lblms_4->setFrameShadow(QFrame::Raised);
        lblms_4->setMidLineWidth(0);
        lblms_4->setTextFormat(Qt::PlainText);
        lblms_4->setMargin(5);
        lblminslider_4 = new QLabel(groupHilos);
        lblminslider_4->setObjectName(QString::fromUtf8("lblminslider_4"));
        lblminslider_4->setGeometry(QRect(280, 150, 21, 21));
        lblminslider_4->setLayoutDirection(Qt::LeftToRight);
        lblminslider_4->setFrameShape(QFrame::NoFrame);
        lblminslider_4->setFrameShadow(QFrame::Raised);
        lblminslider_4->setMidLineWidth(0);
        lblminslider_4->setTextFormat(Qt::PlainText);
        lblminslider_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblminslider_4->setMargin(5);
        btnStart = new QPushButton(groupHilos);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(280, 350, 111, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("OCR A Extended"));
        font1.setPointSize(12);
        btnStart->setFont(font1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("assets/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnStart->setIcon(icon1);
        lblHilo01 = new QLabel(groupHilos);
        lblHilo01->setObjectName(QString::fromUtf8("lblHilo01"));
        lblHilo01->setGeometry(QRect(10, 90, 231, 21));
        lblHilo01->setFont(font);
        lblHilo01->setFrameShape(QFrame::NoFrame);
        lblHilo01->setFrameShadow(QFrame::Raised);
        lblHilo01->setMidLineWidth(0);
        lblHilo01->setTextFormat(Qt::PlainText);
        lblHilo01->setMargin(5);
        pbHilo03 = new QProgressBar(groupHilos);
        pbHilo03->setObjectName(QString::fromUtf8("pbHilo03"));
        pbHilo03->setGeometry(QRect(10, 210, 261, 23));
        pbHilo03->setMaximum(250);
        pbHilo03->setValue(250);
        pbHilo03->setTextVisible(true);
        lblminslider_6 = new QLabel(groupHilos);
        lblminslider_6->setObjectName(QString::fromUtf8("lblminslider_6"));
        lblminslider_6->setGeometry(QRect(420, 270, 31, 21));
        lblminslider_6->setLayoutDirection(Qt::LeftToRight);
        lblminslider_6->setFrameShape(QFrame::NoFrame);
        lblminslider_6->setFrameShadow(QFrame::Raised);
        lblminslider_6->setMidLineWidth(0);
        lblminslider_6->setTextFormat(Qt::PlainText);
        lblminslider_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblminslider_6->setMargin(5);
        lblHilo04 = new QLabel(groupHilos);
        lblHilo04->setObjectName(QString::fromUtf8("lblHilo04"));
        lblHilo04->setGeometry(QRect(10, 270, 231, 21));
        lblHilo04->setFont(font);
        lblHilo04->setFrameShape(QFrame::NoFrame);
        lblHilo04->setFrameShadow(QFrame::Raised);
        lblHilo04->setMidLineWidth(0);
        lblHilo04->setTextFormat(Qt::PlainText);
        lblHilo04->setMargin(5);
        lblminslider_2 = new QLabel(groupHilos);
        lblminslider_2->setObjectName(QString::fromUtf8("lblminslider_2"));
        lblminslider_2->setGeometry(QRect(420, 90, 31, 21));
        lblminslider_2->setLayoutDirection(Qt::LeftToRight);
        lblminslider_2->setFrameShape(QFrame::NoFrame);
        lblminslider_2->setFrameShadow(QFrame::Raised);
        lblminslider_2->setMidLineWidth(0);
        lblminslider_2->setTextFormat(Qt::PlainText);
        lblminslider_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblminslider_2->setMargin(5);
        slHilo03 = new QSlider(groupHilos);
        slHilo03->setObjectName(QString::fromUtf8("slHilo03"));
        slHilo03->setGeometry(QRect(300, 210, 121, 22));
        slHilo03->setMinimum(1);
        slHilo03->setMaximum(200);
        slHilo03->setSingleStep(10);
        slHilo03->setValue(1);
        slHilo03->setTracking(true);
        slHilo03->setOrientation(Qt::Horizontal);
        slHilo03->setTickInterval(20);
        lblminslider_8 = new QLabel(groupHilos);
        lblminslider_8->setObjectName(QString::fromUtf8("lblminslider_8"));
        lblminslider_8->setGeometry(QRect(280, 270, 21, 21));
        lblminslider_8->setLayoutDirection(Qt::LeftToRight);
        lblminslider_8->setFrameShape(QFrame::NoFrame);
        lblminslider_8->setFrameShadow(QFrame::Raised);
        lblminslider_8->setMidLineWidth(0);
        lblminslider_8->setTextFormat(Qt::PlainText);
        lblminslider_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblminslider_8->setMargin(5);
        slHilo02 = new QSlider(groupHilos);
        slHilo02->setObjectName(QString::fromUtf8("slHilo02"));
        slHilo02->setGeometry(QRect(300, 150, 121, 22));
        slHilo02->setMinimum(1);
        slHilo02->setMaximum(200);
        slHilo02->setSingleStep(10);
        slHilo02->setValue(1);
        slHilo02->setTracking(true);
        slHilo02->setOrientation(Qt::Horizontal);
        slHilo02->setTickInterval(20);
        slHilo04 = new QSlider(groupHilos);
        slHilo04->setObjectName(QString::fromUtf8("slHilo04"));
        slHilo04->setGeometry(QRect(300, 270, 121, 22));
        slHilo04->setMinimum(1);
        slHilo04->setMaximum(200);
        slHilo04->setSingleStep(10);
        slHilo04->setValue(1);
        slHilo04->setTracking(true);
        slHilo04->setOrientation(Qt::Horizontal);
        slHilo04->setTickInterval(20);
        lblHilo02_velocidad = new QLabel(groupHilos);
        lblHilo02_velocidad->setObjectName(QString::fromUtf8("lblHilo02_velocidad"));
        lblHilo02_velocidad->setGeometry(QRect(380, 120, 51, 21));
        lblHilo02_velocidad->setFont(font);
        lblHilo02_velocidad->setLayoutDirection(Qt::LeftToRight);
        lblHilo02_velocidad->setFrameShape(QFrame::NoFrame);
        lblHilo02_velocidad->setFrameShadow(QFrame::Raised);
        lblHilo02_velocidad->setMidLineWidth(0);
        lblHilo02_velocidad->setTextFormat(Qt::PlainText);
        lblHilo02_velocidad->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblHilo02_velocidad->setMargin(5);
        pbHilo04 = new QProgressBar(groupHilos);
        pbHilo04->setObjectName(QString::fromUtf8("pbHilo04"));
        pbHilo04->setGeometry(QRect(10, 270, 261, 23));
        pbHilo04->setMaximum(250);
        pbHilo04->setValue(250);
        pbHilo04->setTextVisible(true);
        pbHilo02 = new QProgressBar(groupHilos);
        pbHilo02->setObjectName(QString::fromUtf8("pbHilo02"));
        pbHilo02->setGeometry(QRect(10, 150, 261, 23));
        pbHilo02->setMaximum(250);
        pbHilo02->setValue(250);
        pbHilo02->setTextVisible(true);
        lblms_2 = new QLabel(groupHilos);
        lblms_2->setObjectName(QString::fromUtf8("lblms_2"));
        lblms_2->setGeometry(QRect(430, 120, 31, 21));
        lblms_2->setFont(font);
        lblms_2->setFrameShape(QFrame::NoFrame);
        lblms_2->setFrameShadow(QFrame::Raised);
        lblms_2->setMidLineWidth(0);
        lblms_2->setTextFormat(Qt::PlainText);
        lblms_2->setMargin(5);
        slHilo01 = new QSlider(groupHilos);
        slHilo01->setObjectName(QString::fromUtf8("slHilo01"));
        slHilo01->setGeometry(QRect(300, 90, 121, 22));
        slHilo01->setMinimum(1);
        slHilo01->setMaximum(200);
        slHilo01->setSingleStep(10);
        slHilo01->setValue(1);
        slHilo01->setTracking(true);
        slHilo01->setOrientation(Qt::Horizontal);
        slHilo01->setTickInterval(20);
        pbHilo01 = new QProgressBar(groupHilos);
        pbHilo01->setObjectName(QString::fromUtf8("pbHilo01"));
        pbHilo01->setGeometry(QRect(10, 90, 261, 23));
        pbHilo01->setMaximum(250);
        pbHilo01->setValue(250);
        pbHilo01->setTextVisible(true);
        lblminslider_5 = new QLabel(groupHilos);
        lblminslider_5->setObjectName(QString::fromUtf8("lblminslider_5"));
        lblminslider_5->setGeometry(QRect(420, 210, 31, 21));
        lblminslider_5->setLayoutDirection(Qt::LeftToRight);
        lblminslider_5->setFrameShape(QFrame::NoFrame);
        lblminslider_5->setFrameShadow(QFrame::Raised);
        lblminslider_5->setMidLineWidth(0);
        lblminslider_5->setTextFormat(Qt::PlainText);
        lblminslider_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblminslider_5->setMargin(5);
        lblHilo04_velocidad = new QLabel(groupHilos);
        lblHilo04_velocidad->setObjectName(QString::fromUtf8("lblHilo04_velocidad"));
        lblHilo04_velocidad->setGeometry(QRect(380, 240, 51, 21));
        lblHilo04_velocidad->setFont(font);
        lblHilo04_velocidad->setLayoutDirection(Qt::LeftToRight);
        lblHilo04_velocidad->setFrameShape(QFrame::NoFrame);
        lblHilo04_velocidad->setFrameShadow(QFrame::Raised);
        lblHilo04_velocidad->setMidLineWidth(0);
        lblHilo04_velocidad->setTextFormat(Qt::PlainText);
        lblHilo04_velocidad->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblHilo04_velocidad->setMargin(5);
        lblminslider = new QLabel(groupHilos);
        lblminslider->setObjectName(QString::fromUtf8("lblminslider"));
        lblminslider->setGeometry(QRect(280, 90, 21, 21));
        lblminslider->setLayoutDirection(Qt::LeftToRight);
        lblminslider->setFrameShape(QFrame::NoFrame);
        lblminslider->setFrameShadow(QFrame::Raised);
        lblminslider->setMidLineWidth(0);
        lblminslider->setTextFormat(Qt::PlainText);
        lblminslider->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblminslider->setMargin(5);
        lblHilo01_velocidad = new QLabel(groupHilos);
        lblHilo01_velocidad->setObjectName(QString::fromUtf8("lblHilo01_velocidad"));
        lblHilo01_velocidad->setGeometry(QRect(380, 60, 51, 21));
        lblHilo01_velocidad->setFont(font);
        lblHilo01_velocidad->setLayoutDirection(Qt::LeftToRight);
        lblHilo01_velocidad->setFrameShape(QFrame::NoFrame);
        lblHilo01_velocidad->setFrameShadow(QFrame::Raised);
        lblHilo01_velocidad->setMidLineWidth(0);
        lblHilo01_velocidad->setTextFormat(Qt::PlainText);
        lblHilo01_velocidad->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lblHilo01_velocidad->setMargin(5);
        lblHilo03 = new QLabel(groupHilos);
        lblHilo03->setObjectName(QString::fromUtf8("lblHilo03"));
        lblHilo03->setGeometry(QRect(10, 210, 231, 21));
        lblHilo03->setFont(font);
        lblHilo03->setFrameShape(QFrame::NoFrame);
        lblHilo03->setFrameShadow(QFrame::Raised);
        lblHilo03->setMidLineWidth(0);
        lblHilo03->setTextFormat(Qt::PlainText);
        lblHilo03->setMargin(5);
        btnRandom = new QPushButton(groupHilos);
        btnRandom->setObjectName(QString::fromUtf8("btnRandom"));
        btnRandom->setGeometry(QRect(280, 320, 171, 23));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("assets/random.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRandom->setIcon(icon2);
        btnRandom->setCheckable(false);
        label = new QLabel(groupHilos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 261, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("November"));
        font2.setPointSize(12);
        label->setFont(font2);
        lblTiempoTranscurrido = new QLabel(groupHilos);
        lblTiempoTranscurrido->setObjectName(QString::fromUtf8("lblTiempoTranscurrido"));
        lblTiempoTranscurrido->setGeometry(QRect(350, 0, 111, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(7);
        lblTiempoTranscurrido->setFont(font3);
        lblTiempoTranscurrido->setLayoutDirection(Qt::RightToLeft);
        lblTiempoTranscurrido->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        slVelocidad = new QSlider(groupHilos);
        slVelocidad->setObjectName(QString::fromUtf8("slVelocidad"));
        slVelocidad->setGeometry(QRect(20, 350, 121, 22));
        slVelocidad->setMinimum(1);
        slVelocidad->setMaximum(3);
        slVelocidad->setSingleStep(1);
        slVelocidad->setPageStep(1);
        slVelocidad->setValue(1);
        slVelocidad->setTracking(true);
        slVelocidad->setOrientation(Qt::Horizontal);
        slVelocidad->setTickInterval(20);
        lblms_5 = new QLabel(groupHilos);
        lblms_5->setObjectName(QString::fromUtf8("lblms_5"));
        lblms_5->setGeometry(QRect(20, 320, 121, 21));
        lblms_5->setFont(font);
        lblms_5->setFrameShape(QFrame::NoFrame);
        lblms_5->setFrameShadow(QFrame::Raised);
        lblms_5->setMidLineWidth(0);
        lblms_5->setTextFormat(Qt::PlainText);
        lblms_5->setMargin(5);
        lblHilo01_velocidad_2 = new QLabel(groupHilos);
        lblHilo01_velocidad_2->setObjectName(QString::fromUtf8("lblHilo01_velocidad_2"));
        lblHilo01_velocidad_2->setGeometry(QRect(10, 370, 31, 21));
        lblHilo01_velocidad_2->setFont(font);
        lblHilo01_velocidad_2->setLayoutDirection(Qt::RightToLeft);
        lblHilo01_velocidad_2->setFrameShape(QFrame::NoFrame);
        lblHilo01_velocidad_2->setFrameShadow(QFrame::Raised);
        lblHilo01_velocidad_2->setMidLineWidth(0);
        lblHilo01_velocidad_2->setTextFormat(Qt::PlainText);
        lblHilo01_velocidad_2->setAlignment(Qt::AlignCenter);
        lblHilo01_velocidad_2->setMargin(5);
        lblHilo01_velocidad_3 = new QLabel(groupHilos);
        lblHilo01_velocidad_3->setObjectName(QString::fromUtf8("lblHilo01_velocidad_3"));
        lblHilo01_velocidad_3->setGeometry(QRect(60, 370, 41, 21));
        lblHilo01_velocidad_3->setFont(font);
        lblHilo01_velocidad_3->setLayoutDirection(Qt::RightToLeft);
        lblHilo01_velocidad_3->setFrameShape(QFrame::NoFrame);
        lblHilo01_velocidad_3->setFrameShadow(QFrame::Raised);
        lblHilo01_velocidad_3->setMidLineWidth(0);
        lblHilo01_velocidad_3->setTextFormat(Qt::PlainText);
        lblHilo01_velocidad_3->setAlignment(Qt::AlignCenter);
        lblHilo01_velocidad_3->setMargin(5);
        lblHilo01_velocidad_4 = new QLabel(groupHilos);
        lblHilo01_velocidad_4->setObjectName(QString::fromUtf8("lblHilo01_velocidad_4"));
        lblHilo01_velocidad_4->setGeometry(QRect(120, 370, 31, 21));
        lblHilo01_velocidad_4->setFont(font);
        lblHilo01_velocidad_4->setLayoutDirection(Qt::RightToLeft);
        lblHilo01_velocidad_4->setFrameShape(QFrame::NoFrame);
        lblHilo01_velocidad_4->setFrameShadow(QFrame::Raised);
        lblHilo01_velocidad_4->setMidLineWidth(0);
        lblHilo01_velocidad_4->setTextFormat(Qt::PlainText);
        lblHilo01_velocidad_4->setAlignment(Qt::AlignCenter);
        lblHilo01_velocidad_4->setMargin(5);
        pbHilo04->raise();
        pbHilo01->raise();
        pbHilo02->raise();
        btnStop->raise();
        lblCount->raise();
        lblms_3->raise();
        lblminslider_7->raise();
        lblHilo02->raise();
        lblms->raise();
        lblminslider_3->raise();
        lblHilo03_velocidad->raise();
        lblms_4->raise();
        lblminslider_4->raise();
        btnStart->raise();
        lblHilo01->raise();
        pbHilo03->raise();
        lblminslider_6->raise();
        lblHilo04->raise();
        lblminslider_2->raise();
        slHilo03->raise();
        lblminslider_8->raise();
        slHilo02->raise();
        slHilo04->raise();
        lblHilo02_velocidad->raise();
        lblms_2->raise();
        slHilo01->raise();
        lblminslider_5->raise();
        lblHilo04_velocidad->raise();
        lblminslider->raise();
        lblHilo01_velocidad->raise();
        lblHilo03->raise();
        btnRandom->raise();
        label->raise();
        lblTiempoTranscurrido->raise();
        slVelocidad->raise();
        lblms_5->raise();
        lblHilo01_velocidad_2->raise();
        lblHilo01_velocidad_3->raise();
        lblHilo01_velocidad_4->raise();

        verticalLayout->addWidget(groupHilos);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Threader", nullptr));
        groupHilos->setTitle(QApplication::translate("MainWindow", "Hilos", nullptr));
        btnStop->setText(QString());
        lblCount->setText(QApplication::translate("MainWindow", "0", nullptr));
        lblms_3->setText(QApplication::translate("MainWindow", "ms", nullptr));
        lblminslider_7->setText(QApplication::translate("MainWindow", "0", nullptr));
        lblHilo02->setText(QApplication::translate("MainWindow", "B", nullptr));
        lblms->setText(QApplication::translate("MainWindow", "ms", nullptr));
        lblminslider_3->setText(QApplication::translate("MainWindow", "200", nullptr));
        lblHilo03_velocidad->setText(QApplication::translate("MainWindow", "10", nullptr));
        lblms_4->setText(QApplication::translate("MainWindow", "ms", nullptr));
        lblminslider_4->setText(QApplication::translate("MainWindow", "0", nullptr));
        btnStart->setText(QApplication::translate("MainWindow", "Comenzar", nullptr));
        lblHilo01->setText(QApplication::translate("MainWindow", "A", nullptr));
        pbHilo03->setFormat(QApplication::translate("MainWindow", "%v", nullptr));
        lblminslider_6->setText(QApplication::translate("MainWindow", "200", nullptr));
        lblHilo04->setText(QApplication::translate("MainWindow", "D", nullptr));
        lblminslider_2->setText(QApplication::translate("MainWindow", "200", nullptr));
        lblminslider_8->setText(QApplication::translate("MainWindow", "0", nullptr));
        lblHilo02_velocidad->setText(QApplication::translate("MainWindow", "10", nullptr));
        pbHilo04->setFormat(QApplication::translate("MainWindow", "%v", nullptr));
        pbHilo02->setFormat(QApplication::translate("MainWindow", "%v", nullptr));
        lblms_2->setText(QApplication::translate("MainWindow", "ms", nullptr));
        pbHilo01->setFormat(QApplication::translate("MainWindow", "%v", nullptr));
        lblminslider_5->setText(QApplication::translate("MainWindow", "200", nullptr));
        lblHilo04_velocidad->setText(QApplication::translate("MainWindow", "10", nullptr));
        lblminslider->setText(QApplication::translate("MainWindow", "0", nullptr));
        lblHilo01_velocidad->setText(QApplication::translate("MainWindow", "10", nullptr));
        lblHilo03->setText(QApplication::translate("MainWindow", "C", nullptr));
        btnRandom->setText(QApplication::translate("MainWindow", "Valores Aleatorios", nullptr));
        label->setText(QApplication::translate("MainWindow", "Sincronizaci\303\263n m\303\272ltiple", nullptr));
        lblTiempoTranscurrido->setText(QApplication::translate("MainWindow", "Tiempo transcurrido", nullptr));
        lblms_5->setText(QApplication::translate("MainWindow", "Velocidad", nullptr));
        lblHilo01_velocidad_2->setText(QApplication::translate("MainWindow", "1", nullptr));
        lblHilo01_velocidad_3->setText(QApplication::translate("MainWindow", "2", nullptr));
        lblHilo01_velocidad_4->setText(QApplication::translate("MainWindow", "3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
