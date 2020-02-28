/****************************************************************************
** Meta object code from reading C++ file 'painter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../QTtext/heuRobocon/heuRobocon/painter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'painter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_painter_t {
    QByteArrayData data[20];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_painter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_painter_t qt_meta_stringdata_painter = {
    {
QT_MOC_LITERAL(0, 0, 7), // "painter"
QT_MOC_LITERAL(1, 8, 10), // "killMyself"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "painter*"
QT_MOC_LITERAL(4, 29, 24), // "on_viewAllButton_clicked"
QT_MOC_LITERAL(5, 54, 27), // "on_autoAbjustButton_clicked"
QT_MOC_LITERAL(6, 82, 31), // "on_painterScrollBar_sliderMoved"
QT_MOC_LITERAL(7, 114, 31), // "on_showRegionTimeButton_clicked"
QT_MOC_LITERAL(8, 146, 27), // "on_selectLIneButton_clicked"
QT_MOC_LITERAL(9, 174, 41), // "on_selectLIneComboBox_current..."
QT_MOC_LITERAL(10, 216, 4), // "text"
QT_MOC_LITERAL(11, 221, 26), // "on_pauseShowButton_clicked"
QT_MOC_LITERAL(12, 248, 26), // "on_clearLineButton_clicked"
QT_MOC_LITERAL(13, 275, 12), // "reciveFilter"
QT_MOC_LITERAL(14, 288, 6), // "dataID"
QT_MOC_LITERAL(15, 295, 40), // "on_selectLIneComboBox_current..."
QT_MOC_LITERAL(16, 336, 24), // "on_showAllButton_clicked"
QT_MOC_LITERAL(17, 361, 24), // "on_hideAllButton_clicked"
QT_MOC_LITERAL(18, 386, 21), // "on_getProcess_clicked"
QT_MOC_LITERAL(19, 408, 9) // "autostart"

    },
    "painter\0killMyself\0\0painter*\0"
    "on_viewAllButton_clicked\0"
    "on_autoAbjustButton_clicked\0"
    "on_painterScrollBar_sliderMoved\0"
    "on_showRegionTimeButton_clicked\0"
    "on_selectLIneButton_clicked\0"
    "on_selectLIneComboBox_currentIndexChanged\0"
    "text\0on_pauseShowButton_clicked\0"
    "on_clearLineButton_clicked\0reciveFilter\0"
    "dataID\0on_selectLIneComboBox_currentTextChanged\0"
    "on_showAllButton_clicked\0"
    "on_hideAllButton_clicked\0on_getProcess_clicked\0"
    "autostart"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_painter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   92,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    1,   97,    2, 0x08 /* Private */,
      11,    0,  100,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    2,  102,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,
      16,    0,  110,    2, 0x08 /* Private */,
      17,    0,  111,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort, QMetaType::Double,   14,    2,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void painter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<painter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->killMyself((*reinterpret_cast< painter*(*)>(_a[1]))); break;
        case 1: _t->on_viewAllButton_clicked(); break;
        case 2: _t->on_autoAbjustButton_clicked(); break;
        case 3: _t->on_painterScrollBar_sliderMoved(); break;
        case 4: _t->on_showRegionTimeButton_clicked(); break;
        case 5: _t->on_selectLIneButton_clicked(); break;
        case 6: _t->on_selectLIneComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pauseShowButton_clicked(); break;
        case 8: _t->on_clearLineButton_clicked(); break;
        case 9: _t->reciveFilter((*reinterpret_cast< quint16(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 10: _t->on_selectLIneComboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_showAllButton_clicked(); break;
        case 12: _t->on_hideAllButton_clicked(); break;
        case 13: _t->on_getProcess_clicked(); break;
        case 14: _t->autostart(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< painter* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (painter::*)(painter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&painter::killMyself)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject painter::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_painter.data,
    qt_meta_data_painter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *painter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *painter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_painter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int painter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void painter::killMyself(painter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
