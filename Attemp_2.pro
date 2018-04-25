#-------------------------------------------------
#
# Project created by QtCreator 2018-04-24T16:08:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Attemp_2
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
    logged_in.cpp \
    course_info.cpp \
    course_selection.cpp \
    course1.cpp \
    course2.cpp \
    course3.cpp \
    course4.cpp

HEADERS += \
        mainwindow.h \
    logged_in.h \
    course_info.h \
    course_selection.h \
    course1.h \
    course2.h \
    course3.h \
    course4.h

FORMS += \
        mainwindow.ui \
    logged_in.ui \
    course_info.ui \
    course_selection.ui \
    course1.ui \
    course2.ui \
    course3.ui \
    course4.ui
