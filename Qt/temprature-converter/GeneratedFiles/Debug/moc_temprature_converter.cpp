/****************************************************************************
** Meta object code from reading C++ file 'temprature_converter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../temprature_converter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'temprature_converter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tempconverter_t {
    QByteArrayData data[6];
    char stringdata[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_tempconverter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_tempconverter_t qt_meta_stringdata_tempconverter = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 19),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 22),
QT_MOC_LITERAL(4, 58, 15),
QT_MOC_LITERAL(5, 74, 18)
    },
    "tempconverter\0CelsiusValueChanged\0\0"
    "FahrenheitValueChanged\0setCelsiusValue\0"
    "setFahrenheitValue\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tempconverter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       3,    1,   37,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   40,    2, 0x0a,
       5,    1,   43,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void tempconverter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tempconverter *_t = static_cast<tempconverter *>(_o);
        switch (_id) {
        case 0: _t->CelsiusValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->FahrenheitValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setCelsiusValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setFahrenheitValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (tempconverter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tempconverter::CelsiusValueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (tempconverter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tempconverter::FahrenheitValueChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject tempconverter::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_tempconverter.data,
      qt_meta_data_tempconverter,  qt_static_metacall, 0, 0}
};


const QMetaObject *tempconverter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tempconverter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tempconverter.stringdata))
        return static_cast<void*>(const_cast< tempconverter*>(this));
    if (!strcmp(_clname, "Ui::tempconverter"))
        return static_cast< Ui::tempconverter*>(const_cast< tempconverter*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int tempconverter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void tempconverter::CelsiusValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tempconverter::FahrenheitValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
