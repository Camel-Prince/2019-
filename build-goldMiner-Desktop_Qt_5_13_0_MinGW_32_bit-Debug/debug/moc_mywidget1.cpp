/****************************************************************************
** Meta object code from reading C++ file 'mywidget1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../goldMiner/GoldenMiner1/mywidget1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywidget1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myWidget1_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myWidget1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myWidget1_t qt_meta_stringdata_myWidget1 = {
    {
QT_MOC_LITERAL(0, 0, 9), // "myWidget1"
QT_MOC_LITERAL(1, 10, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "on_bomb_clicked"
QT_MOC_LITERAL(4, 49, 7), // "checked"
QT_MOC_LITERAL(5, 57, 21), // "on_strongdrug_clicked"
QT_MOC_LITERAL(6, 79, 22), // "on_threeleaves_clicked"
QT_MOC_LITERAL(7, 102, 20), // "on_stonebook_clicked"
QT_MOC_LITERAL(8, 123, 18), // "on_luckdog_clicked"
QT_MOC_LITERAL(9, 142, 15) // "on_next_clicked"

    },
    "myWidget1\0on_pushButton_clicked\0\0"
    "on_bomb_clicked\0checked\0on_strongdrug_clicked\0"
    "on_threeleaves_clicked\0on_stonebook_clicked\0"
    "on_luckdog_clicked\0on_next_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myWidget1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       6,    1,   56,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       8,    1,   62,    2, 0x08 /* Private */,
       9,    1,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void myWidget1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<myWidget1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_bomb_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_strongdrug_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_threeleaves_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_stonebook_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_luckdog_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_next_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject myWidget1::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_myWidget1.data,
    qt_meta_data_myWidget1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *myWidget1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myWidget1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myWidget1.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int myWidget1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
