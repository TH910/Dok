#-------------------------------------------------
#
# Project created by QtCreator 2024-05-05T20:41:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Kalibrierung_Trafo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    messpunkt.cpp \
    helpfunctions.cpp \
    sample.cpp \
    trafo.cpp \
    linear_lsq.cpp\
    calculation.cpp

HEADERS += \
        mainwindow.h \
    messpunkt.h \
    rapidcsv.h \
    helpfunctions.h \
    sample.h \
    track.h \
    track_local.h\
    log.h\
    linear_lsq.h\
    fit_data.h \
    calculation.h

FORMS += \
        mainwindow.ui
