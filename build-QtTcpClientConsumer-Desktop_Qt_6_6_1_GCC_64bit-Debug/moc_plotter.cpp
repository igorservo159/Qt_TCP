/****************************************************************************
** Meta object code from reading C++ file 'plotter.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QtTcpClientConsumer/plotter.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASSPlotterENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPlotterENDCLASS = QtMocHelpers::stringData(
    "Plotter",
    "mudaXY",
    "",
    "paintEvent",
    "QPaintEvent*",
    "event",
    "timerEvent",
    "QTimerEvent*",
    "e",
    "load",
    "std::vector<qlonglong>",
    "time",
    "std::vector<float>",
    "value",
    "mousePressEvent",
    "QMouseEvent*",
    "mudaAmplitude",
    "amp",
    "mudaFrequencia",
    "freq",
    "mudaVelocidade",
    "veloc"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlotterENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[8];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[13];
    char stringdata5[6];
    char stringdata6[11];
    char stringdata7[13];
    char stringdata8[2];
    char stringdata9[5];
    char stringdata10[23];
    char stringdata11[5];
    char stringdata12[19];
    char stringdata13[6];
    char stringdata14[16];
    char stringdata15[13];
    char stringdata16[14];
    char stringdata17[4];
    char stringdata18[15];
    char stringdata19[5];
    char stringdata20[15];
    char stringdata21[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlotterENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlotterENDCLASS_t qt_meta_stringdata_CLASSPlotterENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Plotter"
        QT_MOC_LITERAL(8, 6),  // "mudaXY"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 10),  // "paintEvent"
        QT_MOC_LITERAL(27, 12),  // "QPaintEvent*"
        QT_MOC_LITERAL(40, 5),  // "event"
        QT_MOC_LITERAL(46, 10),  // "timerEvent"
        QT_MOC_LITERAL(57, 12),  // "QTimerEvent*"
        QT_MOC_LITERAL(70, 1),  // "e"
        QT_MOC_LITERAL(72, 4),  // "load"
        QT_MOC_LITERAL(77, 22),  // "std::vector<qlonglong>"
        QT_MOC_LITERAL(100, 4),  // "time"
        QT_MOC_LITERAL(105, 18),  // "std::vector<float>"
        QT_MOC_LITERAL(124, 5),  // "value"
        QT_MOC_LITERAL(130, 15),  // "mousePressEvent"
        QT_MOC_LITERAL(146, 12),  // "QMouseEvent*"
        QT_MOC_LITERAL(159, 13),  // "mudaAmplitude"
        QT_MOC_LITERAL(173, 3),  // "amp"
        QT_MOC_LITERAL(177, 14),  // "mudaFrequencia"
        QT_MOC_LITERAL(192, 4),  // "freq"
        QT_MOC_LITERAL(197, 14),  // "mudaVelocidade"
        QT_MOC_LITERAL(212, 5)   // "veloc"
    },
    "Plotter",
    "mudaXY",
    "",
    "paintEvent",
    "QPaintEvent*",
    "event",
    "timerEvent",
    "QTimerEvent*",
    "e",
    "load",
    "std::vector<qlonglong>",
    "time",
    "std::vector<float>",
    "value",
    "mousePressEvent",
    "QMouseEvent*",
    "mudaAmplitude",
    "amp",
    "mudaFrequencia",
    "freq",
    "mudaVelocidade",
    "veloc"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlotterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   67,    2, 0x0a,    4 /* Public */,
       6,    1,   70,    2, 0x0a,    6 /* Public */,
       9,    2,   73,    2, 0x0a,    8 /* Public */,
      14,    1,   78,    2, 0x0a,   11 /* Public */,
      16,    1,   81,    2, 0x0a,   13 /* Public */,
      18,    1,   84,    2, 0x0a,   15 /* Public */,
      20,    1,   87,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 15,    8,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

Q_CONSTINIT const QMetaObject Plotter::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlotterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlotterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlotterENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Plotter, std::true_type>,
        // method 'mudaXY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'paintEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPaintEvent *, std::false_type>,
        // method 'timerEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTimerEvent *, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<long long>, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<float>, std::false_type>,
        // method 'mousePressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'mudaAmplitude'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mudaFrequencia'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mudaVelocidade'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Plotter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Plotter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->mudaXY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->paintEvent((*reinterpret_cast< std::add_pointer_t<QPaintEvent*>>(_a[1]))); break;
        case 2: _t->timerEvent((*reinterpret_cast< std::add_pointer_t<QTimerEvent*>>(_a[1]))); break;
        case 3: _t->load((*reinterpret_cast< std::add_pointer_t<std::vector<qlonglong>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::vector<float>>>(_a[2]))); break;
        case 4: _t->mousePressEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 5: _t->mudaAmplitude((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->mudaFrequencia((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->mudaVelocidade((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Plotter::*)(int , int );
            if (_t _q_method = &Plotter::mudaXY; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Plotter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plotter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlotterENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Plotter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Plotter::mudaXY(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
