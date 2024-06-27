#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"

void MainWindow::on_TwoPlayers_clicked()
{
    CurrentOpponent = "Player";
    TPresetGame();
    ui->stackedWidget->setCurrentIndex(TwoPlayerPage);
}


void MainWindow::on_PM_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(MainMenuPage);
}

void MainWindow::on_AiPlayer_clicked()
{
    CurrentOpponent = "AI";
    AIresetGame();
    ui->stackedWidget->setCurrentIndex(AIPlayerPage);
}
