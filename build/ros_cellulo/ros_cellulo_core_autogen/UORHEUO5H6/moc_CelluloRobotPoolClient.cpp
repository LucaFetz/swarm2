/****************************************************************************
** Meta object code from reading C++ file 'CelluloRobotPoolClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_cellulo/include/CelluloRobot/src/comm/relay/CelluloRobotPoolClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloRobotPoolClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloRobotPoolClient_t {
    QByteArrayData data[13];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloRobotPoolClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloRobotPoolClient_t qt_meta_stringdata_Cellulo__CelluloRobotPoolClient = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Cellulo::CelluloRobotPoolClient"
QT_MOC_LITERAL(1, 32, 21), // "robotComponentChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 18), // "createRobotChanged"
QT_MOC_LITERAL(4, 74, 13), // "newRobotFound"
QT_MOC_LITERAL(5, 88, 17), // "CelluloBluetooth*"
QT_MOC_LITERAL(6, 106, 5), // "robot"
QT_MOC_LITERAL(7, 112, 20), // "createAddSelectRobot"
QT_MOC_LITERAL(8, 133, 7), // "macAddr"
QT_MOC_LITERAL(9, 141, 14), // "robotComponent"
QT_MOC_LITERAL(10, 156, 14), // "QQmlComponent*"
QT_MOC_LITERAL(11, 171, 11), // "createRobot"
QT_MOC_LITERAL(12, 183, 8) // "QJSValue"

    },
    "Cellulo::CelluloRobotPoolClient\0"
    "robotComponentChanged\0\0createRobotChanged\0"
    "newRobotFound\0CelluloBluetooth*\0robot\0"
    "createAddSelectRobot\0macAddr\0"
    "robotComponent\0QQmlComponent*\0createRobot\0"
    "QJSValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloRobotPoolClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x0049510b,
      11, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Cellulo::CelluloRobotPoolClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloRobotPoolClient *_t = static_cast<CelluloRobotPoolClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->robotComponentChanged(); break;
        case 1: _t->createRobotChanged(); break;
        case 2: _t->newRobotFound((*reinterpret_cast< CelluloBluetooth*(*)>(_a[1]))); break;
        case 3: _t->createAddSelectRobot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CelluloBluetooth* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloRobotPoolClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRobotPoolClient::robotComponentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloRobotPoolClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRobotPoolClient::createRobotChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloRobotPoolClient::*)(CelluloBluetooth * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRobotPoolClient::newRobotFound)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloRobotPoolClient *_t = static_cast<CelluloRobotPoolClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlComponent**>(_v) = _t->getRobotComponent(); break;
        case 1: *reinterpret_cast< QJSValue*>(_v) = _t->getCreateRobot(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloRobotPoolClient *_t = static_cast<CelluloRobotPoolClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRobotComponent(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 1: _t->setCreateRobot(*reinterpret_cast< QJSValue*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloRobotPoolClient::staticMetaObject = {
    { &CelluloLocalRelayClient::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloRobotPoolClient.data,
      qt_meta_data_Cellulo__CelluloRobotPoolClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloRobotPoolClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloRobotPoolClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloRobotPoolClient.stringdata0))
        return static_cast<void*>(this);
    return CelluloLocalRelayClient::qt_metacast(_clname);
}

int Cellulo::CelluloRobotPoolClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloLocalRelayClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cellulo::CelluloRobotPoolClient::robotComponentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloRobotPoolClient::createRobotChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloRobotPoolClient::newRobotFound(CelluloBluetooth * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
