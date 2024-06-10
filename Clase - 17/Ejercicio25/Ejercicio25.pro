QT       += core gui network widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    admindb.cpp \
    label.cpp \
    login.cpp \
    main.cpp \
    admin.cpp \
    ventana.cpp

HEADERS += \
    admin.h \
    admindb.h \
    label.h \
    login.h \
    ventana.h

FORMS += \
    admin.ui
