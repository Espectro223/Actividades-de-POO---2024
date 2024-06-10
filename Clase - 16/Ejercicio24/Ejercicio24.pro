QT       += core gui network widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    main.cpp \
    htmlparser.cpp

HEADERS += \
    htmlparser.h

FORMS += \
    htmlparser.ui
