QT       += core gui network widgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    main.cpp \
    login.cpp

HEADERS += \
    login.h

FORMS += \
    login.ui