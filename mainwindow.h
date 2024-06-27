#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QtCore>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int board[3][3];
    bool checkWin(int player);
    bool checkDraw();

private slots:
    void on_pushButton_Login_clicked();

    void on_Quit_clicked();

    void on_ShowPass_clicked();

    void on_Play_clicked();

    void on_LogOut_clicked();

    void on_QuitGame_clicked();

    void on_TwoPlayers_clicked();

    void on_PM_Back_clicked();

    void on_TP_Back_clicked();

    void TPhandleButtonClick();

    void AIhandleButtonClick();

    void on_TP_Reset_clicked();

    void on_AiPlayer_clicked();

    void on_AI_Back_clicked();

    void on_AI_Reset_clicked();

    void on_SignUp_clicked();

    void on_SignUp_Back_clicked();

    void on_pushButton_SignUp_clicked();

    void on_SignUp_ShowPass_clicked();

    void on_SignUp_ShowConfirmPass_clicked();

    void on_UpdateUsername_clicked();

    void on_UpdatePassword_clicked();

    void on_DeleteAccount_clicked();

    void on_SettingsBack_clicked();

    void on_ManageAccount_clicked();

    void on_UpdateUser_Back_clicked();

    void on_UpdateUser_ShowPass_clicked();

    void on_ConfirmUserUpdate_clicked();

    void on_ConfirmPassUpdate_clicked();

    void on_UpdatePass_Back_clicked();

    void on_UpdatePass_ShowOldPass_clicked();

    void on_UpdatePass_ShowNewPass_clicked();

    void on_UpdatePass_ShowConfirmPass_clicked();

    void createUserTable(const QString &username);

    int getLastGameId(const QString &username);

    void deleteUserTable();

    void addMove(int Gameid, int Move_Number, int Row, int Column, QString Movetype);

    void makeMove(int row, int col, char player);

    bool isGameOver();

    int evaluate();

    int minimax(char player);

    void aiMove();

    void SetResult(QString Status);

    void UpdateStatus();

    void checkresult(int gameid);

    void on_DetailedHistory_clicked();

    void on_HistoryBack_clicked();

    void on_GameHistory_clicked();

    void deleteRemaining();

    void on_Detailed_Back_clicked();

    void on_PreviousGame_clicked();

    void on_NextGame_clicked();

    void on_PreviousMove_clicked();

    void on_NextMove_clicked();

private:
    Ui::MainWindow *ui;

    QPushButton *buttons[9]; // Array to hold pointers to QPushButton
    QPushButton *HisButtons[3][3];

    QString CurrentUsername;
    QString CurrentPassword;
    QString CurrentOpponent;

    QSqlDatabase DB_Connection;

    int gameId;
    int currentgame;
    int moveNumber;
    int Wins;
    int Loses;
    int Draws;
    int nomoves;
    int row;
    int col;
    int currentmove;

    void TPresetGame();
    void AIresetGame();
    void current_player();
    void updateUI();
};
#endif // MAINWINDOW_H
