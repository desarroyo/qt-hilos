/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "setEditText"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "str"
QT_MOC_LITERAL(4, 28, 11), // "updateCount"
QT_MOC_LITERAL(5, 40, 3), // "cnt"
QT_MOC_LITERAL(6, 44, 4), // "hilo"
QT_MOC_LITERAL(7, 49, 19), // "updateInfiniteCount"
QT_MOC_LITERAL(8, 69, 10), // "startCount"
QT_MOC_LITERAL(9, 80, 18), // "startInfiniteCount"
QT_MOC_LITERAL(10, 99, 13), // "countFinished"
QT_MOC_LITERAL(11, 113, 21), // "infiniteCountFinished"
QT_MOC_LITERAL(12, 135, 20), // "on_btnRandom_clicked"
QT_MOC_LITERAL(13, 156, 24), // "on_slHilo01_valueChanged"
QT_MOC_LITERAL(14, 181, 5), // "value"
QT_MOC_LITERAL(15, 187, 24), // "on_slHilo02_valueChanged"
QT_MOC_LITERAL(16, 212, 24), // "on_slHilo03_valueChanged"
QT_MOC_LITERAL(17, 237, 24), // "on_slHilo04_valueChanged"
QT_MOC_LITERAL(18, 262, 8), // "reinicia"
QT_MOC_LITERAL(19, 271, 22) // "actualizaVelocidadHilo"

    },
    "MainWindow\0setEditText\0\0str\0updateCount\0"
    "cnt\0hilo\0updateInfiniteCount\0startCount\0"
    "startInfiniteCount\0countFinished\0"
    "infiniteCountFinished\0on_btnRandom_clicked\0"
    "on_slHilo01_valueChanged\0value\0"
    "on_slHilo02_valueChanged\0"
    "on_slHilo03_valueChanged\0"
    "on_slHilo04_valueChanged\0reinicia\0"
    "actualizaVelocidadHilo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       4,    2,   87,    2, 0x08 /* Private */,
       7,    1,   92,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      16,    1,  106,    2, 0x08 /* Private */,
      17,    1,  109,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setEditText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->updateInfiniteCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->startCount(); break;
        case 4: _t->startInfiniteCount(); break;
        case 5: _t->countFinished(); break;
        case 6: _t->infiniteCountFinished(); break;
        case 7: _t->on_btnRandom_clicked(); break;
        case 8: _t->on_slHilo01_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_slHilo02_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_slHilo03_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_slHilo04_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->reinicia(); break;
        case 13: _t->actualizaVelocidadHilo(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
