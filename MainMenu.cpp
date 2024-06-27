#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "PageNumbers.h"

void MainWindow::on_Play_clicked()
{
    ui->stackedWidget->setCurrentIndex(PlayModePage);
}

void MainWindow::on_ManageAccount_clicked()
{
    ui->stackedWidget->setCurrentIndex(ManageAccountPage);
}

void MainWindow::on_LogOut_clicked()
{
    CurrentUsername = "";
    CurrentPassword = "";
    ui->lineEdit_username->clear();
    ui->lineEdit_password->clear();
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    ui->stackedWidget->setCurrentIndex(LoginPage);
}

void MainWindow::on_QuitGame_clicked()
{
    QApplication::quit();
}

void MainWindow::on_GameHistory_clicked()
{
    ui->WinsCount->setText(QString::number(Wins));
    ui->LosesCount->setText(QString::number(Loses));
    ui->DrawsCount->setText(QString::number(Draws));
    ui->stackedWidget->setCurrentIndex(GameHistoryPage);
}
