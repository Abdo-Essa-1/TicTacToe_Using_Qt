#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "PageNumbers.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    DB_Connection = QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("LoginPlayersData.db");
    if(DB_Connection.open())
    {
        qDebug()<< "Database is connected";
    }
    else
    {
        qDebug()<< "Database is not connected";
        qDebug()<< "Error: " << DB_Connection.lastError().text();
    }

    connect(ui->Slot_11, &QPushButton::clicked, this, &MainWindow::TPhandleButtonClick);
    connect(ui->Slot_12, &QPushButton::clicked, this, &MainWindow::TPhandleButtonClick);
    connect(ui->Slot_13, &QPushButton::clicked, this, &MainWindow::TPhandleButtonClick);
    connect(ui->Slot_21, &QPushButton::clicked, this, &MainWindow::TPhandleButtonClick);
    connect(ui->Slot_22, &QPushButton::clicked, this, &MainWindow::TPhandleButtonClick);
    connect(ui->Slot_23, &QPushButton::clicked, this, &MainWindow::TPhandleButtonClick);
    connect(ui->Slot_31, &QPushButton::clicked, this, &MainWindow::TPhandleButtonClick);
    connect(ui->Slot_32, &QPushButton::clicked, this, &MainWindow::TPhandleButtonClick);
    connect(ui->Slot_33, &QPushButton::clicked, this, &MainWindow::TPhandleButtonClick);

    connect(ui->AiSlot_11, &QPushButton::clicked, this, &MainWindow::AIhandleButtonClick);
    buttons[0] = ui->AiSlot_11;
    connect(ui->AiSlot_12, &QPushButton::clicked, this, &MainWindow::AIhandleButtonClick);
    buttons[1] = ui->AiSlot_12;
    connect(ui->AiSlot_13, &QPushButton::clicked, this, &MainWindow::AIhandleButtonClick);
    buttons[2] = ui->AiSlot_13;
    connect(ui->AiSlot_21, &QPushButton::clicked, this, &MainWindow::AIhandleButtonClick);
    buttons[3] = ui->AiSlot_21;
    connect(ui->AiSlot_22, &QPushButton::clicked, this, &MainWindow::AIhandleButtonClick);
    buttons[4] = ui->AiSlot_22;
    connect(ui->AiSlot_23, &QPushButton::clicked, this, &MainWindow::AIhandleButtonClick);
    buttons[5] = ui->AiSlot_23;
    connect(ui->AiSlot_31, &QPushButton::clicked, this, &MainWindow::AIhandleButtonClick);
    buttons[6] = ui->AiSlot_31;
    connect(ui->AiSlot_32, &QPushButton::clicked, this, &MainWindow::AIhandleButtonClick);
    buttons[7] = ui->AiSlot_32;
    connect(ui->AiSlot_33, &QPushButton::clicked, this, &MainWindow::AIhandleButtonClick);
    buttons[8] = ui->AiSlot_33;

    HisButtons[0][0] = ui->His_11;
    HisButtons[0][1] = ui->His_12;
    HisButtons[0][2] = ui->His_13;
    HisButtons[1][0] = ui->His_21;
    HisButtons[1][1] = ui->His_22;
    HisButtons[1][2] = ui->His_23;
    HisButtons[2][0] = ui->His_31;
    HisButtons[2][1] = ui->His_32;
    HisButtons[2][2] = ui->His_33;

    TPresetGame();
    AIresetGame();

    gameId = 1;
    moveNumber = 1;

    CurrentUsername = "";
    CurrentPassword = "";

    ui->stackedWidget->setCurrentIndex(LoginPage);

    //ui->P1_Login->setStyleSheet("background-image: url(':/rec/img/firstwindow.jpg'); background-repeat: no-repeat; background-position: center; background-size: cover;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addMove(int Gameid, int Move_Number, int Row, int Column, QString Movetype)
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery query;
    query.prepare("INSERT INTO user_" + CurrentUsername + " (game_id, move_number, Row, Column, MoveType, Opponent) VALUES (:gameId, :moveNumber, :Row, :Column, :MoveType, :Opp)");
    query.bindValue(":gameId", Gameid);
    query.bindValue(":moveNumber", Move_Number);
    query.bindValue(":Row", Row);
    query.bindValue(":Column", Column);
    query.bindValue(":MoveType", Movetype);
    query.bindValue(":Opp", CurrentOpponent);
    if(!query.exec())
    {
        qDebug() << "Error adding move";
        return;
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();
    return;
}


void MainWindow::SetResult(const QString Status)
{

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryUpdateData(DB_Connection);
    QueryUpdateData.prepare("UPDATE user_" + CurrentUsername + " SET Status = :status WHERE game_id = :gameid AND move_number = :MoveN");
    QueryUpdateData.bindValue(":status",Status);
    QueryUpdateData.bindValue(":gameid",gameId - 1);
    QueryUpdateData.bindValue(":MoveN",moveNumber - 1);
    if(!QueryUpdateData.exec())
    {
        qDebug() << "Error adding Result";
        qDebug() << QueryUpdateData.lastError().text();
        return;
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();
}

void MainWindow::UpdateStatus()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryUpdateData(DB_Connection);
    QueryUpdateData.prepare("UPDATE PlayersData SET Wins = :Wins, Loses = :Loses, Draws = :Draws WHERE Usernames = :Username AND Passwords = :Password");
    QueryUpdateData.bindValue(":Wins",Wins);
    QueryUpdateData.bindValue(":Loses",Loses);
    QueryUpdateData.bindValue(":Draws",Draws);
    QueryUpdateData.bindValue(":Username",CurrentUsername);
    QueryUpdateData.bindValue(":Password",CurrentPassword);
    QueryUpdateData.exec();

    QSqlDatabase::database().commit();
    DB_Connection.close();
}

void MainWindow::deleteRemaining()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryDeleteData(DB_Connection);
    QueryDeleteData.prepare("DELETE FROM user_" + CurrentUsername + " WHERE game_id = :gameid");
    QueryDeleteData.bindValue(":gameid",gameId);
    QueryDeleteData.exec();

    QSqlDatabase::database().commit();
    DB_Connection.close();
}
