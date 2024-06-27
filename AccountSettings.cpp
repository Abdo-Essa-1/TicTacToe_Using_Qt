#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"
#include <QMessageBox>

void MainWindow::deleteUserTable()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery query;
    QString tableName = "user_" + CurrentUsername; // Assuming your tables follow this naming convention
    if (!query.exec("DROP TABLE IF EXISTS " + tableName)) {
        qDebug() << "Error deleting user table";
    } else {
        qDebug() << "User table deleted successfully";
    }

    QSqlDatabase::database().commit();
    DB_Connection.close();
}

void MainWindow::on_UpdateUsername_clicked()
{
    ui->UpdateUser_Text->clear();
    ui->UpdateUser_PassText->clear();
    ui->UpdateUser_PassText->setEchoMode(QLineEdit::Password);
    ui->stackedWidget->setCurrentIndex(UpdateUsernamePage);
}


void MainWindow::on_UpdatePassword_clicked()
{
    ui->UpdatePass_OldPass->clear();
    ui->UpdatePass_NewPass->clear();
    ui->UpdatePass_ConfirmPass->clear();
    ui->UpdatePass_OldPass->setEchoMode(QLineEdit::Password);
    ui->UpdatePass_NewPass->setEchoMode(QLineEdit::Password);
    ui->UpdatePass_ConfirmPass->setEchoMode(QLineEdit::Password);
    ui->stackedWidget->setCurrentIndex(UpdatePasswordPage);
}


void MainWindow::on_DeleteAccount_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox:: question(this, "Delete Account", "Are you sure you want to delete this account?",
                                                              QMessageBox:: Yes | QMessageBox:: No);
    if(reply == QMessageBox:: Yes)
    {
        DB_Connection.open();
        QSqlDatabase::database().transaction();

        QSqlQuery QueryDeleteData(DB_Connection);
        QueryDeleteData.prepare("DELETE FROM PlayersData WHERE Usernames = :Usernames AND Passwords = :Passwords");
        QueryDeleteData.bindValue(":Usernames",CurrentUsername);
        QueryDeleteData.bindValue(":Passwords",CurrentPassword);
        QueryDeleteData.exec();

        QSqlDatabase::database().commit();
        DB_Connection.close();

        QMessageBox::information(this, "Delete Account", "Account Deleted Successfully!");

        deleteUserTable();

        CurrentUsername = "";
        CurrentPassword = "";

        ui->lineEdit_username->clear();
        ui->lineEdit_password->clear();
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);
        ui->stackedWidget->setCurrentIndex(LoginPage);
    }
    else
    {
        return;
    }
}


void MainWindow::on_SettingsBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(MainMenuPage);
}

