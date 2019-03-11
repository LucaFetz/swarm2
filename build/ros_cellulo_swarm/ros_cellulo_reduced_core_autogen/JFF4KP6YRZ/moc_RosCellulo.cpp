/****************************************************************************
** Meta object code from reading C++ file 'RosCellulo.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/cellulo_swarm_practical_base/ros_cellulo_swarm/include/ros_cellulo_reduced/RosCellulo.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RosCellulo.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__RosCellulo_t {
    QByteArrayData data[19];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__RosCellulo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__RosCellulo_t qt_meta_stringdata_Cellulo__RosCellulo = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Cellulo::RosCellulo"
QT_MOC_LITERAL(1, 20, 12), // "Publish_pose"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "Publish_longKeys"
QT_MOC_LITERAL(4, 51, 12), // "Publish_keys"
QT_MOC_LITERAL(5, 64, 17), // "Publish_kidnapped"
QT_MOC_LITERAL(6, 82, 24), // "Publish_connectionStatus"
QT_MOC_LITERAL(7, 107, 30), // "Publish_localAdapterMacAddress"
QT_MOC_LITERAL(8, 138, 19), // "Publish_autoConnect"
QT_MOC_LITERAL(9, 158, 18), // "Publish_macAddress"
QT_MOC_LITERAL(10, 177, 22), // "Publisher_batteryState"
QT_MOC_LITERAL(11, 200, 15), // "Publish_gesture"
QT_MOC_LITERAL(12, 216, 21), // "Publish_lastTimestamp"
QT_MOC_LITERAL(13, 238, 17), // "Publish_framerate"
QT_MOC_LITERAL(14, 256, 27), // "Publish_cameraImageProgress"
QT_MOC_LITERAL(15, 284, 16), // "Publish_velocity"
QT_MOC_LITERAL(16, 301, 28), // "Publish_poseVelControlEnable"
QT_MOC_LITERAL(17, 330, 28), // "Publish_poseVelControlPeriod"
QT_MOC_LITERAL(18, 359, 11) // "reset_robot"

    },
    "Cellulo::RosCellulo\0Publish_pose\0\0"
    "Publish_longKeys\0Publish_keys\0"
    "Publish_kidnapped\0Publish_connectionStatus\0"
    "Publish_localAdapterMacAddress\0"
    "Publish_autoConnect\0Publish_macAddress\0"
    "Publisher_batteryState\0Publish_gesture\0"
    "Publish_lastTimestamp\0Publish_framerate\0"
    "Publish_cameraImageProgress\0"
    "Publish_velocity\0Publish_poseVelControlEnable\0"
    "Publish_poseVelControlPeriod\0reset_robot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__RosCellulo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    0,  100,    2, 0x0a /* Public */,
       4,    0,  101,    2, 0x0a /* Public */,
       5,    0,  102,    2, 0x0a /* Public */,
       6,    0,  103,    2, 0x0a /* Public */,
       7,    0,  104,    2, 0x0a /* Public */,
       8,    0,  105,    2, 0x0a /* Public */,
       9,    0,  106,    2, 0x0a /* Public */,
      10,    0,  107,    2, 0x0a /* Public */,
      11,    0,  108,    2, 0x0a /* Public */,
      12,    0,  109,    2, 0x0a /* Public */,
      13,    0,  110,    2, 0x0a /* Public */,
      14,    0,  111,    2, 0x0a /* Public */,
      15,    0,  112,    2, 0x0a /* Public */,
      16,    0,  113,    2, 0x0a /* Public */,
      17,    0,  114,    2, 0x0a /* Public */,
      18,    0,  115,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void Cellulo::RosCellulo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RosCellulo *_t = static_cast<RosCellulo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Publish_pose(); break;
        case 1: _t->Publish_longKeys(); break;
        case 2: _t->Publish_keys(); break;
        case 3: _t->Publish_kidnapped(); break;
        case 4: _t->Publish_connectionStatus(); break;
        case 5: _t->Publish_localAdapterMacAddress(); break;
        case 6: _t->Publish_autoConnect(); break;
        case 7: _t->Publish_macAddress(); break;
        case 8: _t->Publisher_batteryState(); break;
        case 9: _t->Publish_gesture(); break;
        case 10: _t->Publish_lastTimestamp(); break;
        case 11: _t->Publish_framerate(); break;
        case 12: _t->Publish_cameraImageProgress(); break;
        case 13: _t->Publish_velocity(); break;
        case 14: _t->Publish_poseVelControlEnable(); break;
        case 15: _t->Publish_poseVelControlPeriod(); break;
        case 16: { bool _r = _t->reset_robot();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::RosCellulo::staticMetaObject = {
    { &CelluloRobot::staticMetaObject, qt_meta_stringdata_Cellulo__RosCellulo.data,
      qt_meta_data_Cellulo__RosCellulo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::RosCellulo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::RosCellulo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__RosCellulo.stringdata0))
        return static_cast<void*>(this);
    return CelluloRobot::qt_metacast(_clname);
}

int Cellulo::RosCellulo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloRobot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
