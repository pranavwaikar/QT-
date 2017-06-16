#-------------------------------------------------
#
# Project created by QtCreator 2016-04-03T10:36:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = weather
TEMPLATE = app


SOURCES += main.cpp\
        weather.cpp \
    temp.cpp

HEADERS  += weather.h \
    temp.h

FORMS    += weather.ui
