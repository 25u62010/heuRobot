/****************************************************************************
** Meta object code from reading C++ file 'excelThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QTtext/heuRobocon/heuRobocon/excelThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'excelThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_excelThread_t {
    QByteArrayData data[13];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_excelThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_excelThread_t qt_meta_stringdata_excelThread = {
    {
QT_MOC_LITERAL(0, 0, 11), // "excelThread"
QT_MOC_LITERAL(1, 12, 17), // "quitCurrentThread"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "askForInfo"
QT_MOC_LITERAL(4, 42, 14), // "dataNumChanged"
QT_MOC_LITERAL(5, 57, 15), // "startRecordSlot"
QT_MOC_LITERAL(6, 73, 13), // "endRecordSlot"
QT_MOC_LITERAL(7, 87, 7), // "addData"
QT_MOC_LITERAL(8, 95, 2), // "id"
QT_MOC_LITERAL(9, 98, 14), // "reviveFilePath"
QT_MOC_LITERAL(10, 113, 8), // "filePath"
QT_MOC_LITERAL(11, 122, 11), // "getDataName"
QT_MOC_LITERAL(12, 134, 8) // "dataName"

    },
    "excelThread\0quitCurrentThread\0\0"
    "askForInfo\0dataNumChanged\0startRecordSlot\0"
    "endRecordSlot\0addData\0id\0reviveFilePath\0"
    "filePath\0getDataName\0dataName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_excelThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    2,   59,    2, 0x0a /* Public */,
       9,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort, QMetaType::Double,    8,    2,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QStringList,   12,

       0        // eod
};

void excelThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<excelThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->quitCurrentThread(); break;
        case 1: _t->askForInfo(); break;
        case 2: _t->dataNumChanged(); break;
        case 3: _t->startRecordSlot(); break;
        case 4: _t->endRecordSlot(); break;
        case 5: _t->addData((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->reviveFilePath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->getDataName((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (excelThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&excelThread::quitCurrentThread)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (excelThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&excelThread::askForInfo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (excelThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&excelThread::dataNumChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject excelThread::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_excelThread.data,
    qt_meta_data_excelThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *excelThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *excelThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_excelThread.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int excelThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void excelThread::quitCurrentThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void excelThread::askForInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void excelThread::dataNumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
