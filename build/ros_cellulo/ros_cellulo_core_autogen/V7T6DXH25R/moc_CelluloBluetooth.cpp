/****************************************************************************
** Meta object code from reading C++ file 'CelluloBluetooth.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_cellulo/include/CelluloRobot/src/comm/CelluloBluetooth.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CelluloBluetooth.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__CelluloBluetooth_t {
    QByteArrayData data[117];
    char stringdata0[1827];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__CelluloBluetooth_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__CelluloBluetooth_t qt_meta_stringdata_Cellulo__CelluloBluetooth = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Cellulo::CelluloBluetooth"
QT_MOC_LITERAL(1, 26, 26), // "localAdapterMacAddrChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 18), // "autoConnectChanged"
QT_MOC_LITERAL(4, 73, 14), // "macAddrChanged"
QT_MOC_LITERAL(5, 88, 23), // "connectionStatusChanged"
QT_MOC_LITERAL(6, 112, 13), // "bootCompleted"
QT_MOC_LITERAL(7, 126, 12), // "shuttingDown"
QT_MOC_LITERAL(8, 139, 10), // "lowBattery"
QT_MOC_LITERAL(9, 150, 19), // "batteryStateChanged"
QT_MOC_LITERAL(10, 170, 10), // "touchBegan"
QT_MOC_LITERAL(11, 181, 3), // "key"
QT_MOC_LITERAL(12, 185, 9), // "longTouch"
QT_MOC_LITERAL(13, 195, 13), // "touchReleased"
QT_MOC_LITERAL(14, 209, 14), // "gestureChanged"
QT_MOC_LITERAL(15, 224, 16), // "timestampChanged"
QT_MOC_LITERAL(16, 241, 26), // "cameraImageProgressChanged"
QT_MOC_LITERAL(17, 268, 10), // "frameReady"
QT_MOC_LITERAL(18, 279, 16), // "kidnappedChanged"
QT_MOC_LITERAL(19, 296, 21), // "poseChanged_inherited"
QT_MOC_LITERAL(20, 318, 19), // "trackingGoalReached"
QT_MOC_LITERAL(21, 338, 17), // "socketDataArrived"
QT_MOC_LITERAL(22, 356, 15), // "socketConnected"
QT_MOC_LITERAL(23, 372, 18), // "socketDisconnected"
QT_MOC_LITERAL(24, 391, 17), // "refreshConnection"
QT_MOC_LITERAL(25, 409, 17), // "checkWrongAdapter"
QT_MOC_LITERAL(26, 427, 22), // "setLocalAdapterMacAddr"
QT_MOC_LITERAL(27, 450, 19), // "localAdapterMacAddr"
QT_MOC_LITERAL(28, 470, 14), // "setAutoConnect"
QT_MOC_LITERAL(29, 485, 11), // "autoConnect"
QT_MOC_LITERAL(30, 497, 10), // "setMacAddr"
QT_MOC_LITERAL(31, 508, 7), // "macAddr"
QT_MOC_LITERAL(32, 516, 15), // "connectToServer"
QT_MOC_LITERAL(33, 532, 20), // "disconnectFromServer"
QT_MOC_LITERAL(34, 553, 18), // "setPoseBcastPeriod"
QT_MOC_LITERAL(35, 572, 6), // "period"
QT_MOC_LITERAL(36, 579, 22), // "setTimestampingEnabled"
QT_MOC_LITERAL(37, 602, 7), // "enabled"
QT_MOC_LITERAL(38, 610, 15), // "setMotor1Output"
QT_MOC_LITERAL(39, 626, 6), // "output"
QT_MOC_LITERAL(40, 633, 15), // "setMotor2Output"
QT_MOC_LITERAL(41, 649, 15), // "setMotor3Output"
QT_MOC_LITERAL(42, 665, 18), // "setAllMotorOutputs"
QT_MOC_LITERAL(43, 684, 8), // "m1output"
QT_MOC_LITERAL(44, 693, 8), // "m2output"
QT_MOC_LITERAL(45, 702, 8), // "m3output"
QT_MOC_LITERAL(46, 711, 15), // "setGoalVelocity"
QT_MOC_LITERAL(47, 727, 2), // "vx"
QT_MOC_LITERAL(48, 730, 2), // "vy"
QT_MOC_LITERAL(49, 733, 1), // "w"
QT_MOC_LITERAL(50, 735, 11), // "setGoalPose"
QT_MOC_LITERAL(51, 747, 1), // "x"
QT_MOC_LITERAL(52, 749, 1), // "y"
QT_MOC_LITERAL(53, 751, 5), // "theta"
QT_MOC_LITERAL(54, 757, 1), // "v"
QT_MOC_LITERAL(55, 759, 15), // "setGoalPosition"
QT_MOC_LITERAL(56, 775, 18), // "setGoalXCoordinate"
QT_MOC_LITERAL(57, 794, 18), // "setGoalYCoordinate"
QT_MOC_LITERAL(58, 813, 18), // "setGoalOrientation"
QT_MOC_LITERAL(59, 832, 23), // "setGoalXThetaCoordinate"
QT_MOC_LITERAL(60, 856, 23), // "setGoalYThetaCoordinate"
QT_MOC_LITERAL(61, 880, 13), // "clearTracking"
QT_MOC_LITERAL(62, 894, 13), // "simpleVibrate"
QT_MOC_LITERAL(63, 908, 2), // "iX"
QT_MOC_LITERAL(64, 911, 2), // "iY"
QT_MOC_LITERAL(65, 914, 6), // "iTheta"
QT_MOC_LITERAL(66, 921, 8), // "duration"
QT_MOC_LITERAL(67, 930, 15), // "vibrateOnMotion"
QT_MOC_LITERAL(68, 946, 6), // "iCoeff"
QT_MOC_LITERAL(69, 953, 19), // "clearHapticFeedback"
QT_MOC_LITERAL(70, 973, 4), // "ping"
QT_MOC_LITERAL(71, 978, 12), // "requestFrame"
QT_MOC_LITERAL(72, 991, 15), // "setExposureTime"
QT_MOC_LITERAL(73, 1007, 6), // "pixels"
QT_MOC_LITERAL(74, 1014, 17), // "queryBatteryState"
QT_MOC_LITERAL(75, 1032, 18), // "setLEDResponseMode"
QT_MOC_LITERAL(76, 1051, 47), // "Cellulo::CelluloBluetoothEnum..."
QT_MOC_LITERAL(77, 1099, 4), // "mode"
QT_MOC_LITERAL(78, 1104, 30), // "setLocomotionInteractivityMode"
QT_MOC_LITERAL(79, 1135, 59), // "Cellulo::CelluloBluetoothEnum..."
QT_MOC_LITERAL(80, 1195, 17), // "setGestureEnabled"
QT_MOC_LITERAL(81, 1213, 31), // "setCasualBackdriveAssistEnabled"
QT_MOC_LITERAL(82, 1245, 24), // "setHapticBackdriveAssist"
QT_MOC_LITERAL(83, 1270, 7), // "xAssist"
QT_MOC_LITERAL(84, 1278, 7), // "yAssist"
QT_MOC_LITERAL(85, 1286, 11), // "thetaAssist"
QT_MOC_LITERAL(86, 1298, 15), // "setVisualEffect"
QT_MOC_LITERAL(87, 1314, 44), // "Cellulo::CelluloBluetoothEnum..."
QT_MOC_LITERAL(88, 1359, 6), // "effect"
QT_MOC_LITERAL(89, 1366, 5), // "color"
QT_MOC_LITERAL(90, 1372, 5), // "value"
QT_MOC_LITERAL(91, 1378, 14), // "polyBezierInit"
QT_MOC_LITERAL(92, 1393, 6), // "point0"
QT_MOC_LITERAL(93, 1400, 16), // "polyBezierAppend"
QT_MOC_LITERAL(94, 1417, 6), // "point1"
QT_MOC_LITERAL(95, 1424, 6), // "point2"
QT_MOC_LITERAL(96, 1431, 6), // "point3"
QT_MOC_LITERAL(97, 1438, 21), // "polyBezierSetFromZone"
QT_MOC_LITERAL(98, 1460, 21), // "Cellulo::CelluloZone*"
QT_MOC_LITERAL(99, 1482, 4), // "zone"
QT_MOC_LITERAL(100, 1487, 17), // "setGoalPolyBezier"
QT_MOC_LITERAL(101, 1505, 24), // "setGoalPolyBezierAligned"
QT_MOC_LITERAL(102, 1530, 5), // "reset"
QT_MOC_LITERAL(103, 1536, 8), // "shutdown"
QT_MOC_LITERAL(104, 1545, 16), // "connectionStatus"
QT_MOC_LITERAL(105, 1562, 48), // "Cellulo::CelluloBluetoothEnum..."
QT_MOC_LITERAL(106, 1611, 12), // "batteryState"
QT_MOC_LITERAL(107, 1624, 44), // "Cellulo::CelluloBluetoothEnum..."
QT_MOC_LITERAL(108, 1669, 9), // "kidnapped"
QT_MOC_LITERAL(109, 1679, 7), // "gesture"
QT_MOC_LITERAL(110, 1687, 39), // "Cellulo::CelluloBluetoothEnum..."
QT_MOC_LITERAL(111, 1727, 19), // "timestampingEnabled"
QT_MOC_LITERAL(112, 1747, 13), // "lastTimestamp"
QT_MOC_LITERAL(113, 1761, 9), // "framerate"
QT_MOC_LITERAL(114, 1771, 12), // "poseRemapper"
QT_MOC_LITERAL(115, 1784, 22), // "Cellulo::PoseRemapper*"
QT_MOC_LITERAL(116, 1807, 19) // "cameraImageProgress"

    },
    "Cellulo::CelluloBluetooth\0"
    "localAdapterMacAddrChanged\0\0"
    "autoConnectChanged\0macAddrChanged\0"
    "connectionStatusChanged\0bootCompleted\0"
    "shuttingDown\0lowBattery\0batteryStateChanged\0"
    "touchBegan\0key\0longTouch\0touchReleased\0"
    "gestureChanged\0timestampChanged\0"
    "cameraImageProgressChanged\0frameReady\0"
    "kidnappedChanged\0poseChanged_inherited\0"
    "trackingGoalReached\0socketDataArrived\0"
    "socketConnected\0socketDisconnected\0"
    "refreshConnection\0checkWrongAdapter\0"
    "setLocalAdapterMacAddr\0localAdapterMacAddr\0"
    "setAutoConnect\0autoConnect\0setMacAddr\0"
    "macAddr\0connectToServer\0disconnectFromServer\0"
    "setPoseBcastPeriod\0period\0"
    "setTimestampingEnabled\0enabled\0"
    "setMotor1Output\0output\0setMotor2Output\0"
    "setMotor3Output\0setAllMotorOutputs\0"
    "m1output\0m2output\0m3output\0setGoalVelocity\0"
    "vx\0vy\0w\0setGoalPose\0x\0y\0theta\0v\0"
    "setGoalPosition\0setGoalXCoordinate\0"
    "setGoalYCoordinate\0setGoalOrientation\0"
    "setGoalXThetaCoordinate\0setGoalYThetaCoordinate\0"
    "clearTracking\0simpleVibrate\0iX\0iY\0"
    "iTheta\0duration\0vibrateOnMotion\0iCoeff\0"
    "clearHapticFeedback\0ping\0requestFrame\0"
    "setExposureTime\0pixels\0queryBatteryState\0"
    "setLEDResponseMode\0"
    "Cellulo::CelluloBluetoothEnums::LEDResponseMode\0"
    "mode\0setLocomotionInteractivityMode\0"
    "Cellulo::CelluloBluetoothEnums::LocomotionInteractivityMode\0"
    "setGestureEnabled\0setCasualBackdriveAssistEnabled\0"
    "setHapticBackdriveAssist\0xAssist\0"
    "yAssist\0thetaAssist\0setVisualEffect\0"
    "Cellulo::CelluloBluetoothEnums::VisualEffect\0"
    "effect\0color\0value\0polyBezierInit\0"
    "point0\0polyBezierAppend\0point1\0point2\0"
    "point3\0polyBezierSetFromZone\0"
    "Cellulo::CelluloZone*\0zone\0setGoalPolyBezier\0"
    "setGoalPolyBezierAligned\0reset\0shutdown\0"
    "connectionStatus\0"
    "Cellulo::CelluloBluetoothEnums::ConnectionStatus\0"
    "batteryState\0Cellulo::CelluloBluetoothEnums::BatteryState\0"
    "kidnapped\0gesture\0"
    "Cellulo::CelluloBluetoothEnums::Gesture\0"
    "timestampingEnabled\0lastTimestamp\0"
    "framerate\0poseRemapper\0Cellulo::PoseRemapper*\0"
    "cameraImageProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__CelluloBluetooth[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      63,   14, // methods
      15,  526, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  329,    2, 0x06 /* Public */,
       3,    0,  330,    2, 0x06 /* Public */,
       4,    0,  331,    2, 0x06 /* Public */,
       5,    0,  332,    2, 0x06 /* Public */,
       6,    0,  333,    2, 0x06 /* Public */,
       7,    0,  334,    2, 0x06 /* Public */,
       8,    0,  335,    2, 0x06 /* Public */,
       9,    0,  336,    2, 0x06 /* Public */,
      10,    1,  337,    2, 0x06 /* Public */,
      12,    1,  340,    2, 0x06 /* Public */,
      13,    1,  343,    2, 0x06 /* Public */,
      14,    0,  346,    2, 0x06 /* Public */,
      15,    0,  347,    2, 0x06 /* Public */,
      16,    0,  348,    2, 0x06 /* Public */,
      17,    0,  349,    2, 0x06 /* Public */,
      18,    0,  350,    2, 0x06 /* Public */,
      19,    0,  351,    2, 0x06 /* Public */,
      20,    0,  352,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  353,    2, 0x08 /* Private */,
      22,    0,  354,    2, 0x08 /* Private */,
      23,    0,  355,    2, 0x08 /* Private */,
      24,    0,  356,    2, 0x08 /* Private */,
      25,    0,  357,    2, 0x08 /* Private */,
      26,    1,  358,    2, 0x0a /* Public */,
      28,    1,  361,    2, 0x0a /* Public */,
      30,    1,  364,    2, 0x0a /* Public */,
      32,    0,  367,    2, 0x0a /* Public */,
      33,    0,  368,    2, 0x0a /* Public */,
      34,    1,  369,    2, 0x0a /* Public */,
      36,    1,  372,    2, 0x0a /* Public */,
      38,    1,  375,    2, 0x0a /* Public */,
      40,    1,  378,    2, 0x0a /* Public */,
      41,    1,  381,    2, 0x0a /* Public */,
      42,    3,  384,    2, 0x0a /* Public */,
      46,    3,  391,    2, 0x0a /* Public */,
      50,    5,  398,    2, 0x0a /* Public */,
      55,    3,  409,    2, 0x0a /* Public */,
      56,    2,  416,    2, 0x0a /* Public */,
      57,    2,  421,    2, 0x0a /* Public */,
      58,    2,  426,    2, 0x0a /* Public */,
      59,    4,  431,    2, 0x0a /* Public */,
      60,    4,  440,    2, 0x0a /* Public */,
      61,    0,  449,    2, 0x0a /* Public */,
      62,    5,  450,    2, 0x0a /* Public */,
      67,    2,  461,    2, 0x0a /* Public */,
      69,    0,  466,    2, 0x0a /* Public */,
      70,    0,  467,    2, 0x0a /* Public */,
      71,    0,  468,    2, 0x0a /* Public */,
      72,    1,  469,    2, 0x0a /* Public */,
      74,    0,  472,    2, 0x0a /* Public */,
      75,    1,  473,    2, 0x0a /* Public */,
      78,    1,  476,    2, 0x0a /* Public */,
      80,    1,  479,    2, 0x0a /* Public */,
      81,    1,  482,    2, 0x0a /* Public */,
      82,    3,  485,    2, 0x0a /* Public */,
      86,    3,  492,    2, 0x0a /* Public */,
      91,    1,  499,    2, 0x0a /* Public */,
      93,    3,  502,    2, 0x0a /* Public */,
      97,    1,  509,    2, 0x0a /* Public */,
     100,    2,  512,    2, 0x0a /* Public */,
     101,    3,  517,    2, 0x0a /* Public */,
     102,    0,  524,    2, 0x0a /* Public */,
     103,    0,  525,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   43,   44,   45,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   47,   48,   49,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   51,   52,   53,   54,   49,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   51,   52,   54,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   51,   54,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   52,   54,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   53,   49,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   51,   53,   54,   49,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   52,   53,   54,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::UInt, QMetaType::UInt,   63,   64,   65,   35,   66,
    QMetaType::Void, QMetaType::Float, QMetaType::UInt,   68,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   73,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 76,   77,
    QMetaType::Void, 0x80000000 | 79,   77,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   83,   84,   85,
    QMetaType::Void, 0x80000000 | 87, QMetaType::QColor, QMetaType::Int,   88,   89,   90,
    QMetaType::Void, QMetaType::QVector2D,   92,
    QMetaType::Void, QMetaType::QVector2D, QMetaType::QVector2D, QMetaType::QVector2D,   94,   95,   96,
    QMetaType::Void, 0x80000000 | 98,   99,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   54,   49,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   54,   53,   49,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      27, QMetaType::QString, 0x00495103,
      29, QMetaType::Bool, 0x00495103,
      31, QMetaType::QString, 0x00495103,
     104, 0x80000000 | 105, 0x00495009,
     106, 0x80000000 | 107, 0x00495009,
      51, QMetaType::Float, 0x00495001,
      52, QMetaType::Float, 0x00495001,
      53, QMetaType::Float, 0x00495001,
     108, QMetaType::Bool, 0x00495001,
     109, 0x80000000 | 110, 0x00495009,
     111, QMetaType::Bool, 0x00095103,
     112, QMetaType::Int, 0x00495001,
     113, QMetaType::Float, 0x00495001,
     114, 0x80000000 | 115, 0x0009500b,
     116, QMetaType::Float, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       7,
      16,
      16,
      16,
      15,
      11,
       0,
      12,
      12,
       0,
      13,

       0        // eod
};

void Cellulo::CelluloBluetooth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CelluloBluetooth *_t = static_cast<CelluloBluetooth *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localAdapterMacAddrChanged(); break;
        case 1: _t->autoConnectChanged(); break;
        case 2: _t->macAddrChanged(); break;
        case 3: _t->connectionStatusChanged(); break;
        case 4: _t->bootCompleted(); break;
        case 5: _t->shuttingDown(); break;
        case 6: _t->lowBattery(); break;
        case 7: _t->batteryStateChanged(); break;
        case 8: _t->touchBegan((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->longTouch((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->touchReleased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->gestureChanged(); break;
        case 12: _t->timestampChanged(); break;
        case 13: _t->cameraImageProgressChanged(); break;
        case 14: _t->frameReady(); break;
        case 15: _t->kidnappedChanged(); break;
        case 16: _t->poseChanged_inherited(); break;
        case 17: _t->trackingGoalReached(); break;
        case 18: _t->socketDataArrived(); break;
        case 19: _t->socketConnected(); break;
        case 20: _t->socketDisconnected(); break;
        case 21: _t->refreshConnection(); break;
        case 22: _t->checkWrongAdapter(); break;
        case 23: _t->setLocalAdapterMacAddr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->setAutoConnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->setMacAddr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->connectToServer(); break;
        case 27: _t->disconnectFromServer(); break;
        case 28: _t->setPoseBcastPeriod((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 29: _t->setTimestampingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->setMotor1Output((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->setMotor2Output((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->setMotor3Output((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->setAllMotorOutputs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 34: _t->setGoalVelocity((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 35: _t->setGoalPose((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 36: _t->setGoalPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 37: _t->setGoalXCoordinate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 38: _t->setGoalYCoordinate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 39: _t->setGoalOrientation((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 40: _t->setGoalXThetaCoordinate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 41: _t->setGoalYThetaCoordinate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4]))); break;
        case 42: _t->clearTracking(); break;
        case 43: _t->simpleVibrate((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4])),(*reinterpret_cast< uint(*)>(_a[5]))); break;
        case 44: _t->vibrateOnMotion((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 45: _t->clearHapticFeedback(); break;
        case 46: _t->ping(); break;
        case 47: _t->requestFrame(); break;
        case 48: _t->setExposureTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->queryBatteryState(); break;
        case 50: _t->setLEDResponseMode((*reinterpret_cast< Cellulo::CelluloBluetoothEnums::LEDResponseMode(*)>(_a[1]))); break;
        case 51: _t->setLocomotionInteractivityMode((*reinterpret_cast< Cellulo::CelluloBluetoothEnums::LocomotionInteractivityMode(*)>(_a[1]))); break;
        case 52: _t->setGestureEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->setCasualBackdriveAssistEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->setHapticBackdriveAssist((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 55: _t->setVisualEffect((*reinterpret_cast< Cellulo::CelluloBluetoothEnums::VisualEffect(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 56: _t->polyBezierInit((*reinterpret_cast< const QVector2D(*)>(_a[1]))); break;
        case 57: _t->polyBezierAppend((*reinterpret_cast< const QVector2D(*)>(_a[1])),(*reinterpret_cast< const QVector2D(*)>(_a[2])),(*reinterpret_cast< const QVector2D(*)>(_a[3]))); break;
        case 58: _t->polyBezierSetFromZone((*reinterpret_cast< Cellulo::CelluloZone*(*)>(_a[1]))); break;
        case 59: _t->setGoalPolyBezier((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 60: _t->setGoalPolyBezierAligned((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 61: _t->reset(); break;
        case 62: _t->shutdown(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetoothEnums::LEDResponseMode >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetoothEnums::LocomotionInteractivityMode >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetoothEnums::VisualEffect >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloZone* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::localAdapterMacAddrChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::autoConnectChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::macAddrChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::connectionStatusChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::bootCompleted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::shuttingDown)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::lowBattery)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::batteryStateChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::touchBegan)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::longTouch)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::touchReleased)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::gestureChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::timestampChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::cameraImageProgressChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::frameReady)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::kidnappedChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::poseChanged_inherited)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (CelluloBluetooth::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CelluloBluetooth::trackingGoalReached)) {
                *result = 17;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetoothEnums::BatteryState >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetoothEnums::ConnectionStatus >(); break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::CelluloBluetoothEnums::Gesture >(); break;
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Cellulo::PoseRemapper* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CelluloBluetooth *_t = static_cast<CelluloBluetooth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getLocalAdapterMacAddr(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getAutoConnect(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getMacAddr(); break;
        case 3: *reinterpret_cast< Cellulo::CelluloBluetoothEnums::ConnectionStatus*>(_v) = _t->getConnectionStatus(); break;
        case 4: *reinterpret_cast< Cellulo::CelluloBluetoothEnums::BatteryState*>(_v) = _t->getBatteryState(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getX(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getY(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getTheta(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getKidnapped(); break;
        case 9: *reinterpret_cast< Cellulo::CelluloBluetoothEnums::Gesture*>(_v) = _t->getGesture(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->getTimestampingEnabled(); break;
        case 11: *reinterpret_cast< int*>(_v) = _t->getLastTimestamp(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getFramerate(); break;
        case 13: *reinterpret_cast< Cellulo::PoseRemapper**>(_v) = _t->poseRemapper; break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getCameraImageProgress(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CelluloBluetooth *_t = static_cast<CelluloBluetooth *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalAdapterMacAddr(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAutoConnect(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setMacAddr(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setTimestampingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 13:
            if (_t->poseRemapper != *reinterpret_cast< Cellulo::PoseRemapper**>(_v)) {
                _t->poseRemapper = *reinterpret_cast< Cellulo::PoseRemapper**>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_Cellulo__CelluloBluetooth[] = {
        &Cellulo::CelluloBluetoothEnums::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject Cellulo::CelluloBluetooth::staticMetaObject = {
    { &CelluloZoneClient::staticMetaObject, qt_meta_stringdata_Cellulo__CelluloBluetooth.data,
      qt_meta_data_Cellulo__CelluloBluetooth,  qt_static_metacall, qt_meta_extradata_Cellulo__CelluloBluetooth, nullptr}
};


const QMetaObject *Cellulo::CelluloBluetooth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::CelluloBluetooth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__CelluloBluetooth.stringdata0))
        return static_cast<void*>(this);
    return CelluloZoneClient::qt_metacast(_clname);
}

int Cellulo::CelluloBluetooth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CelluloZoneClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 63)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 63;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Cellulo::CelluloBluetooth::localAdapterMacAddrChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Cellulo::CelluloBluetooth::autoConnectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Cellulo::CelluloBluetooth::macAddrChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Cellulo::CelluloBluetooth::connectionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Cellulo::CelluloBluetooth::bootCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Cellulo::CelluloBluetooth::shuttingDown()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Cellulo::CelluloBluetooth::lowBattery()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Cellulo::CelluloBluetooth::batteryStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Cellulo::CelluloBluetooth::touchBegan(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Cellulo::CelluloBluetooth::longTouch(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Cellulo::CelluloBluetooth::touchReleased(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Cellulo::CelluloBluetooth::gestureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Cellulo::CelluloBluetooth::timestampChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Cellulo::CelluloBluetooth::cameraImageProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Cellulo::CelluloBluetooth::frameReady()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Cellulo::CelluloBluetooth::kidnappedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Cellulo::CelluloBluetooth::poseChanged_inherited()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Cellulo::CelluloBluetooth::trackingGoalReached()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
