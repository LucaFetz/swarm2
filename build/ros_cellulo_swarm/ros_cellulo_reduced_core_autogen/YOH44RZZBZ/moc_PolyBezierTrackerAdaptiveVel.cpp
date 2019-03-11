/****************************************************************************
** Meta object code from reading C++ file 'PolyBezierTrackerAdaptiveVel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../LIBS/cellulo-qml-plugin/src/robot/PolyBezierTrackerAdaptiveVel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolyBezierTrackerAdaptiveVel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__PolyBezierTrackerAdaptiveVel_t {
    QByteArrayData data[9];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__PolyBezierTrackerAdaptiveVel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__PolyBezierTrackerAdaptiveVel_t qt_meta_stringdata_Cellulo__PolyBezierTrackerAdaptiveVel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Cellulo::PolyBezierTrackerAda..."
QT_MOC_LITERAL(1, 38, 26), // "maxTrackingVelocityChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 26), // "minTrackingVelocityChanged"
QT_MOC_LITERAL(4, 93, 30), // "currentTrackingVelocityChanged"
QT_MOC_LITERAL(5, 124, 19), // "maxTrackingVelocity"
QT_MOC_LITERAL(6, 144, 19), // "minTrackingVelocity"
QT_MOC_LITERAL(7, 164, 23), // "currentTrackingVelocity"
QT_MOC_LITERAL(8, 188, 16) // "attenuationPower"

    },
    "Cellulo::PolyBezierTrackerAdaptiveVel\0"
    "maxTrackingVelocityChanged\0\0"
    "minTrackingVelocityChanged\0"
    "currentTrackingVelocityChanged\0"
    "maxTrackingVelocity\0minTrackingVelocity\0"
    "currentTrackingVelocity\0attenuationPower"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__PolyBezierTrackerAdaptiveVel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QReal, 0x00495103,
       6, QMetaType::QReal, 0x00495103,
       7, QMetaType::QReal, 0x00495001,
       8, QMetaType::QReal, 0x00095003,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

       0        // eod
};

void Cellulo::PolyBezierTrackerAdaptiveVel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PolyBezierTrackerAdaptiveVel *_t = static_cast<PolyBezierTrackerAdaptiveVel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->maxTrackingVelocityChanged(); break;
        case 1: _t->minTrackingVelocityChanged(); break;
        case 2: _t->currentTrackingVelocityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PolyBezierTrackerAdaptiveVel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTrackerAdaptiveVel::maxTrackingVelocityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PolyBezierTrackerAdaptiveVel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTrackerAdaptiveVel::minTrackingVelocityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PolyBezierTrackerAdaptiveVel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTrackerAdaptiveVel::currentTrackingVelocityChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PolyBezierTrackerAdaptiveVel *_t = static_cast<PolyBezierTrackerAdaptiveVel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->getMaxTrackingVelocity(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->getMinTrackingVelocity(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->getCurrentTrackingVelocity(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->attenuationPower; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PolyBezierTrackerAdaptiveVel *_t = static_cast<PolyBezierTrackerAdaptiveVel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMaxTrackingVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setMinTrackingVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 3:
            if (_t->attenuationPower != *reinterpret_cast< qreal*>(_v)) {
                _t->attenuationPower = *reinterpret_cast< qreal*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::PolyBezierTrackerAdaptiveVel::staticMetaObject = {
    { &PolyBezierTracker::staticMetaObject, qt_meta_stringdata_Cellulo__PolyBezierTrackerAdaptiveVel.data,
      qt_meta_data_Cellulo__PolyBezierTrackerAdaptiveVel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::PolyBezierTrackerAdaptiveVel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::PolyBezierTrackerAdaptiveVel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__PolyBezierTrackerAdaptiveVel.stringdata0))
        return static_cast<void*>(this);
    return PolyBezierTracker::qt_metacast(_clname);
}

int Cellulo::PolyBezierTrackerAdaptiveVel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PolyBezierTracker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void Cellulo::PolyBezierTrackerAdaptiveVel::maxTrackingVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::PolyBezierTrackerAdaptiveVel::minTrackingVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::PolyBezierTrackerAdaptiveVel::currentTrackingVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
