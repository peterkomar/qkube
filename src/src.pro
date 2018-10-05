TEMPLATE = app
CONFIG += warn_on \
    thread \
    qt \
    debug    #- uncoment for debug
    #release #- uncoment for relese

TARGET = ../bin/qkube

OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
RCC_DIR = build

SOURCES += main.cpp \
    kubebrowsermainwindow.cpp \
    applicationview.cpp \
    qjsonview.cpp

QT += network \    
    widgets

HEADERS += \ 
    kubebrowsermainwindow.h \
    applicationview.h \
    qjsonview.h

RESOURCES += application.qrc
