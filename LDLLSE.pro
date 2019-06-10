TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    cancion.cpp \
    node.cpp \
    lista.cpp

HEADERS += \
    error.h \
    cancion.h \
    node.h \
    lista.h
