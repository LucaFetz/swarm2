/****************************************************************************
** Meta object code from reading C++ file 'AxialHexCoords.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../LIBS/cellulo-qml-plugin/src/tile/AxialHexCoords.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AxialHexCoords.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__AxialHexCoords_t {
    QByteArrayData data[21];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__AxialHexCoords_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__AxialHexCoords_t qt_meta_stringdata_Cellulo__AxialHexCoords = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Cellulo::AxialHexCoords"
QT_MOC_LITERAL(1, 24, 20), // "physicalWidthChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "physicalHeightChanged"
QT_MOC_LITERAL(4, 68, 8), // "qChanged"
QT_MOC_LITERAL(5, 77, 8), // "rChanged"
QT_MOC_LITERAL(6, 86, 9), // "hexOffset"
QT_MOC_LITERAL(7, 96, 11), // "edgeMidList"
QT_MOC_LITERAL(8, 108, 19), // "QVector<QVector2D>&"
QT_MOC_LITERAL(9, 128, 4), // "list"
QT_MOC_LITERAL(10, 133, 10), // "cornerList"
QT_MOC_LITERAL(11, 144, 6), // "limits"
QT_MOC_LITERAL(12, 151, 6), // "float&"
QT_MOC_LITERAL(13, 158, 4), // "left"
QT_MOC_LITERAL(14, 163, 5), // "right"
QT_MOC_LITERAL(15, 169, 3), // "top"
QT_MOC_LITERAL(16, 173, 6), // "bottom"
QT_MOC_LITERAL(17, 180, 13), // "physicalWidth"
QT_MOC_LITERAL(18, 194, 14), // "physicalHeight"
QT_MOC_LITERAL(19, 209, 1), // "q"
QT_MOC_LITERAL(20, 211, 1) // "r"

    },
    "Cellulo::AxialHexCoords\0physicalWidthChanged\0"
    "\0physicalHeightChanged\0qChanged\0"
    "rChanged\0hexOffset\0edgeMidList\0"
    "QVector<QVector2D>&\0list\0cornerList\0"
    "limits\0float&\0left\0right\0top\0bottom\0"
    "physicalWidth\0physicalHeight\0q\0r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__AxialHexCoords[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   58,    2, 0x0a /* Public */,
       7,    1,   59,    2, 0x0a /* Public */,
      10,    1,   62,    2, 0x0a /* Public */,
      11,    4,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::QVector2D,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12, 0x80000000 | 12,   13,   14,   15,   16,

 // properties: name, type, flags
      17, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495001,
      19, QMetaType::Int, 0x00495103,
      20, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Cellulo::AxialHexCoords::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AxialHexCoords *_t = static_cast<AxialHexCoords *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->physicalWidthChanged(); break;
        case 1: _t->physicalHeightChanged(); break;
        case 2: _t->qChanged(); break;
        case 3: _t->rChanged(); break;
        case 4: { QVector2D _r = _t->hexOffset();
            if (_a[0]) *reinterpret_cast< QVector2D*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->edgeMidList((*reinterpret_cast< QVector<QVector2D>(*)>(_a[1]))); break;
        case 6: _t->cornerList((*reinterpret_cast< QVector<QVector2D>(*)>(_a[1]))); break;
        case 7: _t->limits((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AxialHexCoords::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AxialHexCoords::physicalWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AxialHexCoords::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AxialHexCoords::physicalHeightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AxialHexCoords::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AxialHexCoords::qChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AxialHexCoords::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AxialHexCoords::rChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AxialHexCoords *_t = static_cast<AxialHexCoords *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getPhysicalWidth(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getPhysicalHeight(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getQ(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getR(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AxialHexCoords *_t = static_cast<AxialHexCoords *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPhysicalWidth(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setQ(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setR(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::AxialHexCoords::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__AxialHexCoords.data,
      qt_meta_data_Cellulo__AxialHexCoords,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::AxialHexCoords::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::AxialHexCoords::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__AxialHexCoords.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::AxialHexCoords::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cellulo::AxialHexCoords::physicalWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::AxialHexCoords::physicalHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::AxialHexCoords::qChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::AxialHexCoords::rChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
