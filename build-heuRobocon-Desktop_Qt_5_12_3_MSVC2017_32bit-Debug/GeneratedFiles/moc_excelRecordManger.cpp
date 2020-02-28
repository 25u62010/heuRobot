/****************************************************************************
** Meta object code from reading C++ file 'excelRecordManger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QTtext/heuRobocon/heuRobocon/excelRecordManger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'excelRecordManger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_excelRecordManger_t {
    QByteArrayData data[12];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_excelRecordManger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_excelRecordManger_t qt_meta_stringdata_excelRecordManger = {
    {
QT_MOC_LITERAL(0, 0, 17), // "excelRecordManger"
QT_MOC_LITERAL(1, 18, 10), // "quitThread"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "sendFilePath"
QT_MOC_LITERAL(4, 43, 8), // "filePath"
QT_MOC_LITERAL(5, 52, 19), // "sendDataNameSignals"
QT_MOC_LITERAL(6, 72, 7), // "getInfo"
QT_MOC_LITERAL(7, 80, 37), // "on_dataIDComboBox_currentInde..."
QT_MOC_LITERAL(8, 118, 5), // "index"
QT_MOC_LITERAL(9, 124, 26), // "on_dataNameEdit_textEdited"
QT_MOC_LITERAL(10, 151, 4), // "text"
QT_MOC_LITERAL(11, 156, 13) // "dataNumUpdata"

    },
    "excelRecordManger\0quitThread\0\0"
    "sendFilePath\0filePath\0sendDataNameSignals\0"
    "getInfo\0on_dataIDComboBox_currentIndexChanged\0"
    "index\0on_dataNameEdit_textEdited\0text\0"
    "dataNumUpdata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_excelRecordManger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   56,    2, 0x0a /* Public */,
       7,    1,   57,    2, 0x0a /* Public */,
       9,    1,   60,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,

       0        // eod
};

void excelRecordManger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<excelRecordManger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->quitThread(); break;
        case 1: _t->sendFilePath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendDataNameSignals((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->getInfo(); break;
        case 4: _t->on_dataIDComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_dataNameEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->dataNumUpdata(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (excelRecordManger::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&excelRecordManger::quitThread)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (excelRecordManger::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&excelRecordManger::sendFilePath)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (excelRecordManger::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&excelRecordManger::sendDataNameSignals)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject excelRecordManger::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_excelRecordManger.data,
    qt_meta_data_excelRecordManger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *excelRecordManger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *excelRecordManger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_excelRecordManger.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int excelRecordManger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void excelRecordManger::quitThread()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void excelRecordManger::sendFilePath(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void excelRecordManger::sendDataNameSignals(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
