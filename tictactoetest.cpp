#include "tictactoetest.h"
#include "main.cpp" // Include your main application file if necessary

// QApplication instance for GUI-related tests
QApplication *app = nullptr;

void TicTacToeTest::testInitialBoard()
{
    // Initialize QApplication instance for GUI-related tests
    int argc = 0;
    char *argv[] = {};
    app = new QApplication(argc, argv);

    // Your test case implementation
    MainWindow game;

    // Verify initial board state
    for (int row = 0; row < 3; ++row)
    {
        for (int col = 0; col < 3; ++col)
        {
            QVERIFY2(game.board[row][col] == 0, "Initial board should be empty");
        }
    }

    // Cleanup QApplication instance
    delete app;
    app = nullptr;
}

void TicTacToeTest::testPlayerXWin()
{
    // Initialize QApplication instance for GUI-related tests
    int argc = 0;
    char *argv[] = {};
    app = new QApplication(argc, argv);

    // Your test case implementation
    MainWindow game;

    // Simulate player moves for X win (counting from 0)
    game.board[0][0] = 1; // X in row 0 col 0
    game.board[1][1] = -1; // O in row 1 col 1
    game.board[0][1] = 1; // X in row 0 col 1
    game.board[1][2] = -1; // O in row 1 col 2
    game.board[0][2] = 1; // X in row 0 col 2

    // Check if X is declared the winner
    QVERIFY2(game.checkWin(1), "Player X should win");

    // Cleanup QApplication instance
    delete app;
    app = nullptr;
}

void TicTacToeTest::testPlayerOWin()
{
    // Initialize QApplication instance for GUI-related tests
    int argc = 0;
    char *argv[] = {};
    app = new QApplication(argc, argv);

    // Your test case implementation
    MainWindow game;

    // Simulate player moves for O win (counting from 0)
    game.board[0][0] = 1; // X in row 0 col 0
    game.board[1][1] = -1; // O in row 1 col 1
    game.board[0][1] = 1; // X in row 0 col 1
    game.board[1][0] = -1; // O in row 1 col 0
    game.board[2][1] = 1; // X in row 2 col 1
    game.board[1][2] = -1; // O in row 1 col 2

    // Check if O is declared the winner
    QVERIFY2(game.checkWin(-1), "Player O should win");

    // Cleanup QApplication instance
    delete app;
    app = nullptr;
}

void TicTacToeTest::testDraw()
{
    // Initialize QApplication instance for GUI-related tests
    int argc = 0;
    char *argv[] = {};
    app = new QApplication(argc, argv);

    // Your test case implementation
    MainWindow game;

    // Simulate moves for a draw
    game.board[0][0] = 1; // X in row 0 col 0
    game.board[0][1] = -1; // O in row 0 col 1
    game.board[0][2] = 1; // X in row 0 col 2
    game.board[1][0] = -1; // O in row 1 col 0
    game.board[1][2] = 1; // X in row 1 col 2
    game.board[1][1] = -1; // O in row 1 col 1
    game.board[2][0] = 1; // X in row 2 col 0
    game.board[2][2] = -1; // O in row 2 col 2
    game.board[2][1] = 1; // X in row 2 col 1

    // Check if the game is declared a draw
    QVERIFY2(game.checkDraw(), "Game should end in a draw");

    // Cleanup QApplication instance
    delete app;
    app = nullptr;
}

// This line is required to make the test class executable with QTest
//QTEST_MAIN(TicTacToeTest)
