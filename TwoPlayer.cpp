#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"
#include <QMessageBox>

bool playerXTurn;

void MainWindow::TPresetGame()
{
    playerXTurn = true;
    // Clear the game board
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = 0;
        }
    }
    // Reset UI
    ui->Slot_11->setText("");
    ui->Slot_12->setText("");
    ui->Slot_13->setText("");
    ui->Slot_21->setText("");
    ui->Slot_22->setText("");
    ui->Slot_23->setText("");
    ui->Slot_31->setText("");
    ui->Slot_32->setText("");
    ui->Slot_33->setText("");
    // Reset text for all other push buttons similarly
}

void MainWindow::TPhandleButtonClick()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button)
        return;
    // Determine row and column of the clicked button
    int col = (button->objectName().at(button->objectName().length() - 1).digitValue()) - 1;
    int row = (button->objectName().at(button->objectName().length() - 2).digitValue()) - 1;
    // Check if the cell is empty
    if (board[row][col] == 0) {
        addMove(gameId, moveNumber, row, col, playerXTurn ? "X" : "O");
        ++moveNumber;
        // Update game board
        board[row][col] = playerXTurn ? 1 : -1;
        // Update UI
        button->setText(playerXTurn ? "X" : "O");
        // Check for winning condition
        if (checkWin(playerXTurn ? 1 : -1)) {
            QMessageBox::information(this, "Game Over", (playerXTurn ? "Player X" : "Player O") + QString(" wins!"));
            ++gameId;
            if(playerXTurn)
            {
                SetResult("Win");
                ++Wins;
                UpdateStatus();
            }
            else
            {
                SetResult("Lose");
                ++Loses;
                UpdateStatus();
            }
            moveNumber = 1;
            TPresetGame();
            return;
        }
        if (checkDraw()) {
            QMessageBox::information(this, "Game Over", "It's a draw!");
            ++gameId;
            SetResult("Draw");
            ++Draws;
            UpdateStatus();
            moveNumber = 1;
            TPresetGame();
        }
        // Switch player turn
        playerXTurn = !playerXTurn;
    }
}

bool MainWindow::checkWin(int player)
{
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
    }
    // Check columns
    for (int j = 0; j < 3; ++j) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
            return true;
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

bool MainWindow::checkDraw()
{
    // Check for draw
    bool draw = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 0) {
                draw = false;
                break;
            }
        }
    }
    return draw;
}

void MainWindow::on_TP_Back_clicked()
{
    deleteRemaining();
    ui->stackedWidget->setCurrentIndex(PlayModePage);
}

void MainWindow::on_TP_Reset_clicked()
{
    deleteRemaining();
    TPresetGame();
}

char current_player()
{
    return ((playerXTurn)?'X':'O');
}
