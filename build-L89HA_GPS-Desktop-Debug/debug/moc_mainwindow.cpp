/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../L89HA_GPS/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "dataReceived",
    "",
    "data",
    "initWidegtStates",
    "update_port_list",
    "onSerialPortSelected",
    "QAction*",
    "action",
    "onBaudSelected",
    "on_actionConnect_triggered",
    "handleSerialReceive",
    "handleSerialError",
    "QSerialPort::SerialPortError",
    "error",
    "on_actionTerminal_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[17];
    char stringdata5[17];
    char stringdata6[21];
    char stringdata7[9];
    char stringdata8[7];
    char stringdata9[15];
    char stringdata10[27];
    char stringdata11[20];
    char stringdata12[18];
    char stringdata13[29];
    char stringdata14[6];
    char stringdata15[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 12),  // "dataReceived"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 4),  // "data"
        QT_MOC_LITERAL(30, 16),  // "initWidegtStates"
        QT_MOC_LITERAL(47, 16),  // "update_port_list"
        QT_MOC_LITERAL(64, 20),  // "onSerialPortSelected"
        QT_MOC_LITERAL(85, 8),  // "QAction*"
        QT_MOC_LITERAL(94, 6),  // "action"
        QT_MOC_LITERAL(101, 14),  // "onBaudSelected"
        QT_MOC_LITERAL(116, 26),  // "on_actionConnect_triggered"
        QT_MOC_LITERAL(143, 19),  // "handleSerialReceive"
        QT_MOC_LITERAL(163, 17),  // "handleSerialError"
        QT_MOC_LITERAL(181, 28),  // "QSerialPort::SerialPortError"
        QT_MOC_LITERAL(210, 5),  // "error"
        QT_MOC_LITERAL(216, 27)   // "on_actionTerminal_triggered"
    },
    "MainWindow",
    "dataReceived",
    "",
    "data",
    "initWidegtStates",
    "update_port_list",
    "onSerialPortSelected",
    "QAction*",
    "action",
    "onBaudSelected",
    "on_actionConnect_triggered",
    "handleSerialReceive",
    "handleSerialError",
    "QSerialPort::SerialPortError",
    "error",
    "on_actionTerminal_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   71,    2, 0x08,    3 /* Private */,
       5,    0,   72,    2, 0x08,    4 /* Private */,
       6,    1,   73,    2, 0x08,    5 /* Private */,
       9,    1,   76,    2, 0x08,    7 /* Private */,
      10,    0,   79,    2, 0x08,    9 /* Private */,
      11,    0,   80,    2, 0x08,   10 /* Private */,
      12,    1,   81,    2, 0x08,   11 /* Private */,
      15,    0,   84,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'dataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'initWidegtStates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_port_list'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSerialPortSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'onBaudSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'on_actionConnect_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSerialReceive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSerialError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSerialPort::SerialPortError, std::false_type>,
        // method 'on_actionTerminal_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->initWidegtStates(); break;
        case 2: _t->update_port_list(); break;
        case 3: _t->onSerialPortSelected((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 4: _t->onBaudSelected((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 5: _t->on_actionConnect_triggered(); break;
        case 6: _t->handleSerialReceive(); break;
        case 7: _t->handleSerialError((*reinterpret_cast< std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        case 8: _t->on_actionTerminal_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QByteArray & );
            if (_t _q_method = &MainWindow::dataReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::dataReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
