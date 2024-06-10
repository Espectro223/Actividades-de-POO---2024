QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
SOURCES += \
    admindb.cpp \
    main.cpp \
    login.cpp \
    ventana.cpp

HEADERS += \
    admindb.h \
    login.h \
    ventana.h

FORMS += \
    login.ui \
    ventana.ui
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
