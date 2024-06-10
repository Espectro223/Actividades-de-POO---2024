QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    alta.cpp \
    main.cpp \
    login.cpp \
    milabel.cpp

HEADERS += \
    alta.h \
    login.h \
    milabel.h

FORMS += \
    alta.ui \
    login.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
