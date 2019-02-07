/****************************************************************************
** Meta object code from reading C++ file 'hilo_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hilo_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hilo_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HiloUI_t {
    QByteArrayData data[6];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HiloUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HiloUI_t qt_meta_stringdata_HiloUI = {
    {
QT_MOC_LITERAL(0, 0, 6), // "HiloUI"
QT_MOC_LITERAL(1, 7, 11), // "updateCount"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "finished"
QT_MOC_LITERAL(4, 29, 6), // "doWork"
QT_MOC_LITERAL(5, 36, 8) // "stopWork"

    },
    "HiloUI\0updateCount\0\0finished\0doWork\0"
    "stopWork"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HiloUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    0,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   38,    2, 0x0a /* Public */,
       5,    0,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HiloUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HiloUI *_t = static_cast<HiloUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->doWork(); break;
        case 3: _t->stopWork(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HiloUI::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiloUI::updateCount)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HiloUI::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HiloUI::finished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject HiloUI::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_HiloUI.data,
    qt_meta_data_HiloUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *HiloUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HiloUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HiloUI.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HiloUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void HiloUI::updateCount(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HiloUI::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
