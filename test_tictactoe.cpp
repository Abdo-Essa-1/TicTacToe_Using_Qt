// #include <gtest/gtest.h>
// #include "mainwindow.h"

// class TicTacToeTest : public ::testing::Test {
// protected:
//     void SetUp() override {
//         game = new MainWindow();
//     }

//     void TearDown() override {
//         delete game;
//     }

//     MainWindow *game;
// };

// TEST_F(TicTacToeTest, TestInitialPlayer) {
//     ASSERT_EQ(game->current_player(), 'X');
// }

// TEST_F(TicTacToeTest, TestMove) {
//     game->handleMove(0, 0);
//     ASSERT_EQ(game->board(0, 0), 'X');
//     ASSERT_EQ(game->currentPlayer(), 'O');
// }
// // Add more tests as needed
