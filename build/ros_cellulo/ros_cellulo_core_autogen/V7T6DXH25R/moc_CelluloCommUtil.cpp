/****************************************************************************
** Meta object code from reading C++ file 'CelluloCommUtil.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_cellulo/include/CelluloRobot/src/comm/CelluloCommUtil.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloCommUtil.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloCommUtil_t {
    QByteArrayData data[13];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloCommUtil_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloCommUtil_t qt_meta_stringdata_Cellulo__CelluloCommUtil = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Cellulo::CelluloCommUtil"
QT_MOC_LITERAL(1, 25, 27), // "RelayConnectionStatusString"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 21), // "RelayConnectionStatus"
QT_MOC_LITERAL(4, 76, 5), // "value"
QT_MOC_LITERAL(5, 82, 19), // "testRobotPoolDaemon"
QT_MOC_LITERAL(6, 102, 20), // "startRobotPoolDaemon"
QT_MOC_LITERAL(7, 123, 19), // "stopRobotPoolDaemon"
QT_MOC_LITERAL(8, 143, 28), // "RelayConnectionStatusStrings"
QT_MOC_LITERAL(9, 172, 33), // "RelayConnectionStatusDisconne..."
QT_MOC_LITERAL(10, 206, 31), // "RelayConnectionStatusConnecting"
QT_MOC_LITERAL(11, 238, 30), // "RelayConnectionStatusConnected"
QT_MOC_LITERAL(12, 269, 32) // "RelayConnectionStatusNumElements"

    },
    "Cellulo::CelluloCommUtil\0"
    "RelayConnectionStatusString\0\0"
    "RelayConnectionStatus\0value\0"
    "testRobotPoolDaemon\0startRobotPoolDaemon\0"
    "stopRobotPoolDaemon\0RelayConnectionStatusStrings\0"
    "RelayConnectionStatusDisconnected\0"
    "RelayConnectionStatusConnecting\0"
    "RelayConnectionStatusConnected\0"
    "RelayConnectionStatusNumElements"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloCommUtil[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   40, // properties
       1,   43, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       5,    0,   37,    2, 0x02 /* Public */,
       6,    0,   38,    2, 0x02 /* Public */,
       7,    0,   39,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
       8, QMetaType::QVariantList, 0x00095401,

 // enums: name, flags, count, data
       3, 0x0,    4,   47,

 // enum data: key, value
       9, uint(Cellulo::CelluloCommUtil::RelayConnectionStatusDisconnected),
      10, uint(Cellulo::CelluloCommUtil::RelayConnectionStatusConnecting),
      11, uint(Cellulo::CelluloCommUtil::RelayConnectionStatusConnected),
      12, uint(Cellulo::CelluloCommUtil::RelayConnectionStatusNumElements),

       0        // eod
};

void Cellulo::CelluloCommUtil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloCommUtil *_t = static_cast<CelluloCommUtil *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->RelayConnectionStatusString((*reinterpret_cast< RelayConnectionStatus(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->testRobotPoolDaemon();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->startRobotPoolDaemon();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->stopRobotPoolDaemon();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloCommUtil *_t = static_cast<CelluloCommUtil *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->getRelayConnectionStatusStrings(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloCommUtil::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloCommUtil.data,
      qt_meta_data_Cellulo__CelluloCommUtil,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::CelluloCommUtil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloCommUtil::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloCommUtil.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Cellulo::CelluloCommUtil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
