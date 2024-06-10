QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    AdminDB.cpp \
    Login.cpp \
    Manager.cpp \
    adduserwindow.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    AdminDB.h \
    Login.h \
    Manager.h \
    adduserwindow.h \
    loginwindow.h \
    mainwindow.h

FORMS += \
    adduserwindow.ui \
    loginwindow.ui \
    mainwindow.ui
