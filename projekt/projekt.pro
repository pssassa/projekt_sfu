QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_work.cpp \
    autorization.cpp \
    lichn_kab.cpp \
    main.cpp \
    mainwindow.cpp \
    manage_work.cpp \
    redact_work.cpp \
    registration.cpp

HEADERS += \
    add_work.h \
    autorization.h \
    lichn_kab.h \
    mainwindow.h \
    manage_work.h \
    redact_work.h \
    registration.h

FORMS += \
    add_work.ui \
    autorization.ui \
    lichn_kab.ui \
    mainwindow.ui \
    manage_work.ui \
    redact_work.ui \
    registration.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
