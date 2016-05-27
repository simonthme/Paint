/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MiniPaint/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[15];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_actionOuvrir_triggered"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 30), // "on_actionEnregistrer_triggered"
QT_MOC_LITERAL(4, 69, 15), // "on_line_toggled"
QT_MOC_LITERAL(5, 85, 20), // "on_rectangle_toggled"
QT_MOC_LITERAL(6, 106, 18), // "on_ellipse_toggled"
QT_MOC_LITERAL(7, 125, 26), // "on_actionNouveau_triggered"
QT_MOC_LITERAL(8, 152, 27), // "on_actionImprimer_triggered"
QT_MOC_LITERAL(9, 180, 17), // "on_colour_clicked"
QT_MOC_LITERAL(10, 198, 25), // "on_epaisseur_valueChanged"
QT_MOC_LITERAL(11, 224, 4), // "arg1"
QT_MOC_LITERAL(12, 229, 14), // "on_pen_toggled"
QT_MOC_LITERAL(13, 244, 17), // "on_eraser_toggled"
QT_MOC_LITERAL(14, 262, 17) // "on_cursor_toggled"

    },
    "MainWindow\0on_actionOuvrir_triggered\0"
    "\0on_actionEnregistrer_triggered\0"
    "on_line_toggled\0on_rectangle_toggled\0"
    "on_ellipse_toggled\0on_actionNouveau_triggered\0"
    "on_actionImprimer_triggered\0"
    "on_colour_clicked\0on_epaisseur_valueChanged\0"
    "arg1\0on_pen_toggled\0on_eraser_toggled\0"
    "on_cursor_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionOuvrir_triggered(); break;
        case 1: _t->on_actionEnregistrer_triggered(); break;
        case 2: _t->on_line_toggled(); break;
        case 3: _t->on_rectangle_toggled(); break;
        case 4: _t->on_ellipse_toggled(); break;
        case 5: _t->on_actionNouveau_triggered(); break;
        case 6: _t->on_actionImprimer_triggered(); break;
        case 7: _t->on_colour_clicked(); break;
        case 8: _t->on_epaisseur_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_pen_toggled(); break;
        case 10: _t->on_eraser_toggled(); break;
        case 11: _t->on_cursor_toggled(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
