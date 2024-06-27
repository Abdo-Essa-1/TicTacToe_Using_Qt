#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"
#include <QMessageBox>

void MainWindow::on_ConfirmPassUpdate_clicked()
{
    QString OldPass = ui->UpdatePass_OldPass->text();
    QString NewPass = ui->UpdatePass_NewPass->text();
    QString ConfirmNewPass = ui->UpdatePass_ConfirmPass->text();

    OldPass = hashPassword(OldPass);

    if(OldPass != CurrentPassword)
    {
        QMessageBox::warning(this, "Wrong Password", "Password is Wrong, Try again");
        return;
    }

    if(NewPass == "" || ConfirmNewPass == "")
    {
        QMessageBox::warning(this, "Invaild", "Please Fill the new Password");
        return;
    }

    if(NewPass != ConfirmNewPass)
    {
        QMessageBox::warning(this, "Invaild", "New Password Not Matched");
        return;
    }

    NewPass = hashPassword(NewPass);

    DB_Connection.open();
    QSqlDatabase::database().transaction();

    QSqlQuery QueryUpdateData(DB_Connection);
    QueryUpdateData.prepare("UPDATE PlayersData SET Passwords = :newPassword WHERE Usernames = :Usernames");
    QueryUpdateData.bindValue(":newPassword",NewPass);
    QueryUpdateData.bindValue(":Usernames",CurrentUsername);
    QueryUpdateData.exec();

    QSqlDatabase::database().commit();
    DB_Connection.close();

    QMessageBox::information(this, "Update Password", "Password Updated Successfully!");
    CurrentPassword = NewPass;
    ui->stackedWidget->setCurrentIndex(ManageAccountPage);
}


void MainWindow::on_UpdatePass_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(ManageAccountPage);
}


void MainWindow::on_UpdatePass_ShowOldPass_clicked()
{
    if(ui->UpdatePass_OldPass->echoMode() == QLineEdit::Normal)
    {
        ui->UpdatePass_OldPass->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->UpdatePass_OldPass->setEchoMode(QLineEdit::Normal);
    }
}


void MainWindow::on_UpdatePass_ShowNewPass_clicked()
{
    if(ui->UpdatePass_NewPass->echoMode() == QLineEdit::Normal)
    {
        ui->UpdatePass_NewPass->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->UpdatePass_NewPass->setEchoMode(QLineEdit::Normal);
    }
}


void MainWindow::on_UpdatePass_ShowConfirmPass_clicked()
{
    if(ui->UpdatePass_ConfirmPass->echoMode() == QLineEdit::Normal)
    {
        ui->UpdatePass_ConfirmPass->setEchoMode(QLineEdit::Password);
    }
    else
    {
        ui->UpdatePass_ConfirmPass->setEchoMode(QLineEdit::Normal);
    }
}
