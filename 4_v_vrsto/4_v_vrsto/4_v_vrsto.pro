#-------------------------------------------------
#
# Project created by QtCreator 2014-03-10T11:02:39
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -g3 -O2 -g -pg
QMAKE_CFLAGS += -g3 -O2 -g -pg
QMAKE_CXXFLAGS_RELEASE -= -O2 -g -pg
QMAKE_LFLAGS += -g -pg
TARGET = 4_v_vrsto
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
