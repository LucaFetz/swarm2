/****************************************************************************
** Meta object code from reading C++ file 'CelluloLocalRelayServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_cellulo/include/CelluloRobot/src/comm/relay/CelluloLocalRelayServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloLocalRelayServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloLocalRelayServer_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloLocalRelayServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloLocalRelayServer_t qt_meta_stringdata_Cellulo__CelluloLocalRelayServer = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Cellulo::CelluloLocalRelayServer"
QT_MOC_LITERAL(1, 33, 11), // "cleanSocket"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "Cellulo::CelluloLocalRelayServer\0"
    "cleanSocket\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloLocalRelayServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void Cellulo::CelluloLocalRelayServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloLocalRelayServer *_t = static_cast<CelluloLocalRelayServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->cleanSocket();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloLocalRelayServer::staticMetaObject = {
    { &CelluloRelayServer::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloLocalRelayServer.data,
      qt_meta_data_Cellulo__CelluloLocalRelayServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloLocalRelayServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloLocalRelayServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloLocalRelayServer.stringdata0))
        return static_cast<void*>(this);
    return CelluloRelayServer::qt_metacast(_clname);
}

int Cellulo::CelluloLocalRelayServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloRelayServer::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
