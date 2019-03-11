/****************************************************************************
** Meta object code from reading C++ file 'CelluloRelayClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../LIBS/cellulo-qml-plugin/src/comm/relay/CelluloRelayClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloRelayClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloRelayClient_t {
    QByteArrayData data[32];
    char stringdata0[511];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloRelayClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloRelayClient_t qt_meta_stringdata_Cellulo__CelluloRelayClient = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Cellulo::CelluloRelayClient"
QT_MOC_LITERAL(1, 28, 23), // "connectionStatusChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 18), // "autoConnectChanged"
QT_MOC_LITERAL(4, 72, 20), // "serverAddressChanged"
QT_MOC_LITERAL(5, 93, 11), // "portChanged"
QT_MOC_LITERAL(6, 105, 13), // "robotsChanged"
QT_MOC_LITERAL(7, 119, 20), // "localAdaptersChanged"
QT_MOC_LITERAL(8, 140, 9), // "connected"
QT_MOC_LITERAL(9, 150, 12), // "disconnected"
QT_MOC_LITERAL(10, 163, 20), // "unknownRobotAtServer"
QT_MOC_LITERAL(11, 184, 7), // "macAddr"
QT_MOC_LITERAL(12, 192, 15), // "connectToServer"
QT_MOC_LITERAL(13, 208, 20), // "disconnectFromServer"
QT_MOC_LITERAL(14, 229, 8), // "addRobot"
QT_MOC_LITERAL(15, 238, 26), // "Cellulo::CelluloBluetooth*"
QT_MOC_LITERAL(16, 265, 5), // "robot"
QT_MOC_LITERAL(17, 271, 6), // "select"
QT_MOC_LITERAL(18, 278, 11), // "removeRobot"
QT_MOC_LITERAL(19, 290, 18), // "incomingServerData"
QT_MOC_LITERAL(20, 309, 17), // "refreshConnection"
QT_MOC_LITERAL(21, 327, 15), // "handleConnected"
QT_MOC_LITERAL(22, 343, 18), // "handleDisconnected"
QT_MOC_LITERAL(23, 362, 13), // "sendHeartbeat"
QT_MOC_LITERAL(24, 376, 17), // "heartbeatTimedOut"
QT_MOC_LITERAL(25, 394, 16), // "connectionStatus"
QT_MOC_LITERAL(26, 411, 47), // "Cellulo::CelluloCommUtil::Rel..."
QT_MOC_LITERAL(27, 459, 13), // "serverAddress"
QT_MOC_LITERAL(28, 473, 4), // "port"
QT_MOC_LITERAL(29, 478, 11), // "autoConnect"
QT_MOC_LITERAL(30, 490, 13), // "localAdapters"
QT_MOC_LITERAL(31, 504, 6) // "robots"

    },
    "Cellulo::CelluloRelayClient\0"
    "connectionStatusChanged\0\0autoConnectChanged\0"
    "serverAddressChanged\0portChanged\0"
    "robotsChanged\0localAdaptersChanged\0"
    "connected\0disconnected\0unknownRobotAtServer\0"
    "macAddr\0connectToServer\0disconnectFromServer\0"
    "addRobot\0Cellulo::CelluloBluetooth*\0"
    "robot\0select\0removeRobot\0incomingServerData\0"
    "refreshConnection\0handleConnected\0"
    "handleDisconnected\0sendHeartbeat\0"
    "heartbeatTimedOut\0connectionStatus\0"
    "Cellulo::CelluloCommUtil::RelayConnectionStatus\0"
    "serverAddress\0port\0autoConnect\0"
    "localAdapters\0robots"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloRelayClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       6,  144, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    0,  115,    2, 0x06 /* Public */,
       4,    0,  116,    2, 0x06 /* Public */,
       5,    0,  117,    2, 0x06 /* Public */,
       6,    0,  118,    2, 0x06 /* Public */,
       7,    0,  119,    2, 0x06 /* Public */,
       8,    0,  120,    2, 0x06 /* Public */,
       9,    0,  121,    2, 0x06 /* Public */,
      10,    1,  122,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  125,    2, 0x0a /* Public */,
      13,    0,  126,    2, 0x0a /* Public */,
      14,    2,  127,    2, 0x0a /* Public */,
      14,    1,  132,    2, 0x2a /* Public | MethodCloned */,
      18,    1,  135,    2, 0x0a /* Public */,
      19,    0,  138,    2, 0x08 /* Private */,
      20,    0,  139,    2, 0x08 /* Private */,
      21,    0,  140,    2, 0x08 /* Private */,
      22,    0,  141,    2, 0x08 /* Private */,
      23,    0,  142,    2, 0x08 /* Private */,
      24,    0,  143,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Bool,   16,   17,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      25, 0x80000000 | 26, 0x00495009,
      27, QMetaType::QString, 0x00495103,
      28, QMetaType::Int, 0x00495103,
      29, QMetaType::Bool, 0x00495103,
      30, QMetaType::QVariantList, 0x00495001,
      31, QMetaType::QVariantList, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       3,
       1,
       5,
       4,

       0        // eod
};

void Cellulo::CelluloRelayClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloRelayClient *_t = static_cast<CelluloRelayClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionStatusChanged(); break;
        case 1: _t->autoConnectChanged(); break;
        case 2: _t->serverAddressChanged(); break;
        case 3: _t->portChanged(); break;
        case 4: _t->robotsChanged(); break;
        case 5: _t->localAdaptersChanged(); break;
        case 6: _t->connected(); break;
        case 7: _t->disconnected(); break;
        case 8: _t->unknownRobotAtServer((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->connectToServer(); break;
        case 10: _t->disconnectFromServer(); break;
        case 11: _t->addRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->addRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1]))); break;
        case 13: _t->removeRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1]))); break;
        case 14: _t->incomingServerData(); break;
        case 15: _t->refreshConnection(); break;
        case 16: _t->handleConnected(); break;
        case 17: _t->handleDisconnected(); break;
        case 18: _t->sendHeartbeat(); break;
        case 19: _t->heartbeatTimedOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetooth* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetooth* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetooth* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::connectionStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::autoConnectChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::serverAddressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::portChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::robotsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::localAdaptersChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::connected)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::disconnected)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CelluloRelayClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayClient::unknownRobotAtServer)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloCommUtil::RelayConnectionStatus >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloRelayClient *_t = static_cast<CelluloRelayClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Cellulo::CelluloCommUtil::RelayConnectionStatus*>(_v) = _t->getConnectionStatus(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getServerAddress(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getPort(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getAutoConnect(); break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->getLocalAdapters(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->getRobots(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloRelayClient *_t = static_cast<CelluloRelayClient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setServerAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setAutoConnect(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_Cellulo__CelluloRelayClient[] = {
        &Cellulo::CelluloCommUtil::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloRelayClient::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloRelayClient.data,
      qt_meta_data_Cellulo__CelluloRelayClient,  qt_static_metacall, qt_meta_extradata_Cellulo__CelluloRelayClient, nullptr}
};


const QMetaObject *Cellulo::CelluloRelayClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloRelayClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloRelayClient.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::CelluloRelayClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cellulo::CelluloRelayClient::connectionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloRelayClient::autoConnectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloRelayClient::serverAddressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloRelayClient::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Cellulo::CelluloRelayClient::robotsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Cellulo::CelluloRelayClient::localAdaptersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Cellulo::CelluloRelayClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Cellulo::CelluloRelayClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Cellulo::CelluloRelayClient::unknownRobotAtServer(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
