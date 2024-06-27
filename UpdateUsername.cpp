#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"
#include <QMessageBox>

void MainWindow::on_ConfirmUserUpdate_clicked()
{
    QString NewUsername = ui->UpdateUser_Text->text();
    QString ConfirmPass = ui->UpdateUser_PassText->text();
    if(ConfirmPass != CurrentPassword)
    {
        QMessageBox::warning(this, "Wrong Password", "Password is Wrong, Try again");
        return;
    }

    if(NewUsername == "")
    {
        QMessageBox::warning(this, "Invaild", "Please Fill the new username");
        return;
    }

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryLoadData(DB_Connection);
    QueryLoadData.prepare("SELECT * FROM PlayersData WHERE Usernames = :Usernames");
    QueryLoadData.bindValue(":Usernames",NewUsername);
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

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryUpdateData(DB_Connection);
    QueryUpdateData.prepare("UPDATE PlayersData SET Usernames = :newUsername WHERE Usernames = :oldUsername AND Passwords = :Passwords");
    QueryUpdateData.bindValue(":newUsername",NewUsername);
    QueryUpdateData.bindValue(":oldUsername",CurrentUsername);
    QueryUpdateData.bindValue(":Passwords",CurrentPassword);
    QueryUpdateData.exec();

    QSqlDatabase::database().commit();
    DB_Connection.close();

    QMessageBox::information(this, "Update Username", "Username Updated Successfully!");
    CurrentUsername = NewUsername;
    ui->stackedWidget->setCurrentIndex(ManageAccountPage);
}

void MainWindow::on_UpdateUser_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(ManageAccountPage);
}


void MainWindow::on_UpdateUser_ShowPass_clicked()
{
    if(ui->UpdateUser_PassText->echoMode() == QLineEdit::Normal)
    {
        ui->UpdateUser_PassText->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->UpdateUser_PassText->setEchoMode(QLineEdit::Normal);
    }
}
