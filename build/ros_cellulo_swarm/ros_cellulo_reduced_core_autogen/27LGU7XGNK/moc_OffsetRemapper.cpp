/****************************************************************************
** Meta object code from reading C++ file 'OffsetRemapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../LIBS/cellulo-qml-plugin/src/tile/OffsetRemapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OffsetRemapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__OffsetRemapper_t {
    QByteArrayData data[8];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__OffsetRemapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__OffsetRemapper_t qt_meta_stringdata_Cellulo__OffsetRemapper = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Cellulo::OffsetRemapper"
QT_MOC_LITERAL(1, 24, 9), // "remapPose"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 4), // "pose"
QT_MOC_LITERAL(4, 40, 6), // "sender"
QT_MOC_LITERAL(5, 47, 6), // "deltaX"
QT_MOC_LITERAL(6, 54, 6), // "deltaY"
QT_MOC_LITERAL(7, 61, 10) // "deltaTheta"

    },
    "Cellulo::OffsetRemapper\0remapPose\0\0"
    "pose\0sender\0deltaX\0deltaY\0deltaTheta"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__OffsetRemapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       1,    1,   29,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QObjectStar,    3,    4,
    QMetaType::QVector3D, QMetaType::QVector3D,    3,

 // properties: name, type, flags
       5, QMetaType::Float, 0x00095003,
       6, QMetaType::Float, 0x00095003,
       7, QMetaType::Float, 0x00095003,

       0        // eod
};

void Cellulo::OffsetRemapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OffsetRemapper *_t = static_cast<OffsetRemapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVector3D _r = _t->remapPose((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVector3D _r = _t->remapPose((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        OffsetRemapper *_t = static_cast<OffsetRemapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->deltaX; break;
        case 1: *reinterpret_cast< float*>(_v) = _t->deltaY; break;
        case 2: *reinterpret_cast< float*>(_v) = _t->deltaTheta; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        OffsetRemapper *_t = static_cast<OffsetRemapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->deltaX != *reinterpret_cast< float*>(_v)) {
                _t->deltaX = *reinterpret_cast< float*>(_v);
            }
            break;
        case 1:
            if (_t->deltaY != *reinterpret_cast< float*>(_v)) {
                _t->deltaY = *reinterpret_cast< float*>(_v);
            }
            break;
        case 2:
            if (_t->deltaTheta != *reinterpret_cast< float*>(_v)) {
                _t->deltaTheta = *reinterpret_cast< float*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::OffsetRemapper::staticMetaObject = {
    { &PoseRemapper::staticMetaObject, qt_meta_stringdata_Cellulo__OffsetRemapper.data,
      qt_meta_data_Cellulo__OffsetRemapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::OffsetRemapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::OffsetRemapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__OffsetRemapper.stringdata0))
        return static_cast<void*>(this);
    return PoseRemapper::qt_metacast(_clname);
}

int Cellulo::OffsetRemapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PoseRemapper::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
