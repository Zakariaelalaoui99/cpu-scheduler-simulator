

QT += widgets
CONFIG += c++17
TEMPLATE = app
TARGET = simulator

# Source files
SOURCES += \
    Controller.cpp \
    main.cpp \
    CPU.cpp \
    Event.cpp \
    EventQueue.cpp \
    FCFSScheduler.cpp \
    RoundRobinScheduler.cpp \
    Process.cpp \
    Thread.cpp \
    mainwindow.cpp

# Header files
HEADERS += \
    CPU.h \
    Controller.h \
    Event.h \
    EventQueue.h \
    FCFSScheduler.h \
    RoundRobinScheduler.h \
    Process.h \
    Thread.h \
    Scheduler.h \
    mainwindow.h

FORMS += \
        mainwindow.ui
