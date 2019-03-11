/****************************************************************************
** Meta object code from reading C++ file 'PolyBezierTracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../LIBS/cellulo-qml-plugin/src/robot/PolyBezierTracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PolyBezierTracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__PolyBezierTracker_t {
    QByteArrayData data[25];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__PolyBezierTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__PolyBezierTracker_t qt_meta_stringdata_Cellulo__PolyBezierTracker = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Cellulo::PolyBezierTracker"
QT_MOC_LITERAL(1, 27, 12), // "curveChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "robotChanged"
QT_MOC_LITERAL(4, 54, 20), // "controlPeriodChanged"
QT_MOC_LITERAL(5, 75, 25), // "trackingPercentageChanged"
QT_MOC_LITERAL(6, 101, 18), // "trackedPoseChanged"
QT_MOC_LITERAL(7, 120, 22), // "trackedVelocityChanged"
QT_MOC_LITERAL(8, 143, 12), // "startReached"
QT_MOC_LITERAL(9, 156, 10), // "endReached"
QT_MOC_LITERAL(10, 167, 13), // "startTracking"
QT_MOC_LITERAL(11, 181, 11), // "updateCurve"
QT_MOC_LITERAL(12, 193, 16), // "robotControlLoop"
QT_MOC_LITERAL(13, 210, 9), // "deltaTime"
QT_MOC_LITERAL(14, 220, 5), // "curve"
QT_MOC_LITERAL(15, 226, 20), // "Cellulo::PolyBezier*"
QT_MOC_LITERAL(16, 247, 5), // "robot"
QT_MOC_LITERAL(17, 253, 22), // "Cellulo::CelluloRobot*"
QT_MOC_LITERAL(18, 276, 13), // "controlPeriod"
QT_MOC_LITERAL(19, 290, 14), // "goToStartFirst"
QT_MOC_LITERAL(20, 305, 19), // "stopWhenGoalReached"
QT_MOC_LITERAL(21, 325, 10), // "cleanCurve"
QT_MOC_LITERAL(22, 336, 18), // "trackingPercentage"
QT_MOC_LITERAL(23, 355, 11), // "trackedPose"
QT_MOC_LITERAL(24, 367, 15) // "trackedVelocity"

    },
    "Cellulo::PolyBezierTracker\0curveChanged\0"
    "\0robotChanged\0controlPeriodChanged\0"
    "trackingPercentageChanged\0trackedPoseChanged\0"
    "trackedVelocityChanged\0startReached\0"
    "endReached\0startTracking\0updateCurve\0"
    "robotControlLoop\0deltaTime\0curve\0"
    "Cellulo::PolyBezier*\0robot\0"
    "Cellulo::CelluloRobot*\0controlPeriod\0"
    "goToStartFirst\0stopWhenGoalReached\0"
    "cleanCurve\0trackingPercentage\0trackedPose\0"
    "trackedVelocity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__PolyBezierTracker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       9,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   13,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0049510b,
      16, 0x80000000 | 17, 0x0049510b,
      18, QMetaType::QReal, 0x00495103,
      19, QMetaType::Bool, 0x00095003,
      20, QMetaType::Bool, 0x00095003,
      21, QMetaType::Bool, 0x00095003,
      22, QMetaType::QReal, 0x00495001,
      23, QMetaType::QVector3D, 0x00495001,
      24, QMetaType::QVector3D, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       0,
       0,
       3,
       4,
       5,

       0        // eod
};

void Cellulo::PolyBezierTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PolyBezierTracker *_t = static_cast<PolyBezierTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->curveChanged(); break;
        case 1: _t->robotChanged(); break;
        case 2: _t->controlPeriodChanged(); break;
        case 3: _t->trackingPercentageChanged(); break;
        case 4: _t->trackedPoseChanged(); break;
        case 5: _t->trackedVelocityChanged(); break;
        case 6: _t->startReached(); break;
        case 7: _t->endReached(); break;
        case 8: _t->startTracking(); break;
        case 9: _t->updateCurve(); break;
        case 10: _t->robotControlLoop((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PolyBezierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTracker::curveChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PolyBezierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTracker::robotChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PolyBezierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTracker::controlPeriodChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PolyBezierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTracker::trackingPercentageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PolyBezierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTracker::trackedPoseChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PolyBezierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTracker::trackedVelocityChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PolyBezierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTracker::startReached)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PolyBezierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PolyBezierTracker::endReached)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloRobot* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::PolyBezier* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PolyBezierTracker *_t = static_cast<PolyBezierTracker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Cellulo::PolyBezier**>(_v) = _t->getCurve(); break;
        case 1: *reinterpret_cast< Cellulo::CelluloRobot**>(_v) = _t->getRobot(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->getControlPeriod(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->goToStartFirst; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->stopWhenGoalReached; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->cleanCurve; break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->getTrackingPercentage(); break;
        case 7: *reinterpret_cast< QVector3D*>(_v) = _t->getTrackedPose(); break;
        case 8: *reinterpret_cast< QVector3D*>(_v) = _t->getTrackedVelocity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PolyBezierTracker *_t = static_cast<PolyBezierTracker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurve(*reinterpret_cast< Cellulo::PolyBezier**>(_v)); break;
        case 1: _t->setRobot(*reinterpret_cast< Cellulo::CelluloRobot**>(_v)); break;
        case 2: _t->setControlPeriod(*reinterpret_cast< qreal*>(_v)); break;
        case 3:
            if (_t->goToStartFirst != *reinterpret_cast< bool*>(_v)) {
                _t->goToStartFirst = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 4:
            if (_t->stopWhenGoalReached != *reinterpret_cast< bool*>(_v)) {
                _t->stopWhenGoalReached = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 5:
            if (_t->cleanCurve != *reinterpret_cast< bool*>(_v)) {
                _t->cleanCurve = *reinterpret_cast< bool*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::PolyBezierTracker::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__PolyBezierTracker.data,
      qt_meta_data_Cellulo__PolyBezierTracker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::PolyBezierTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::PolyBezierTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__PolyBezierTracker.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::PolyBezierTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cellulo::PolyBezierTracker::curveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::PolyBezierTracker::robotChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::PolyBezierTracker::controlPeriodChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::PolyBezierTracker::trackingPercentageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Cellulo::PolyBezierTracker::trackedPoseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Cellulo::PolyBezierTracker::trackedVelocityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Cellulo::PolyBezierTracker::startReached()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Cellulo::PolyBezierTracker::endReached()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
