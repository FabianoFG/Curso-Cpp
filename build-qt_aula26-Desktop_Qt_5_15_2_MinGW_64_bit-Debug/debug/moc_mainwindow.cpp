/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../qt_aula26/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_actionAbrir_triggered"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "on_actionNovo_triggered"
QT_MOC_LITERAL(4, 61, 30), // "on_actionSalvar_como_triggered"
QT_MOC_LITERAL(5, 92, 25), // "on_actionSalvar_triggered"
QT_MOC_LITERAL(6, 118, 25), // "on_actionFechar_triggered"
QT_MOC_LITERAL(7, 144, 25), // "on_actionCopiar_triggered"
QT_MOC_LITERAL(8, 170, 27), // "on_actionRecortar_triggered"
QT_MOC_LITERAL(9, 198, 24), // "on_actionColar_triggered"
QT_MOC_LITERAL(10, 223, 27), // "on_actionDesfazer_triggered"
QT_MOC_LITERAL(11, 251, 26), // "on_actionRefazer_triggered"
QT_MOC_LITERAL(12, 278, 24), // "on_actionFonte_triggered"
QT_MOC_LITERAL(13, 303, 30), // "on_actionFonte_geral_triggered"
QT_MOC_LITERAL(14, 334, 22), // "on_actionCor_triggered"
QT_MOC_LITERAL(15, 357, 31) // "on_actionCor_de_fundo_triggered"

    },
    "MainWindow\0on_actionAbrir_triggered\0"
    "\0on_actionNovo_triggered\0"
    "on_actionSalvar_como_triggered\0"
    "on_actionSalvar_triggered\0"
    "on_actionFechar_triggered\0"
    "on_actionCopiar_triggered\0"
    "on_actionRecortar_triggered\0"
    "on_actionColar_triggered\0"
    "on_actionDesfazer_triggered\0"
    "on_actionRefazer_triggered\0"
    "on_actionFonte_triggered\0"
    "on_actionFonte_geral_triggered\0"
    "on_actionCor_triggered\0"
    "on_actionCor_de_fundo_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionAbrir_triggered(); break;
        case 1: _t->on_actionNovo_triggered(); break;
        case 2: _t->on_actionSalvar_como_triggered(); break;
        case 3: _t->on_actionSalvar_triggered(); break;
        case 4: _t->on_actionFechar_triggered(); break;
        case 5: _t->on_actionCopiar_triggered(); break;
        case 6: _t->on_actionRecortar_triggered(); break;
        case 7: _t->on_actionColar_triggered(); break;
        case 8: _t->on_actionDesfazer_triggered(); break;
        case 9: _t->on_actionRefazer_triggered(); break;
        case 10: _t->on_actionFonte_triggered(); break;
        case 12: _t->on_actionCor_triggered(); break;
        case 13: _t->on_actionCor_de_fundo_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
