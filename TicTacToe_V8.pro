QT       += core gui sql testlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AccountSettings.cpp \
    AiPlayer.cpp \
    DetailedGameHistory.cpp \
    GameHistory.cpp \
    LoginWindow.cpp \
    MainMenu.cpp \
    PlayMode.cpp \
    SignUp.cpp \
    TwoPlayer.cpp \
    UpdatePassword.cpp \
    UpdateUsername.cpp \
    main.cpp \
    mainwindow.cpp \
    tictactoetest.cpp

HEADERS += \
    PageNumbers.h \
    mainwindow.h \
    tictactoetest.h

FORMS += \
    mainwindow.ui

# TEMPLATE = subdirs

# SUBDIRS += main tests

# main.path = main
# tests.path = tests

# # Define the order of build
# tests.depends = src

# # Add a separate executable for the tests
# TEMPLATE = app

# # Target for the application
# TARGET = TicTacToe_V8

# # Target for the test executable
# QMAKE_EXTRA_TARGETS += tests

# tests.target = tictactoetest
# tests.commands = $$QMAKE $(MAKE) -f Makefile check

# DISTFILES += \
#     .github/workflows/main.yml

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
