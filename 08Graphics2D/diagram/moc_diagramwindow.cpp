/****************************************************************************
** Meta object code from reading C++ file 'diagramwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "diagramwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagramwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DiagramWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      25,   14,   14,   14, 0x08,
      35,   14,   14,   14, 0x08,
      41,   14,   14,   14, 0x08,
      47,   14,   14,   14, 0x08,
      54,   14,   14,   14, 0x08,
      62,   14,   14,   14, 0x08,
      77,   14,   14,   14, 0x08,
      90,   14,   14,   14, 0x08,
     103,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DiagramWindow[] = {
    "DiagramWindow\0\0addNode()\0addLink()\0"
    "del()\0cut()\0copy()\0paste()\0bringToFront()\0"
    "sendToBack()\0properties()\0updateActions()\0"
};

void DiagramWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DiagramWindow *_t = static_cast<DiagramWindow *>(_o);
        switch (_id) {
        case 0: _t->addNode(); break;
        case 1: _t->addLink(); break;
        case 2: _t->del(); break;
        case 3: _t->cut(); break;
        case 4: _t->copy(); break;
        case 5: _t->paste(); break;
        case 6: _t->bringToFront(); break;
        case 7: _t->sendToBack(); break;
        case 8: _t->properties(); break;
        case 9: _t->updateActions(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DiagramWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DiagramWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DiagramWindow,
      qt_meta_data_DiagramWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DiagramWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DiagramWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DiagramWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramWindow))
        return static_cast<void*>(const_cast< DiagramWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DiagramWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
