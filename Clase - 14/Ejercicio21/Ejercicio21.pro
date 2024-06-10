QT       += core gui widgets network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    admindb.cpp \
    formulario.cpp \
    main.cpp \
    login.cpp \
    manager.cpp \
    registro.cpp

HEADERS += \
    admindb.h \
    formulario.h \
    login.h \
    manager.h \
    registro.h

FORMS += \
    formulario.ui \
    login.ui \
    registro.ui

