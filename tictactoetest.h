#ifndef TICTACTOETEST_H
#define TICTACTOETEST_H

#include <QObject>
#include <QtTest/QtTest>
#include <QCoreApplication> // For QApplication or QCoreApplication

class TicTacToeTest : public QObject
{
    Q_OBJECT

private slots:
    void testInitialBoard();
    void testPlayerXWin();
    void testPlayerOWin();
    void testDraw();
};

#endif // TICTACTOETEST_H
