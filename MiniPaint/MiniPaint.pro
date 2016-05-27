#-------------------------------------------------
#
# Project created by QtCreator 2015-10-01T15:14:18
#
#-------------------------------------------------
QT += widgets
QT       += core gui
QT +=  printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MiniPaint
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    scene.cpp \
    viewannuaire.cpp

HEADERS  += mainwindow.h \
    scene.h \
    viewannuaire.h

FORMS    += mainwindow.ui \
    viewannuaire.ui

RESOURCES += \
    icons.qrc
