/****************************************************************************
** Meta object code from reading C++ file 'PolyBezierTrackerProfiledVel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_cellulo/include/CelluloRobot/src/robot/PolyBezierTrackerProfiledVel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolyBezierTrackerProfiledVel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__PolyBezierTrackerProfiledVel_t {
    QByteArrayData data[4];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__PolyBezierTrackerProfiledVel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__PolyBezierTrackerProfiledVel_t qt_meta_stringdata_Cellulo__PolyBezierTrackerProfiledVel = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Cellulo::PolyBezierTrackerPro..."
QT_MOC_LITERAL(1, 38, 30), // "trackingVelocityProfileChanged"
QT_MOC_LITERAL(2, 69, 0), // ""
QT_MOC_LITERAL(3, 70, 23) // "trackingVelocityProfile"

    },
    "Cellulo::PolyBezierTrackerProfiledVel\0"
    "trackingVelocityProfileChanged\0\0"
    "trackingVelocityProfile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__PolyBezierTrackerProfiledVel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QVariantList, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Cellulo::PolyBezierTrackerProfiledVel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PolyBezierTrackerProfiledVel *_t = static_cast<PolyBezierTrackerProfiledVel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trackingVelocityProfileChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PolyBezierTrackerProfiledVel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTrackerProfiledVel::trackingVelocityProfileChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PolyBezierTrackerProfiledVel *_t = static_cast<PolyBezierTrackerProfiledVel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->getTrackingVelocityProfile(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PolyBezierTrackerProfiledVel *_t = static_cast<PolyBezierTrackerProfiledVel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTrackingVelocityProfile(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::PolyBezierTrackerProfiledVel::staticMetaObject = {
    { &PolyBezierTracker::staticMetaObject, qt_meta_stringdata_Cellulo__PolyBezierTrackerProfiledVel.data,
      qt_meta_data_Cellulo__PolyBezierTrackerProfiledVel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::PolyBezierTrackerProfiledVel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::PolyBezierTrackerProfiledVel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__PolyBezierTrackerProfiledVel.stringdata0))
        return static_cast<void*>(this);
    return PolyBezierTracker::qt_metacast(_clname);
}

int Cellulo::PolyBezierTrackerProfiledVel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PolyBezierTracker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cellulo::PolyBezierTrackerProfiledVel::trackingVelocityProfileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
