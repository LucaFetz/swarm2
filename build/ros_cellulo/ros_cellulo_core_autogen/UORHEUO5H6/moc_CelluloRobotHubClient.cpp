/****************************************************************************
** Meta object code from reading C++ file 'CelluloRobotHubClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_cellulo/include/CelluloRobot/src/comm/relay/CelluloRobotHubClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloRobotHubClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloRobotHubClient_t {
    QByteArrayData data[13];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloRobotHubClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloRobotHubClient_t qt_meta_stringdata_Cellulo__CelluloRobotHubClient = {
    {
QT_MOC_LITERAL(0, 0, 30), // "Cellulo::CelluloRobotHubClient"
QT_MOC_LITERAL(1, 31, 21), // "robotComponentChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 18), // "createRobotChanged"
QT_MOC_LITERAL(4, 73, 13), // "newRobotFound"
QT_MOC_LITERAL(5, 87, 17), // "CelluloBluetooth*"
QT_MOC_LITERAL(6, 105, 5), // "robot"
QT_MOC_LITERAL(7, 111, 20), // "createAddSelectRobot"
QT_MOC_LITERAL(8, 132, 7), // "macAddr"
QT_MOC_LITERAL(9, 140, 14), // "robotComponent"
QT_MOC_LITERAL(10, 155, 14), // "QQmlComponent*"
QT_MOC_LITERAL(11, 170, 11), // "createRobot"
QT_MOC_LITERAL(12, 182, 8) // "QJSValue"

    },
    "Cellulo::CelluloRobotHubClient\0"
    "robotComponentChanged\0\0createRobotChanged\0"
    "newRobotFound\0CelluloBluetooth*\0robot\0"
    "createAddSelectRobot\0macAddr\0"
    "robotComponent\0QQmlComponent*\0createRobot\0"
    "QJSValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloRobotHubClient[] = {

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

void Cellulo::CelluloRobotHubClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloRobotHubClient *_t = static_cast<CelluloRobotHubClient *>(_o);
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
            using _t = void (CelluloRobotHubClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRobotHubClient::robotComponentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloRobotHubClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRobotHubClient::createRobotChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloRobotHubClient::*)(CelluloBluetooth * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRobotHubClient::newRobotFound)) {
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
        CelluloRobotHubClient *_t = static_cast<CelluloRobotHubClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlComponent**>(_v) = _t->getRobotComponent(); break;
        case 1: *reinterpret_cast< QJSValue*>(_v) = _t->getCreateRobot(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloRobotHubClient *_t = static_cast<CelluloRobotHubClient *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloRobotHubClient::staticMetaObject = {
    { &CelluloTcpRelayClient::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloRobotHubClient.data,
      qt_meta_data_Cellulo__CelluloRobotHubClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloRobotHubClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloRobotHubClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloRobotHubClient.stringdata0))
        return static_cast<void*>(this);
    return CelluloTcpRelayClient::qt_metacast(_clname);
}

int Cellulo::CelluloRobotHubClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloTcpRelayClient::qt_metacall(_c, _id, _a);
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
void Cellulo::CelluloRobotHubClient::robotComponentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloRobotHubClient::createRobotChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloRobotHubClient::newRobotFound(CelluloBluetooth * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
