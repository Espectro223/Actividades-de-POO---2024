QT       += core gui widgets network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
SOURCES += \
    admindb.cpp \
    formulario.cpp \
    main.cpp \
    login.cpp \
    weather.cpp

HEADERS += \
    admindb.h \
    formulario.h \
    login.h \
    weather.h

FORMS += \
    formulario.ui \
    login.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
