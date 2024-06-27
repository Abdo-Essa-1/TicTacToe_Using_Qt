#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"
#include <QCryptographicHash>
#include <QMessageBox>

int MainWindow::getLastGameId(const QString &username)
{
    QSqlQuery query("SELECT MAX(game_id) FROM user_" + username);
    if (query.exec() && query.next()) {
        return query.value(0).toInt();
    } else {
        qDebug() << "Error retrieving last game ID:" << query.lastError().text();
        return -1; // Return -1 to indicate failure
    }
}

void MainWindow::on_pushButton_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);
    QueryLoadData.prepare("SELECT * FROM PlayersData WHERE Usernames = :Usernames");
    QueryLoadData.bindValue(":Usernames",username);
    if(QueryLoadData.exec() && QueryLoadData.next())
    {
        QString storedHash = QueryLoadData.value("Passwords").toString();
        QString inputHash = hashPassword(password);
        if (storedHash != inputHash) {
            QMessageBox::warning(this, "Login", "Password verification failed!\nPlease try again");
            return;
        }
        QMessageBox::information(this, "Login", "Login Success!\nWelcome " + username + "!");
        gameId = getLastGameId(username) + 1;
        Wins = QueryLoadData.value("Wins").toInt();
        Loses = QueryLoadData.value("Loses").toInt();
        Draws = QueryLoadData.value("Draws").toInt();
        CurrentUsername = username;
        CurrentPassword = inputHash;
        ui->stackedWidget->setCurrentIndex(MainMenuPage);
    }
    else
    {
        QMessageBox::warning(this, "Login", "Error retrieving user or user not found!\nPlease try again");
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();
}


void MainWindow::on_Quit_clicked()
{
    QApplication::quit();
}


void MainWindow::on_ShowPass_clicked()
{
    if(ui->lineEdit_password->echoMode() == QLineEdit::Normal)
    {
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->lineEdit_password->setEchoMode(QLineEdit::Normal);
    }
}

void MainWindow::on_SignUp_clicked()
{
    ui->SignUp_username->clear();
    ui->SignUp_Password->clear();
    ui->SignUp_ConfirmPass->clear();
    ui->SignUp_Password->setEchoMode(QLineEdit::Password);
    ui->SignUp_ConfirmPass->setEchoMode(QLineEdit::Password);
    ui->stackedWidget->setCurrentIndex(SignUpPage);
}
