QT = core
QT += gui
QT += widgets
QT += network

# CONFIG += c++17 cmdline # Linea la Cual hace que se abra la Consola al mismo tiempo que se ejecuta

HEADERS += \
    form.h \
    login.h \
    weather.h

SOURCES += \
    form.cpp \
    login.cpp \
    main.cpp \
    weather.cpp
