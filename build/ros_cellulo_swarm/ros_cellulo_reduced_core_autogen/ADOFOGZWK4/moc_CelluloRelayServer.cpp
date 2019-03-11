/****************************************************************************
** Meta object code from reading C++ file 'CelluloRelayServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../LIBS/cellulo-qml-plugin/src/comm/relay/CelluloRelayServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloRelayServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloRelayServer_t {
    QByteArrayData data[30];
    char stringdata0[448];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloRelayServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloRelayServer_t qt_meta_stringdata_Cellulo__CelluloRelayServer = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Cellulo::CelluloRelayServer"
QT_MOC_LITERAL(1, 28, 14), // "addressChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "portChanged"
QT_MOC_LITERAL(4, 56, 16), // "listeningChanged"
QT_MOC_LITERAL(5, 73, 11), // "listenError"
QT_MOC_LITERAL(6, 85, 15), // "clientConnected"
QT_MOC_LITERAL(7, 101, 18), // "clientDisconnected"
QT_MOC_LITERAL(8, 120, 10), // "robotAdded"
QT_MOC_LITERAL(9, 131, 7), // "macAddr"
QT_MOC_LITERAL(10, 139, 12), // "robotRemoved"
QT_MOC_LITERAL(11, 152, 8), // "addRobot"
QT_MOC_LITERAL(12, 161, 26), // "Cellulo::CelluloBluetooth*"
QT_MOC_LITERAL(13, 188, 5), // "robot"
QT_MOC_LITERAL(14, 194, 11), // "removeRobot"
QT_MOC_LITERAL(15, 206, 16), // "disconnectClient"
QT_MOC_LITERAL(16, 223, 9), // "addClient"
QT_MOC_LITERAL(17, 233, 12), // "deleteClient"
QT_MOC_LITERAL(18, 246, 17), // "heartbeatTimedOut"
QT_MOC_LITERAL(19, 264, 13), // "sendHeartbeat"
QT_MOC_LITERAL(20, 278, 23), // "localSocketStateChanged"
QT_MOC_LITERAL(21, 302, 30), // "QLocalSocket::LocalSocketState"
QT_MOC_LITERAL(22, 333, 5), // "state"
QT_MOC_LITERAL(23, 339, 21), // "tcpSocketStateChanged"
QT_MOC_LITERAL(24, 361, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(25, 390, 18), // "incomingClientData"
QT_MOC_LITERAL(26, 409, 18), // "checkLocalAdapters"
QT_MOC_LITERAL(27, 428, 7), // "address"
QT_MOC_LITERAL(28, 436, 4), // "port"
QT_MOC_LITERAL(29, 441, 6) // "listen"

    },
    "Cellulo::CelluloRelayServer\0addressChanged\0"
    "\0portChanged\0listeningChanged\0listenError\0"
    "clientConnected\0clientDisconnected\0"
    "robotAdded\0macAddr\0robotRemoved\0"
    "addRobot\0Cellulo::CelluloBluetooth*\0"
    "robot\0removeRobot\0disconnectClient\0"
    "addClient\0deleteClient\0heartbeatTimedOut\0"
    "sendHeartbeat\0localSocketStateChanged\0"
    "QLocalSocket::LocalSocketState\0state\0"
    "tcpSocketStateChanged\0"
    "QAbstractSocket::SocketState\0"
    "incomingClientData\0checkLocalAdapters\0"
    "address\0port\0listen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloRelayServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       3,  140, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,
       7,    0,  114,    2, 0x06 /* Public */,
       8,    1,  115,    2, 0x06 /* Public */,
      10,    1,  118,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  121,    2, 0x0a /* Public */,
      14,    1,  124,    2, 0x0a /* Public */,
      15,    0,  127,    2, 0x0a /* Public */,
      16,    0,  128,    2, 0x08 /* Private */,
      17,    0,  129,    2, 0x08 /* Private */,
      18,    0,  130,    2, 0x08 /* Private */,
      19,    0,  131,    2, 0x08 /* Private */,
      20,    1,  132,    2, 0x08 /* Private */,
      23,    1,  135,    2, 0x08 /* Private */,
      25,    0,  138,    2, 0x08 /* Private */,
      26,    0,  139,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   22,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      27, QMetaType::QString, 0x00495103,
      28, QMetaType::Int, 0x00495103,
      29, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Cellulo::CelluloRelayServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloRelayServer *_t = static_cast<CelluloRelayServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressChanged(); break;
        case 1: _t->portChanged(); break;
        case 2: _t->listeningChanged(); break;
        case 3: _t->listenError(); break;
        case 4: _t->clientConnected(); break;
        case 5: _t->clientDisconnected(); break;
        case 6: _t->robotAdded((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->robotRemoved((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->addRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1]))); break;
        case 9: _t->removeRobot((*reinterpret_cast< Cellulo::CelluloBluetooth*(*)>(_a[1]))); break;
        case 10: _t->disconnectClient(); break;
        case 11: _t->addClient(); break;
        case 12: _t->deleteClient(); break;
        case 13: _t->heartbeatTimedOut(); break;
        case 14: _t->sendHeartbeat(); break;
        case 15: _t->localSocketStateChanged((*reinterpret_cast< QLocalSocket::LocalSocketState(*)>(_a[1]))); break;
        case 16: _t->tcpSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 17: _t->incomingClientData(); break;
        case 18: _t->checkLocalAdapters(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetooth* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetooth* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::addressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::portChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::listeningChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::listenError)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::clientConnected)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::clientDisconnected)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::robotAdded)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CelluloRelayServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloRelayServer::robotRemoved)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloRelayServer *_t = static_cast<CelluloRelayServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getAddress(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getPort(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isListening(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloRelayServer *_t = static_cast<CelluloRelayServer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAddress(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPort(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setListening(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloRelayServer::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloRelayServer.data,
      qt_meta_data_Cellulo__CelluloRelayServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloRelayServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloRelayServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloRelayServer.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::CelluloRelayServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
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

// SIGNAL 0
void Cellulo::CelluloRelayServer::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloRelayServer::portChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloRelayServer::listeningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloRelayServer::listenError()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Cellulo::CelluloRelayServer::clientConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Cellulo::CelluloRelayServer::clientDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Cellulo::CelluloRelayServer::robotAdded(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Cellulo::CelluloRelayServer::robotRemoved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
