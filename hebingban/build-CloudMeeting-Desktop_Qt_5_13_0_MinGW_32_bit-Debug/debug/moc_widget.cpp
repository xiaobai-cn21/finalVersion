/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../kehu/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[29];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 7), // "pushImg"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 8), // "PushText"
QT_MOC_LITERAL(4, 25, 8), // "MSG_TYPE"
QT_MOC_LITERAL(5, 34, 9), // "stopAudio"
QT_MOC_LITERAL(6, 44, 10), // "startAudio"
QT_MOC_LITERAL(7, 55, 12), // "volumnChange"
QT_MOC_LITERAL(8, 68, 24), // "on_createmeetBtn_clicked"
QT_MOC_LITERAL(9, 93, 22), // "on_exitmeetBtn_clicked"
QT_MOC_LITERAL(10, 116, 20), // "on_openVedio_clicked"
QT_MOC_LITERAL(11, 137, 20), // "on_openAudio_clicked"
QT_MOC_LITERAL(12, 158, 21), // "on_connServer_clicked"
QT_MOC_LITERAL(13, 180, 11), // "cameraError"
QT_MOC_LITERAL(14, 192, 14), // "QCamera::Error"
QT_MOC_LITERAL(15, 207, 10), // "audioError"
QT_MOC_LITERAL(16, 218, 9), // "datasolve"
QT_MOC_LITERAL(17, 228, 5), // "MESG*"
QT_MOC_LITERAL(18, 234, 6), // "recvip"
QT_MOC_LITERAL(19, 241, 18), // "cameraImageCapture"
QT_MOC_LITERAL(20, 260, 11), // "QVideoFrame"
QT_MOC_LITERAL(21, 272, 5), // "frame"
QT_MOC_LITERAL(22, 278, 22), // "on_joinmeetBtn_clicked"
QT_MOC_LITERAL(23, 301, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(24, 334, 5), // "value"
QT_MOC_LITERAL(25, 340, 6), // "speaks"
QT_MOC_LITERAL(26, 347, 18), // "on_sendmsg_clicked"
QT_MOC_LITERAL(27, 366, 8), // "textSend"
QT_MOC_LITERAL(28, 375, 13) // "onReconnected"

    },
    "Widget\0pushImg\0\0PushText\0MSG_TYPE\0"
    "stopAudio\0startAudio\0volumnChange\0"
    "on_createmeetBtn_clicked\0"
    "on_exitmeetBtn_clicked\0on_openVedio_clicked\0"
    "on_openAudio_clicked\0on_connServer_clicked\0"
    "cameraError\0QCamera::Error\0audioError\0"
    "datasolve\0MESG*\0recvip\0cameraImageCapture\0"
    "QVideoFrame\0frame\0on_joinmeetBtn_clicked\0"
    "on_horizontalSlider_valueChanged\0value\0"
    "speaks\0on_sendmsg_clicked\0textSend\0"
    "onReconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  124,    2, 0x06 /* Public */,
       3,    2,  127,    2, 0x06 /* Public */,
       3,    1,  132,    2, 0x26 /* Public | MethodCloned */,
       5,    0,  135,    2, 0x06 /* Public */,
       6,    0,  136,    2, 0x06 /* Public */,
       7,    1,  137,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  140,    2, 0x08 /* Private */,
       9,    0,  141,    2, 0x08 /* Private */,
      10,    0,  142,    2, 0x08 /* Private */,
      11,    0,  143,    2, 0x08 /* Private */,
      12,    0,  144,    2, 0x08 /* Private */,
      13,    1,  145,    2, 0x08 /* Private */,
      15,    1,  148,    2, 0x08 /* Private */,
      16,    1,  151,    2, 0x08 /* Private */,
      18,    1,  154,    2, 0x08 /* Private */,
      19,    1,  157,    2, 0x08 /* Private */,
      22,    0,  160,    2, 0x08 /* Private */,
      23,    1,  161,    2, 0x08 /* Private */,
      25,    1,  164,    2, 0x08 /* Private */,
      26,    0,  167,    2, 0x08 /* Private */,
      27,    0,  168,    2, 0x08 /* Private */,
      28,    0,  169,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::UInt,    2,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pushImg((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->PushText((*reinterpret_cast< MSG_TYPE(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->PushText((*reinterpret_cast< MSG_TYPE(*)>(_a[1]))); break;
        case 3: _t->stopAudio(); break;
        case 4: _t->startAudio(); break;
        case 5: _t->volumnChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_createmeetBtn_clicked(); break;
        case 7: _t->on_exitmeetBtn_clicked(); break;
        case 8: _t->on_openVedio_clicked(); break;
        case 9: _t->on_openAudio_clicked(); break;
        case 10: _t->on_connServer_clicked(); break;
        case 11: _t->cameraError((*reinterpret_cast< QCamera::Error(*)>(_a[1]))); break;
        case 12: _t->audioError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->datasolve((*reinterpret_cast< MESG*(*)>(_a[1]))); break;
        case 14: _t->recvip((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 15: _t->cameraImageCapture((*reinterpret_cast< QVideoFrame(*)>(_a[1]))); break;
        case 16: _t->on_joinmeetBtn_clicked(); break;
        case 17: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->speaks((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->on_sendmsg_clicked(); break;
        case 20: _t->textSend(); break;
        case 21: _t->onReconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MSG_TYPE >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MSG_TYPE >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QCamera::Error >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MESG* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVideoFrame >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Widget::*)(QImage );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::pushImg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Widget::*)(MSG_TYPE , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::PushText)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Widget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::stopAudio)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Widget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::startAudio)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Widget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::volumnChange)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Widget::pushImg(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::PushText(MSG_TYPE _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void Widget::stopAudio()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Widget::startAudio()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Widget::volumnChange(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
