#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"
#include <QMessageBox>

void MainWindow::on_Detailed_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(GameHistoryPage);
    ui->PreviousGame->setEnabled(true);
    ui->NextGame->setEnabled(true);
    ui->PreviousMove->setEnabled(true);
    ui->NextMove->setEnabled(true);

    // Clear the board
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            HisButtons[i][j]->setText("");
        }
    }
}

void MainWindow::on_PreviousGame_clicked()
{
    ui->NextMove->setEnabled(false);
    ui->PreviousMove->setEnabled(true);

    // Clear the board
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            HisButtons[i][j]->setText("");
        }
    }
    --currentgame;
    if(currentgame == 1)
    {
        ui->PreviousGame->setEnabled(false);
    }
    ui->NextGame->setEnabled(true);

    //load game number and game status and game opponent
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);
    QueryLoadData.prepare("SELECT Status, Opponent FROM user_" + CurrentUsername + " WHERE game_id = :gameid AND move_number = (SELECT MAX(move_number) FROM user_" + CurrentUsername + " WHERE game_id = :gameid)");
    QueryLoadData.bindValue(":gameid",currentgame);
    if(QueryLoadData.exec())
    {
        if(QueryLoadData.next())
        {
            ui->GameNumber->setText("Game Number: " + QString::number(currentgame));
            ui->GameStatus->setText("Game Status: " + QString(QueryLoadData.value("Status").toString()));
            ui->GameOpponent->setText("Game Opponent: " + QString(QueryLoadData.value("Opponent").toString()));
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
    QueryLoadData.bindValue(":gameid",currentgame);
    if(QueryLoadData.exec())
    {
        if(QueryLoadData.next())
        {
            nomoves = QueryLoadData.value(0).toInt();
            currentmove = nomoves;
            QString movetype;
            for(int i = nomoves; i > 0; --i)
            {
                QueryLoadData.prepare("SELECT Row, Column, MoveType FROM user_" + CurrentUsername + " WHERE game_id = :gameid AND move_number = :movenumber");
                QueryLoadData.bindValue(":gameid",currentgame);
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
}

void MainWindow::on_NextGame_clicked()
{
    ui->NextMove->setEnabled(false);
    ui->PreviousMove->setEnabled(true);

    // Clear the board
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            HisButtons[i][j]->setText("");
        }
    }
    ++currentgame;
    if(currentgame == gameId - 1)
    {
        ui->NextGame->setEnabled(false);
    }
    ui->PreviousGame->setEnabled(true);

    //load game number and game status and game opponent
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);
    QueryLoadData.prepare("SELECT Status, Opponent FROM user_" + CurrentUsername + " WHERE game_id = :gameid AND move_number = (SELECT MAX(move_number) FROM user_" + CurrentUsername + " WHERE game_id = :gameid)");
    QueryLoadData.bindValue(":gameid",currentgame);
    if(QueryLoadData.exec())
    {
        if(QueryLoadData.next())
        {
            ui->GameNumber->setText("Game Number: " + QString::number(currentgame));
            ui->GameStatus->setText("Game Status: " + QString(QueryLoadData.value("Status").toString()));
            ui->GameOpponent->setText("Game Opponent: " + QString(QueryLoadData.value("Opponent").toString()));
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
    QueryLoadData.bindValue(":gameid",currentgame);
    if(QueryLoadData.exec())
    {
        if(QueryLoadData.next())
        {
            nomoves = QueryLoadData.value(0).toInt();
            currentmove = nomoves;
            QString movetype;
            for(int i = nomoves; i > 0; --i)
            {
                QueryLoadData.prepare("SELECT Row, Column, MoveType FROM user_" + CurrentUsername + " WHERE game_id = :gameid AND move_number = :movenumber");
                QueryLoadData.bindValue(":gameid",currentgame);
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
}

void MainWindow::on_PreviousMove_clicked()
{
    ui->NextMove->setEnabled(true);

    //load game history to the buttons
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);
    QueryLoadData.prepare("SELECT Row, Column FROM user_" + CurrentUsername + " WHERE game_id = :gameid AND move_number = :movenumber");
    QueryLoadData.bindValue(":gameid",currentgame);
    QueryLoadData.bindValue(":movenumber",currentmove);
    if(QueryLoadData.exec())
    {
        if(QueryLoadData.next())
        {
            row = QueryLoadData.value("Row").toInt();
            col = QueryLoadData.value("Column").toInt();
            HisButtons[row][col]->setText("");
            --currentmove;
            if(currentmove == 0)
            {
                ui->PreviousMove->setEnabled(false);
            }
        }
        else
        {
            qDebug() << "game move not found";
        }
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();
}

void MainWindow::on_NextMove_clicked()
{
    ui->PreviousMove->setEnabled(true);
    ++currentmove;
    if(currentmove == nomoves)
    {
        ui->NextMove->setEnabled(false);
    }

    //load game history to the buttons
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);
    QueryLoadData.prepare("SELECT Row, Column, MoveType FROM user_" + CurrentUsername + " WHERE game_id = :gameid AND move_number = :movenumber");
    QueryLoadData.bindValue(":gameid",currentgame);
    QueryLoadData.bindValue(":movenumber",currentmove);
    if(QueryLoadData.exec())
    {
        if(QueryLoadData.next())
        {
            QString movetype;
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

    QSqlDatabase::database().commit();
    DB_Connection.close();
}
