/****************************************************************************
** Meta object code from reading C++ file 'qsliderex.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qsliderex.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsliderex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSliderEx[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   10,   10,   10, 0x08,
      44,   11,   10,   10, 0x08,
      66,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QSliderEx[] = {
    "QSliderEx\0\0value\0valueChangedEx(int)\0"
    "Init()\0baseValueChanged(int)\0"
    "slacktimeout()\0"
};

void QSliderEx::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QSliderEx *_t = static_cast<QSliderEx *>(_o);
        switch (_id) {
        case 0: _t->valueChangedEx((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->Init(); break;
        case 2: _t->baseValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slacktimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QSliderEx::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QSliderEx::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_QSliderEx,
      qt_meta_data_QSliderEx, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSliderEx::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSliderEx::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSliderEx::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSliderEx))
        return static_cast<void*>(const_cast< QSliderEx*>(this));
    return QSlider::qt_metacast(_clname);
}

int QSliderEx::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QSliderEx::valueChangedEx(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
