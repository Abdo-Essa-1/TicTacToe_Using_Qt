#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"
#include <QMessageBox>

void MainWindow::createUserTable(const QString &username)
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery query;
    QString tableName = "user_" + username; // Example naming convention
    query.prepare("CREATE TABLE " + tableName + " (game_id INTEGER, move_number INTEGER, Row INTEGER, Column INTEGER, MoveType TEXT, Opponent TEXT, Status TEXT)");
    if (!query.exec()) {
        qDebug() << "Error creating table for " + username;
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();
}

void MainWindow::on_SignUp_Back_clicked()
{
    ui->SignUp_username->clear();
    ui->SignUp_Password->clear();
    ui->SignUp_ConfirmPass->clear();
    ui->SignUp_Password->setEchoMode(QLineEdit::Password);
    ui->SignUp_ConfirmPass->setEchoMode(QLineEdit::Password);
    ui->stackedWidget->setCurrentIndex(LoginPage);
}

void MainWindow::on_pushButton_SignUp_clicked()
{
    QString username = ui->SignUp_username->text();
    QString password = ui->SignUp_Password->text();
    QString Confirmpass = ui->SignUp_ConfirmPass->text();
    if(username == "" || password == "")
    {
        QMessageBox::warning(this, "Invaild", "Please Fill the username and password");
        return;
    }
    if(password != Confirmpass)
    {
        QMessageBox::warning(this, "Invaild", "Password Not Matched");
        return;
    }

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);
    QueryLoadData.prepare("SELECT * FROM PlayersData WHERE Usernames = :Usernames");
    QueryLoadData.bindValue(":Usernames",username);
    if(QueryLoadData.exec())
    {
        if(QueryLoadData.next())
        {
            QMessageBox::warning(this, "Login", "Username is Already Exist, try another one please");
            return;
        }
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();

    Wins = 0;
    Loses = 0;
    Draws = 0;

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("INSERT INTO PlayersData(Usernames,Passwords,Wins,Loses,Draws) VALUES(:Usernames,:Passwords,:Wins,:Loses,:Draws)");
    QueryInsertData.bindValue(":Usernames",username);
    QueryInsertData.bindValue(":Passwords",password);
    QueryInsertData.bindValue(":Wins",Wins);
    QueryInsertData.bindValue(":Loses",Loses);
    QueryInsertData.bindValue(":Draws",Draws);
    QueryInsertData.exec();

    QSqlDatabase::database().commit();
    DB_Connection.close();

    createUserTable(username);
    gameId = 1;

    QMessageBox::information(this, "Signed up", "Signed up  successfully!");
    ui->stackedWidget->setCurrentIndex(LoginPage);
}

void MainWindow::on_SignUp_ShowPass_clicked()
{
    if(ui->SignUp_Password->echoMode() == QLineEdit::Normal)
    {
        ui->SignUp_Password->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->SignUp_Password->setEchoMode(QLineEdit::Normal);
    }
}


void MainWindow::on_SignUp_ShowConfirmPass_clicked()
{
    if(ui->SignUp_ConfirmPass->echoMode() == QLineEdit::Normal)
    {
        ui->SignUp_ConfirmPass->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->SignUp_ConfirmPass->setEchoMode(QLineEdit::Normal);
    }
}
