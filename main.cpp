#include "mainwindow.h"
#include "tictactoetest.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // Run the tests
    TicTacToeTest test;
    int testResult = QTest::qExec(&test, argc, argv);
    if (testResult != 0) {
        return testResult; // Exit if tests fail
    }

    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    return a.exec();
}
