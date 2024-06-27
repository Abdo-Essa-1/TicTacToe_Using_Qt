#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"
#include <QMessageBox>

void MainWindow::on_DetailedHistory_clicked()
{
    if (!(Wins || Draws || Loses)) {
        QMessageBox::information(this, "Game History", "No games played yet.");
        return;
    }

    //load game number and game status
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);
    QueryLoadData.prepare("SELECT Status, Opponent FROM user_" + CurrentUsername + " WHERE game_id = :gameid AND move_number = (SELECT MAX(move_number) FROM user_" + CurrentUsername + " WHERE game_id = :gameid)");
    QueryLoadData.bindValue(":gameid",gameId - 1);
    if(QueryLoadData.exec())
    {
        if(QueryLoadData.next())
        {
            ui->GameNumber->setText("Game Number: " + QString::number(gameId - 1));
            ui->GameStatus->setText("Game Status: " + QString(QueryLoadData.value("Status").toString()));
            ui->GameOpponent->setText("Game Opponent: " + QueryLoadData.value("Opponent").toString());
        }
        else
        {
            qDebug() << "game id not found";
        }
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();

    //load game history to the buttons
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QueryLoadData.prepare("SELECT MAX(move_number) FROM user_" + CurrentUsername + " WHERE game_id = :gameid");
    QueryLoadData.bindValue(":gameid",gameId - 1);
    if(QueryLoadData.exec())
    {
        if(QueryLoadData.next())
        {
            nomoves = QueryLoadData.value(0).toInt();
            QString movetype;
            for(int i = nomoves; i > 0; --i)
            {
                QueryLoadData.prepare("SELECT Row, Column, MoveType FROM user_" + CurrentUsername + " WHERE game_id = :gameid AND move_number = :movenumber");
                QueryLoadData.bindValue(":gameid",gameId - 1);
                QueryLoadData.bindValue(":movenumber",i);
                if(QueryLoadData.exec())
                {
                    if(QueryLoadData.next())
                    {
                        row = QueryLoadData.value("Row").toInt();
                        col = QueryLoadData.value("Column").toInt();
                        movetype = QueryLoadData.value("MoveType").toString();
                        HisButtons[row][col]->setText(movetype);
                    }
                    else
                    {
                        qDebug() << "game move not found";
                    }
                }
            }
        }
        else
        {
            qDebug() << "game id not found";
        }
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();

    currentgame = gameId - 1;
    currentmove = nomoves;
    ui->NextGame->setEnabled(false);
    ui->NextMove->setEnabled(false);
    if(currentgame == 1)
    {
        ui->PreviousGame->setEnabled(false);
    }
    ui->stackedWidget->setCurrentIndex(DetailedHistoryPage);
}


void MainWindow::on_HistoryBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(MainMenuPage);
}
