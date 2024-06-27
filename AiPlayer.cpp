#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"
#include <QMessageBox>

char AIboard[3][3];
bool playerTurn;

void MainWindow::AIhandleButtonClick()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if (!button)
        return;
    // Determine row and column of the clicked button
    int row = (button->objectName().at(button->objectName().length() - 2).digitValue()) - 1;
    int col = (button->objectName().at(button->objectName().length() - 1).digitValue()) - 1;
    if (AIboard[row][col] == ' ' && !isGameOver() && playerTurn) {
        makeMove(row, col, 'O');

        addMove(gameId, moveNumber, row, col, "O");
        ++moveNumber;

        // Update UI
        updateUI();

        if (!isGameOver()) {
            aiMove();
            updateUI();
        }
    }
}

void MainWindow::AIresetGame()
{
    playerTurn = true;
    // Clear the game AIboard
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            AIboard[i][j] = ' ';
        }
    }
    updateUI();
}

void MainWindow::makeMove(int row, int col, char player)
{
    AIboard[row][col] = player;
}

bool MainWindow::isGameOver()
{
    // Check for a win
    for (int i = 0; i < 3; ++i) {
        if (AIboard[i][0] == AIboard[i][1] && AIboard[i][1] == AIboard[i][2] && AIboard[i][0] != ' ')
            return true;
        if (AIboard[0][i] == AIboard[1][i] && AIboard[1][i] == AIboard[2][i] && AIboard[0][i] != ' ')
            return true;
    }
    if (AIboard[0][0] == AIboard[1][1] && AIboard[1][1] == AIboard[2][2] && AIboard[0][0] != ' ')
        return true;
    if (AIboard[0][2] == AIboard[1][1] && AIboard[1][1] == AIboard[2][0] && AIboard[0][2] != ' ')
        return true;

    // Check for a draw
    bool draw = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (AIboard[i][j] == ' ')
                draw = false;
        }
    }
    if (draw)
        return true;

    return false;
}

int MainWindow::evaluate()
{
    // Evaluate the current state of the game
    for (int i = 0; i < 3; ++i) {
        if (AIboard[i][0] == AIboard[i][1] && AIboard[i][1] == AIboard[i][2]) {
            if (AIboard[i][0] == 'X')
                return 10;
            else if (AIboard[i][0] == 'O')
                return -10;
        }
        if (AIboard[0][i] == AIboard[1][i] && AIboard[1][i] == AIboard[2][i]) {
            if (AIboard[0][i] == 'X')
                return 10;
            else if (AIboard[0][i] == 'O')
                return -10;
        }
    }
    if (AIboard[0][0] == AIboard[1][1] && AIboard[1][1] == AIboard[2][2]) {
        if (AIboard[0][0] == 'X')
            return 10;
        else if (AIboard[0][0] == 'O')
            return -10;
    }
    if (AIboard[0][2] == AIboard[1][1] && AIboard[1][1] == AIboard[2][0]) {
        if (AIboard[0][2] == 'X')
            return 10;
        else if (AIboard[0][2] == 'O')
            return -10;
    }

    return 0; // If no one has won
}

int MainWindow::minimax(char player)
{
    int score = evaluate();

    // If AI has won the game
    if (score == 10)
        return score;

    // If player has won the game
    if (score == -10)
        return score;

    // If there are no moves left and no one has won
    if (isGameOver())
        return 0;

    // If it's AI's turn
    if (player == 'X') {
        int best = -1000;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (AIboard[i][j] == ' ') {
                    AIboard[i][j] = player;
                    best = std::max(best, minimax('O'));
                    AIboard[i][j] = ' ';
                }
            }
        }
        return best;
    }
    // If it's player's turn
    else {
        int best = 1000;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                if (AIboard[i][j] == ' ') {
                    AIboard[i][j] = player;
                    best = std::min(best, minimax('X'));
                    AIboard[i][j] = ' ';
                }
            }
        }
        return best;
    }
}

void MainWindow::aiMove()
{
    int bestVal = -1000;
    int bestRow = -1;
    int bestCol = -1;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (AIboard[i][j] == ' ') {
                AIboard[i][j] = 'X';
                int moveVal = minimax('O');
                AIboard[i][j] = ' ';
                if (moveVal > bestVal) {
                    bestRow = i;
                    bestCol = j;
                    bestVal = moveVal;
                }
            }
        }
    }

    makeMove(bestRow, bestCol, 'X');
    addMove(gameId, moveNumber, bestRow, bestCol, "X");
    ++moveNumber;
}

void MainWindow::on_AI_Back_clicked()
{
    deleteRemaining();
    ui->stackedWidget->setCurrentIndex(PlayModePage);
}

void MainWindow::updateUI()
{
    // Iterate over each button and update its text and enabled state
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            // Calculate the index of the button in the array of buttons
            int index = i * 3 + j;
            QPushButton *button = buttons[index];

            // Update the button's text based on the game board state
            if (AIboard[i][j] == 'X')
                button->setText("X");
            else if (AIboard[i][j] == 'O')
                button->setText("O");
            else
                button->setText("");

            // Update the button's enabled state based on whether the cell is empty
            //button->setEnabled(AIboard[i][j] == ' ');
        }
    }

    if (isGameOver()) {
        ++gameId;
        if (evaluate() == 10)
        {
            QMessageBox::information(this, "Game Over", "AI wins!");
            SetResult("Lose");
            ++Loses;
            UpdateStatus();
            moveNumber = 1;
            AIresetGame();
            return;
        }
        else if (evaluate() == -10)
        {
            QMessageBox::information(this, "Game Over", "You win!");
            SetResult("Win");
            ++Wins;
            UpdateStatus();
            moveNumber = 1;
            AIresetGame();
            return;
        }
        else
        {
            QMessageBox::information(this, "Game Over", "It's a draw!");
            SetResult("Draw");
            ++Draws;
            UpdateStatus();
            moveNumber = 1;
            AIresetGame();
            return;
        }
    }
}

void MainWindow::on_AI_Reset_clicked()
{
    deleteRemaining();
    AIresetGame();
}
