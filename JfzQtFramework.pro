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
VERSION = 1.0.0.0
QMAKE_TARGET_PRODUCT = "JfzQtFramework"
QMAKE_TARGET_COMPANY = "Sandeepin"
QMAKE_TARGET_DESCRIPTION = "Jfz's QtFramework"
QMAKE_TARGET_COPYRIGHT = "Copyright JFZ"

SOURCES += main.cpp\
        mainwindow.cpp \
    systemTray.cpp

HEADERS  += mainwindow.h \
    skins/skins.h \
    systemTray.h

FORMS    += mainwindow.ui

RESOURCES += \
    skins/skins.qrc
