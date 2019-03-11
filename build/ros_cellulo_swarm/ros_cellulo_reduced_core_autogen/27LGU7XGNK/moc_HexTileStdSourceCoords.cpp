/****************************************************************************
** Meta object code from reading C++ file 'HexTileStdSourceCoords.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../LIBS/cellulo-qml-plugin/src/tile/HexTileStdSourceCoords.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HexTileStdSourceCoords.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__HexTileStdSourceCoords_t {
    QByteArrayData data[19];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__HexTileStdSourceCoords_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__HexTileStdSourceCoords_t qt_meta_stringdata_Cellulo__HexTileStdSourceCoords = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Cellulo::HexTileStdSourceCoords"
QT_MOC_LITERAL(1, 32, 8), // "iChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 8), // "jChanged"
QT_MOC_LITERAL(4, 51, 8), // "uChanged"
QT_MOC_LITERAL(5, 60, 8), // "vChanged"
QT_MOC_LITERAL(6, 69, 28), // "connectHexTileChangedSignals"
QT_MOC_LITERAL(7, 98, 17), // "Cellulo::HexTile*"
QT_MOC_LITERAL(8, 116, 4), // "tile"
QT_MOC_LITERAL(9, 121, 31), // "disconnectHexTileChangedSignals"
QT_MOC_LITERAL(10, 153, 18), // "estimateFromCoords"
QT_MOC_LITERAL(11, 172, 6), // "coords"
QT_MOC_LITERAL(12, 179, 6), // "equals"
QT_MOC_LITERAL(13, 186, 22), // "HexTileStdSourceCoords"
QT_MOC_LITERAL(14, 209, 5), // "other"
QT_MOC_LITERAL(15, 215, 1), // "i"
QT_MOC_LITERAL(16, 217, 1), // "j"
QT_MOC_LITERAL(17, 219, 1), // "u"
QT_MOC_LITERAL(18, 221, 1) // "v"

    },
    "Cellulo::HexTileStdSourceCoords\0"
    "iChanged\0\0jChanged\0uChanged\0vChanged\0"
    "connectHexTileChangedSignals\0"
    "Cellulo::HexTile*\0tile\0"
    "disconnectHexTileChangedSignals\0"
    "estimateFromCoords\0coords\0equals\0"
    "HexTileStdSourceCoords\0other\0i\0j\0u\0v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__HexTileStdSourceCoords[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   70, // properties
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
       6,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      12,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Bool, QMetaType::QVector2D,   11,
    QMetaType::Bool, 0x80000000 | 13,   14,

 // properties: name, type, flags
      15, QMetaType::Int, 0x00495103,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Cellulo::HexTileStdSourceCoords::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HexTileStdSourceCoords *_t = static_cast<HexTileStdSourceCoords *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iChanged(); break;
        case 1: _t->jChanged(); break;
        case 2: _t->uChanged(); break;
        case 3: _t->vChanged(); break;
        case 4: _t->connectHexTileChangedSignals((*reinterpret_cast< Cellulo::HexTile*(*)>(_a[1]))); break;
        case 5: _t->disconnectHexTileChangedSignals((*reinterpret_cast< Cellulo::HexTile*(*)>(_a[1]))); break;
        case 6: { bool _r = _t->estimateFromCoords((*reinterpret_cast< const QVector2D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->equals((*reinterpret_cast< const HexTileStdSourceCoords(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::HexTile* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::HexTile* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HexTileStdSourceCoords::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HexTileStdSourceCoords::iChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (HexTileStdSourceCoords::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HexTileStdSourceCoords::jChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (HexTileStdSourceCoords::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HexTileStdSourceCoords::uChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (HexTileStdSourceCoords::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HexTileStdSourceCoords::vChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HexTileStdSourceCoords *_t = static_cast<HexTileStdSourceCoords *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getI(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getJ(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getU(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getV(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HexTileStdSourceCoords *_t = static_cast<HexTileStdSourceCoords *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setI(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setJ(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setU(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setV(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::HexTileStdSourceCoords::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__HexTileStdSourceCoords.data,
      qt_meta_data_Cellulo__HexTileStdSourceCoords,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::HexTileStdSourceCoords::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::HexTileStdSourceCoords::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__HexTileStdSourceCoords.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::HexTileStdSourceCoords::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
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
void Cellulo::HexTileStdSourceCoords::iChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::HexTileStdSourceCoords::jChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::HexTileStdSourceCoords::uChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::HexTileStdSourceCoords::vChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
