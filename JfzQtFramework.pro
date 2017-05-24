#-------------------------------------------------
#
# Project created by QtCreator 2017-05-24T19:24:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JfzQtFramework
TEMPLATE = app
RC_ICONS = skins/jfz.ico

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    skins/skins.h

FORMS    += mainwindow.ui

RESOURCES += \
    skins/skins.qrc
