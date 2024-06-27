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

// void MainWindow::on_TP_NewGame_clicked()
// {

//     ui->stackedWidget->setCurrentIndex(TwoPlayerPage);
// }


// void MainWindow::on_TP_History_clicked()
// {

// }


// void MainWindow::on_TPO_Back_clicked()
// {
//     ui->stackedWidget->setCurrentIndex(PlayModePage);
// }


// void MainWindow::on_AI_NewGame_clicked()
// {
//     AIresetGame();
//     ++gameId;
//     ui->stackedWidget->setCurrentIndex(AIPlayerPage);
// }


// void MainWindow::on_AI_History_clicked()
// {

// }


// void MainWindow::on_AIO_Back_clicked()
// {
//     ui->stackedWidget->setCurrentIndex(PlayModePage);
// }
