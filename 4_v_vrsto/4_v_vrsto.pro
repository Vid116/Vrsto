#-------------------------------------------------
#
# Project created by QtCreator 2014-02-25T12:48:11
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -g3 -O0 -g -pg
QMAKE_CFLAGS += -g3 -O0 -g -pg
QMAKE_CXXFLAGS_RELEASE -= -O2 -g -pg
QMAKE_LFLAGS += -g -pg
TARGET = 4_v_vrsto
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
