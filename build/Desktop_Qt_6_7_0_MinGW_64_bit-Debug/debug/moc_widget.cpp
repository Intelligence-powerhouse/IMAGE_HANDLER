/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
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
struct qt_meta_stringdata_CLASSWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWidgetENDCLASS = QtMocHelpers::stringData(
    "Widget",
    "on_importImage_clicked",
    "",
    "on_blackWhite_clicked",
    "on_pictureImport_2_clicked",
    "on_pictureSketch_clicked",
    "on_phantomTank_clicked",
    "on_pictureImport_1_clicked",
    "on_saveImage_clicked",
    "on_pictureMirror_clicked",
    "on_pictureCoding_clicked",
    "on_pictureRotate_clicked",
    "on_keyEdit_returnPressed",
    "on_lightChange_clicked",
    "on_pictureDecoding_clicked",
    "on_keyEdit_2_returnPressed"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x08,    1 /* Private */,
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    0,  102,    2, 0x08,    5 /* Private */,
       7,    0,  103,    2, 0x08,    6 /* Private */,
       8,    0,  104,    2, 0x08,    7 /* Private */,
       9,    0,  105,    2, 0x08,    8 /* Private */,
      10,    0,  106,    2, 0x08,    9 /* Private */,
      11,    0,  107,    2, 0x08,   10 /* Private */,
      12,    0,  108,    2, 0x08,   11 /* Private */,
      13,    0,  109,    2, 0x08,   12 /* Private */,
      14,    0,  110,    2, 0x08,   13 /* Private */,
      15,    0,  111,    2, 0x08,   14 /* Private */,

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

       0        // eod
};

Q_CONSTINIT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Widget, std::true_type>,
        // method 'on_importImage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_blackWhite_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pictureImport_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pictureSketch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_phantomTank_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pictureImport_1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveImage_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pictureMirror_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pictureCoding_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pictureRotate_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_keyEdit_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lightChange_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pictureDecoding_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_keyEdit_2_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_importImage_clicked(); break;
        case 1: _t->on_blackWhite_clicked(); break;
        case 2: _t->on_pictureImport_2_clicked(); break;
        case 3: _t->on_pictureSketch_clicked(); break;
        case 4: _t->on_phantomTank_clicked(); break;
        case 5: _t->on_pictureImport_1_clicked(); break;
        case 6: _t->on_saveImage_clicked(); break;
        case 7: _t->on_pictureMirror_clicked(); break;
        case 8: _t->on_pictureCoding_clicked(); break;
        case 9: _t->on_pictureRotate_clicked(); break;
        case 10: _t->on_keyEdit_returnPressed(); break;
        case 11: _t->on_lightChange_clicked(); break;
        case 12: _t->on_pictureDecoding_clicked(); break;
        case 13: _t->on_keyEdit_2_returnPressed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
