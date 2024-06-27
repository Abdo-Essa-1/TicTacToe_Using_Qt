/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_14;
    QStackedWidget *stackedWidget;
    QWidget *P1_Login;
    QLabel *Welcome;
    QPushButton *pushButton_Login;
    QLabel *label_30;
    QLabel *label_3;
    QLabel *label_31;
    QPushButton *ShowPass;
    QLabel *label;
    QLineEdit *lineEdit_password;
    QPushButton *SignUp;
    QPushButton *Quit;
    QLineEdit *lineEdit_username;
    QLabel *label_2;
    QWidget *P2_MainMenu;
    QLabel *label_4;
    QLabel *label_29;
    QPushButton *GameHistory;
    QPushButton *ManageAccount;
    QPushButton *Play;
    QPushButton *QuitGame;
    QPushButton *LogOut;
    QWidget *P3_PlayMode;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QPushButton *TwoPlayers;
    QPushButton *AiPlayer;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *PM_Back;
    QWidget *P4_TwoPlayer;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *TP_Reset;
    QPushButton *TP_Back;
    QPushButton *Slot_21;
    QPushButton *Slot_32;
    QPushButton *Slot_31;
    QPushButton *Slot_33;
    QPushButton *Slot_13;
    QPushButton *Slot_12;
    QPushButton *Slot_11;
    QPushButton *Slot_23;
    QPushButton *Slot_22;
    QWidget *P5_AiPlayer;
    QPushButton *AiSlot_21;
    QLabel *label_21;
    QPushButton *AI_Reset;
    QPushButton *AiSlot_32;
    QPushButton *AiSlot_31;
    QPushButton *AiSlot_33;
    QPushButton *AiSlot_13;
    QPushButton *AI_Back;
    QLabel *label_22;
    QPushButton *AiSlot_12;
    QLabel *label_23;
    QPushButton *AiSlot_11;
    QPushButton *AiSlot_23;
    QPushButton *AiSlot_22;
    QWidget *P6_SignUp;
    QPushButton *pushButton_SignUp;
    QPushButton *SignUp_Back;
    QLabel *label_32;
    QLineEdit *SignUp_username;
    QLineEdit *SignUp_Password;
    QLabel *label_33;
    QLabel *label_34;
    QPushButton *SignUp_ShowPass;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QPushButton *SignUp_ShowConfirmPass;
    QLineEdit *SignUp_ConfirmPass;
    QLabel *label_6;
    QLabel *label_38;
    QWidget *P7_AccountSettings;
    QPushButton *UpdateUsername;
    QPushButton *UpdatePassword;
    QPushButton *DeleteAccount;
    QPushButton *SettingsBack;
    QLabel *label_7;
    QLabel *label_39;
    QWidget *P8_UpdateUsername;
    QPushButton *ConfirmUserUpdate;
    QPushButton *UpdateUser_Back;
    QLabel *label_46;
    QLabel *label_47;
    QLineEdit *UpdateUser_Text;
    QLineEdit *UpdateUser_PassText;
    QLabel *label_48;
    QPushButton *UpdateUser_ShowPass;
    QLabel *label_49;
    QLabel *label_12;
    QLabel *label_50;
    QWidget *P9_UpdatePassword;
    QPushButton *ConfirmPassUpdate;
    QPushButton *UpdatePass_Back;
    QLabel *label_40;
    QLineEdit *UpdatePass_NewPass;
    QLabel *label_41;
    QLabel *label_42;
    QPushButton *UpdatePass_ShowNewPass;
    QLabel *label_43;
    QPushButton *UpdatePass_ShowOldPass;
    QLineEdit *UpdatePass_OldPass;
    QLineEdit *UpdatePass_ConfirmPass;
    QLabel *label_44;
    QPushButton *UpdatePass_ShowConfirmPass;
    QLabel *label_8;
    QLabel *label_45;
    QLabel *label_16;
    QWidget *Q10_GameHistory;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *DetailedHistory;
    QPushButton *HistoryBack;
    QLabel *WinsCount;
    QLabel *label_11;
    QLabel *label_9;
    QLabel *label_17;
    QLabel *LosesCount;
    QLabel *DrawsCount;
    QWidget *Q11_DetailedHistory;
    QPushButton *Detailed_Back;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_18;
    QLabel *GameNumber;
    QLabel *GameStatus;
    QLabel *GameOpponent;
    QPushButton *His_31;
    QPushButton *His_11;
    QPushButton *His_32;
    QPushButton *His_22;
    QPushButton *His_33;
    QPushButton *His_13;
    QPushButton *His_23;
    QPushButton *His_21;
    QPushButton *His_12;
    QPushButton *PreviousMove;
    QPushButton *NextMove;
    QPushButton *PreviousGame;
    QPushButton *NextGame;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1044, 700);
        MainWindow->setMinimumSize(QSize(1044, 700));
        MainWindow->setMaximumSize(QSize(1044, 700));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_14 = new QVBoxLayout(centralwidget);
        verticalLayout_14->setObjectName("verticalLayout_14");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/Background.png);"));
        P1_Login = new QWidget();
        P1_Login->setObjectName("P1_Login");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(P1_Login->sizePolicy().hasHeightForWidth());
        P1_Login->setSizePolicy(sizePolicy);
        P1_Login->setStyleSheet(QString::fromUtf8(""));
        Welcome = new QLabel(P1_Login);
        Welcome->setObjectName("Welcome");
        Welcome->setGeometry(QRect(240, 120, 551, 131));
        sizePolicy.setHeightForWidth(Welcome->sizePolicy().hasHeightForWidth());
        Welcome->setSizePolicy(sizePolicy);
        Welcome->setMinimumSize(QSize(0, 0));
        Welcome->setMaximumSize(QSize(16777215, 16777215));
        Welcome->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/welcome.png);"));
        pushButton_Login = new QPushButton(P1_Login);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(390, 460, 231, 101));
        sizePolicy.setHeightForWidth(pushButton_Login->sizePolicy().hasHeightForWidth());
        pushButton_Login->setSizePolicy(sizePolicy);
        pushButton_Login->setMinimumSize(QSize(0, 0));
        pushButton_Login->setMaximumSize(QSize(16777215, 16777215));
        pushButton_Login->setSizeIncrement(QSize(0, 0));
        pushButton_Login->setBaseSize(QSize(0, 0));
        pushButton_Login->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/Login.png);"));
        label_30 = new QLabel(P1_Login);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(10, 0, 211, 151));
        label_30->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        label_3 = new QLabel(P1_Login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 320, 721, 41));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        label_31 = new QLabel(P1_Login);
        label_31->setObjectName("label_31");
        label_31->setGeometry(QRect(200, 420, 721, 41));
        label_31->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        ShowPass = new QPushButton(P1_Login);
        ShowPass->setObjectName("ShowPass");
        ShowPass->setGeometry(QRect(910, 390, 81, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ShowPass->sizePolicy().hasHeightForWidth());
        ShowPass->setSizePolicy(sizePolicy1);
        ShowPass->setMaximumSize(QSize(16777215, 50));
        ShowPass->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/Show.png);\n"
"background-color: transparent;"));
        label = new QLabel(P1_Login);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 380, 141, 81));
        label->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/password.png);"));
        lineEdit_password = new QLineEdit(P1_Login);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(210, 400, 701, 40));
        sizePolicy1.setHeightForWidth(lineEdit_password->sizePolicy().hasHeightForWidth());
        lineEdit_password->setSizePolicy(sizePolicy1);
        lineEdit_password->setMaximumSize(QSize(16777215, 40));
        lineEdit_password->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
"\n"
"\n"
""));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        SignUp = new QPushButton(P1_Login);
        SignUp->setObjectName("SignUp");
        SignUp->setGeometry(QRect(100, 560, 241, 141));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(SignUp->sizePolicy().hasHeightForWidth());
        SignUp->setSizePolicy(sizePolicy2);
        SignUp->setMaximumSize(QSize(16777215, 16777215));
        SignUp->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/SignUp.png);\n"
"background-color: transparent;"));
        Quit = new QPushButton(P1_Login);
        Quit->setObjectName("Quit");
        Quit->setGeometry(QRect(660, 560, 241, 131));
        sizePolicy2.setHeightForWidth(Quit->sizePolicy().hasHeightForWidth());
        Quit->setSizePolicy(sizePolicy2);
        Quit->setMaximumSize(QSize(16777215, 16777215));
        Quit->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/Quit.png);\n"
"background-color: transparent;"));
        lineEdit_username = new QLineEdit(P1_Login);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(210, 300, 701, 40));
        sizePolicy1.setHeightForWidth(lineEdit_username->sizePolicy().hasHeightForWidth());
        lineEdit_username->setSizePolicy(sizePolicy1);
        lineEdit_username->setMinimumSize(QSize(0, 0));
        lineEdit_username->setMaximumSize(QSize(16777215, 40));
        lineEdit_username->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
""));
        label_2 = new QLabel(P1_Login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 290, 151, 61));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/Username.png);"));
        stackedWidget->addWidget(P1_Login);
        P2_MainMenu = new QWidget();
        P2_MainMenu->setObjectName("P2_MainMenu");
        label_4 = new QLabel(P2_MainMenu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 120, 621, 101));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMaximumSize(QSize(1241, 16777215));
        label_4->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/pag2/ourservices.png);"));
        label_29 = new QLabel(P2_MainMenu);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(10, 0, 211, 151));
        label_29->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        GameHistory = new QPushButton(P2_MainMenu);
        GameHistory->setObjectName("GameHistory");
        GameHistory->setGeometry(QRect(260, 370, 511, 91));
        sizePolicy.setHeightForWidth(GameHistory->sizePolicy().hasHeightForWidth());
        GameHistory->setSizePolicy(sizePolicy);
        GameHistory->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/pag2/Game-History.png);\n"
"border: none;"));
        ManageAccount = new QPushButton(P2_MainMenu);
        ManageAccount->setObjectName("ManageAccount");
        ManageAccount->setGeometry(QRect(270, 470, 501, 91));
        sizePolicy.setHeightForWidth(ManageAccount->sizePolicy().hasHeightForWidth());
        ManageAccount->setSizePolicy(sizePolicy);
        ManageAccount->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/pag2/Manage-Account.png);\n"
"border: none;"));
        Play = new QPushButton(P2_MainMenu);
        Play->setObjectName("Play");
        Play->setGeometry(QRect(260, 260, 511, 101));
        sizePolicy.setHeightForWidth(Play->sizePolicy().hasHeightForWidth());
        Play->setSizePolicy(sizePolicy);
        Play->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/pag2/play.png);\n"
"border: none;"));
        QuitGame = new QPushButton(P2_MainMenu);
        QuitGame->setObjectName("QuitGame");
        QuitGame->setGeometry(QRect(860, 590, 191, 111));
        sizePolicy.setHeightForWidth(QuitGame->sizePolicy().hasHeightForWidth());
        QuitGame->setSizePolicy(sizePolicy);
        QuitGame->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/pag2/quit.png);\n"
"border: none;"));
        LogOut = new QPushButton(P2_MainMenu);
        LogOut->setObjectName("LogOut");
        LogOut->setGeometry(QRect(10, 600, 201, 91));
        sizePolicy.setHeightForWidth(LogOut->sizePolicy().hasHeightForWidth());
        LogOut->setSizePolicy(sizePolicy);
        LogOut->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/pag2/logout.png);\n"
"border: none;"));
        stackedWidget->addWidget(P2_MainMenu);
        P3_PlayMode = new QWidget();
        P3_PlayMode->setObjectName("P3_PlayMode");
        verticalLayout_5 = new QVBoxLayout(P3_PlayMode);
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_22->setSizeConstraint(QLayout::SetMinAndMaxSize);
        label_10 = new QLabel(P3_PlayMode);
        label_10->setObjectName("label_10");
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMaximumSize(QSize(16777215, 50));
        label_10->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));

        horizontalLayout_22->addWidget(label_10);

        horizontalSpacer_4 = new QSpacerItem(800, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_22);

        label_5 = new QLabel(P3_PlayMode);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMaximumSize(QSize(16777215, 150));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/play mode/playmode.png);"));

        verticalLayout_5->addWidget(label_5);

        TwoPlayers = new QPushButton(P3_PlayMode);
        TwoPlayers->setObjectName("TwoPlayers");
        sizePolicy.setHeightForWidth(TwoPlayers->sizePolicy().hasHeightForWidth());
        TwoPlayers->setSizePolicy(sizePolicy);
        TwoPlayers->setMaximumSize(QSize(16777215, 100));
        TwoPlayers->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/play mode/two-player.png);\n"
"border: none;"));

        verticalLayout_5->addWidget(TwoPlayers);

        AiPlayer = new QPushButton(P3_PlayMode);
        AiPlayer->setObjectName("AiPlayer");
        sizePolicy.setHeightForWidth(AiPlayer->sizePolicy().hasHeightForWidth());
        AiPlayer->setSizePolicy(sizePolicy);
        AiPlayer->setMaximumSize(QSize(16777215, 100));
        AiPlayer->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/play mode/ai.png);\n"
"border: none;"));

        verticalLayout_5->addWidget(AiPlayer);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        horizontalSpacer_5 = new QSpacerItem(900, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_5);

        PM_Back = new QPushButton(P3_PlayMode);
        PM_Back->setObjectName("PM_Back");
        sizePolicy.setHeightForWidth(PM_Back->sizePolicy().hasHeightForWidth());
        PM_Back->setSizePolicy(sizePolicy);
        PM_Back->setMaximumSize(QSize(16777215, 60));
        PM_Back->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/play mode/back.png);"));

        horizontalLayout_23->addWidget(PM_Back);


        verticalLayout_5->addLayout(horizontalLayout_23);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 2);
        verticalLayout_5->setStretch(2, 4);
        verticalLayout_5->setStretch(3, 4);
        verticalLayout_5->setStretch(4, 1);
        stackedWidget->addWidget(P3_PlayMode);
        P4_TwoPlayer = new QWidget();
        P4_TwoPlayer->setObjectName("P4_TwoPlayer");
        P4_TwoPlayer->setStyleSheet(QString::fromUtf8(""));
        label_18 = new QLabel(P4_TwoPlayer);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(160, 150, 711, 511));
        label_18->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Game itsself/Borders.png);"));
        label_19 = new QLabel(P4_TwoPlayer);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(230, 20, 581, 151));
        label_19->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Game itsself/Enjoy.png);"));
        label_20 = new QLabel(P4_TwoPlayer);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(-10, -10, 211, 151));
        label_20->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        TP_Reset = new QPushButton(P4_TwoPlayer);
        TP_Reset->setObjectName("TP_Reset");
        TP_Reset->setGeometry(QRect(840, 600, 171, 81));
        sizePolicy.setHeightForWidth(TP_Reset->sizePolicy().hasHeightForWidth());
        TP_Reset->setSizePolicy(sizePolicy);
        TP_Reset->setMinimumSize(QSize(0, 40));
        TP_Reset->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game itsself/Reset.png);"));
        TP_Back = new QPushButton(P4_TwoPlayer);
        TP_Back->setObjectName("TP_Back");
        TP_Back->setGeometry(QRect(0, 610, 171, 71));
        sizePolicy.setHeightForWidth(TP_Back->sizePolicy().hasHeightForWidth());
        TP_Back->setSizePolicy(sizePolicy);
        TP_Back->setMinimumSize(QSize(0, 40));
        TP_Back->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Game itsself/Back.png);\n"
"border: none;"));
        Slot_21 = new QPushButton(P4_TwoPlayer);
        Slot_21->setObjectName("Slot_21");
        Slot_21->setGeometry(QRect(202, 343, 141, 131));
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Slot_21->sizePolicy().hasHeightForWidth());
        Slot_21->setSizePolicy(sizePolicy3);
        Slot_21->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        Slot_32 = new QPushButton(P4_TwoPlayer);
        Slot_32->setObjectName("Slot_32");
        Slot_32->setGeometry(QRect(373, 495, 261, 111));
        sizePolicy3.setHeightForWidth(Slot_32->sizePolicy().hasHeightForWidth());
        Slot_32->setSizePolicy(sizePolicy3);
        Slot_32->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        Slot_31 = new QPushButton(P4_TwoPlayer);
        Slot_31->setObjectName("Slot_31");
        Slot_31->setGeometry(QRect(191, 495, 161, 111));
        sizePolicy3.setHeightForWidth(Slot_31->sizePolicy().hasHeightForWidth());
        Slot_31->setSizePolicy(sizePolicy3);
        Slot_31->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        Slot_33 = new QPushButton(P4_TwoPlayer);
        Slot_33->setObjectName("Slot_33");
        Slot_33->setGeometry(QRect(654, 495, 191, 111));
        sizePolicy3.setHeightForWidth(Slot_33->sizePolicy().hasHeightForWidth());
        Slot_33->setSizePolicy(sizePolicy3);
        Slot_33->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        Slot_13 = new QPushButton(P4_TwoPlayer);
        Slot_13->setObjectName("Slot_13");
        Slot_13->setGeometry(QRect(670, 200, 171, 121));
        sizePolicy3.setHeightForWidth(Slot_13->sizePolicy().hasHeightForWidth());
        Slot_13->setSizePolicy(sizePolicy3);
        Slot_13->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        Slot_12 = new QPushButton(P4_TwoPlayer);
        Slot_12->setObjectName("Slot_12");
        Slot_12->setGeometry(QRect(430, 200, 161, 121));
        sizePolicy3.setHeightForWidth(Slot_12->sizePolicy().hasHeightForWidth());
        Slot_12->setSizePolicy(sizePolicy3);
        Slot_12->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        Slot_11 = new QPushButton(P4_TwoPlayer);
        Slot_11->setObjectName("Slot_11");
        Slot_11->setGeometry(QRect(190, 220, 151, 101));
        sizePolicy3.setHeightForWidth(Slot_11->sizePolicy().hasHeightForWidth());
        Slot_11->setSizePolicy(sizePolicy3);
        Slot_11->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        Slot_23 = new QPushButton(P4_TwoPlayer);
        Slot_23->setObjectName("Slot_23");
        Slot_23->setGeometry(QRect(654, 343, 181, 121));
        sizePolicy3.setHeightForWidth(Slot_23->sizePolicy().hasHeightForWidth());
        Slot_23->setSizePolicy(sizePolicy3);
        Slot_23->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        Slot_22 = new QPushButton(P4_TwoPlayer);
        Slot_22->setObjectName("Slot_22");
        Slot_22->setGeometry(QRect(413, 343, 181, 131));
        sizePolicy3.setHeightForWidth(Slot_22->sizePolicy().hasHeightForWidth());
        Slot_22->setSizePolicy(sizePolicy3);
        Slot_22->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(P4_TwoPlayer);
        TP_Reset->raise();
        TP_Back->raise();
        label_19->raise();
        label_20->raise();
        label_18->raise();
        Slot_21->raise();
        Slot_32->raise();
        Slot_31->raise();
        Slot_33->raise();
        Slot_13->raise();
        Slot_12->raise();
        Slot_11->raise();
        Slot_23->raise();
        Slot_22->raise();
        P5_AiPlayer = new QWidget();
        P5_AiPlayer->setObjectName("P5_AiPlayer");
        P5_AiPlayer->setStyleSheet(QString::fromUtf8(""));
        AiSlot_21 = new QPushButton(P5_AiPlayer);
        AiSlot_21->setObjectName("AiSlot_21");
        AiSlot_21->setGeometry(QRect(209, 340, 141, 131));
        sizePolicy3.setHeightForWidth(AiSlot_21->sizePolicy().hasHeightForWidth());
        AiSlot_21->setSizePolicy(sizePolicy3);
        AiSlot_21->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        label_21 = new QLabel(P5_AiPlayer);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(237, 17, 581, 151));
        label_21->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Game itsself/Enjoy.png);"));
        AI_Reset = new QPushButton(P5_AiPlayer);
        AI_Reset->setObjectName("AI_Reset");
        AI_Reset->setGeometry(QRect(847, 597, 171, 81));
        sizePolicy.setHeightForWidth(AI_Reset->sizePolicy().hasHeightForWidth());
        AI_Reset->setSizePolicy(sizePolicy);
        AI_Reset->setMinimumSize(QSize(0, 40));
        AI_Reset->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game itsself/Reset.png);"));
        AiSlot_32 = new QPushButton(P5_AiPlayer);
        AiSlot_32->setObjectName("AiSlot_32");
        AiSlot_32->setGeometry(QRect(380, 492, 261, 111));
        sizePolicy3.setHeightForWidth(AiSlot_32->sizePolicy().hasHeightForWidth());
        AiSlot_32->setSizePolicy(sizePolicy3);
        AiSlot_32->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        AiSlot_31 = new QPushButton(P5_AiPlayer);
        AiSlot_31->setObjectName("AiSlot_31");
        AiSlot_31->setGeometry(QRect(198, 492, 161, 111));
        sizePolicy3.setHeightForWidth(AiSlot_31->sizePolicy().hasHeightForWidth());
        AiSlot_31->setSizePolicy(sizePolicy3);
        AiSlot_31->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        AiSlot_33 = new QPushButton(P5_AiPlayer);
        AiSlot_33->setObjectName("AiSlot_33");
        AiSlot_33->setGeometry(QRect(661, 492, 191, 111));
        sizePolicy3.setHeightForWidth(AiSlot_33->sizePolicy().hasHeightForWidth());
        AiSlot_33->setSizePolicy(sizePolicy3);
        AiSlot_33->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        AiSlot_13 = new QPushButton(P5_AiPlayer);
        AiSlot_13->setObjectName("AiSlot_13");
        AiSlot_13->setGeometry(QRect(677, 197, 171, 121));
        sizePolicy3.setHeightForWidth(AiSlot_13->sizePolicy().hasHeightForWidth());
        AiSlot_13->setSizePolicy(sizePolicy3);
        AiSlot_13->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        AI_Back = new QPushButton(P5_AiPlayer);
        AI_Back->setObjectName("AI_Back");
        AI_Back->setGeometry(QRect(7, 607, 171, 71));
        sizePolicy.setHeightForWidth(AI_Back->sizePolicy().hasHeightForWidth());
        AI_Back->setSizePolicy(sizePolicy);
        AI_Back->setMinimumSize(QSize(0, 40));
        AI_Back->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Game itsself/Back.png);\n"
"border: none;"));
        label_22 = new QLabel(P5_AiPlayer);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(-3, -13, 211, 151));
        label_22->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        AiSlot_12 = new QPushButton(P5_AiPlayer);
        AiSlot_12->setObjectName("AiSlot_12");
        AiSlot_12->setGeometry(QRect(397, 197, 231, 121));
        sizePolicy3.setHeightForWidth(AiSlot_12->sizePolicy().hasHeightForWidth());
        AiSlot_12->setSizePolicy(sizePolicy3);
        AiSlot_12->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        label_23 = new QLabel(P5_AiPlayer);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(167, 147, 711, 511));
        label_23->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Game itsself/Borders.png);"));
        AiSlot_11 = new QPushButton(P5_AiPlayer);
        AiSlot_11->setObjectName("AiSlot_11");
        AiSlot_11->setGeometry(QRect(197, 217, 151, 101));
        sizePolicy3.setHeightForWidth(AiSlot_11->sizePolicy().hasHeightForWidth());
        AiSlot_11->setSizePolicy(sizePolicy3);
        AiSlot_11->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        AiSlot_23 = new QPushButton(P5_AiPlayer);
        AiSlot_23->setObjectName("AiSlot_23");
        AiSlot_23->setGeometry(QRect(661, 340, 181, 121));
        sizePolicy3.setHeightForWidth(AiSlot_23->sizePolicy().hasHeightForWidth());
        AiSlot_23->setSizePolicy(sizePolicy3);
        AiSlot_23->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        AiSlot_22 = new QPushButton(P5_AiPlayer);
        AiSlot_22->setObjectName("AiSlot_22");
        AiSlot_22->setGeometry(QRect(420, 340, 181, 131));
        sizePolicy3.setHeightForWidth(AiSlot_22->sizePolicy().hasHeightForWidth());
        AiSlot_22->setSizePolicy(sizePolicy3);
        AiSlot_22->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(P5_AiPlayer);
        label_21->raise();
        AI_Reset->raise();
        AI_Back->raise();
        label_22->raise();
        label_23->raise();
        AiSlot_31->raise();
        AiSlot_11->raise();
        AiSlot_13->raise();
        AiSlot_23->raise();
        AiSlot_12->raise();
        AiSlot_33->raise();
        AiSlot_21->raise();
        AiSlot_22->raise();
        AiSlot_32->raise();
        P6_SignUp = new QWidget();
        P6_SignUp->setObjectName("P6_SignUp");
        pushButton_SignUp = new QPushButton(P6_SignUp);
        pushButton_SignUp->setObjectName("pushButton_SignUp");
        pushButton_SignUp->setGeometry(QRect(110, 570, 211, 111));
        sizePolicy.setHeightForWidth(pushButton_SignUp->sizePolicy().hasHeightForWidth());
        pushButton_SignUp->setSizePolicy(sizePolicy);
        pushButton_SignUp->setMinimumSize(QSize(0, 0));
        pushButton_SignUp->setMaximumSize(QSize(16777215, 16777215));
        pushButton_SignUp->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/SignUp.png);\n"
"border: none;"));
        SignUp_Back = new QPushButton(P6_SignUp);
        SignUp_Back->setObjectName("SignUp_Back");
        SignUp_Back->setGeometry(QRect(710, 550, 201, 101));
        sizePolicy.setHeightForWidth(SignUp_Back->sizePolicy().hasHeightForWidth());
        SignUp_Back->setSizePolicy(sizePolicy);
        SignUp_Back->setMinimumSize(QSize(0, 0));
        SignUp_Back->setMaximumSize(QSize(16777215, 16777215));
        SignUp_Back->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/play mode/back.png);\n"
"border: none;"));
        label_32 = new QLabel(P6_SignUp);
        label_32->setObjectName("label_32");
        label_32->setGeometry(QRect(50, 340, 141, 81));
        label_32->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/password.png);"));
        SignUp_username = new QLineEdit(P6_SignUp);
        SignUp_username->setObjectName("SignUp_username");
        SignUp_username->setGeometry(QRect(210, 260, 701, 40));
        sizePolicy1.setHeightForWidth(SignUp_username->sizePolicy().hasHeightForWidth());
        SignUp_username->setSizePolicy(sizePolicy1);
        SignUp_username->setMinimumSize(QSize(0, 0));
        SignUp_username->setMaximumSize(QSize(16777215, 40));
        SignUp_username->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
""));
        SignUp_Password = new QLineEdit(P6_SignUp);
        SignUp_Password->setObjectName("SignUp_Password");
        SignUp_Password->setGeometry(QRect(210, 360, 701, 40));
        sizePolicy1.setHeightForWidth(SignUp_Password->sizePolicy().hasHeightForWidth());
        SignUp_Password->setSizePolicy(sizePolicy1);
        SignUp_Password->setMaximumSize(QSize(16777215, 40));
        SignUp_Password->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
"\n"
"\n"
""));
        SignUp_Password->setEchoMode(QLineEdit::Password);
        label_33 = new QLabel(P6_SignUp);
        label_33->setObjectName("label_33");
        label_33->setGeometry(QRect(200, 280, 721, 41));
        label_33->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        label_34 = new QLabel(P6_SignUp);
        label_34->setObjectName("label_34");
        label_34->setGeometry(QRect(200, 380, 721, 41));
        label_34->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        SignUp_ShowPass = new QPushButton(P6_SignUp);
        SignUp_ShowPass->setObjectName("SignUp_ShowPass");
        SignUp_ShowPass->setGeometry(QRect(910, 350, 81, 50));
        sizePolicy1.setHeightForWidth(SignUp_ShowPass->sizePolicy().hasHeightForWidth());
        SignUp_ShowPass->setSizePolicy(sizePolicy1);
        SignUp_ShowPass->setMaximumSize(QSize(16777215, 50));
        SignUp_ShowPass->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/Show.png);\n"
"background-color: transparent;"));
        label_35 = new QLabel(P6_SignUp);
        label_35->setObjectName("label_35");
        label_35->setGeometry(QRect(40, 250, 151, 61));
        label_35->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/Username.png);"));
        label_36 = new QLabel(P6_SignUp);
        label_36->setObjectName("label_36");
        label_36->setGeometry(QRect(60, 430, 141, 111));
        label_36->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/New User/confirm-pass.png);"));
        label_37 = new QLabel(P6_SignUp);
        label_37->setObjectName("label_37");
        label_37->setGeometry(QRect(200, 480, 721, 41));
        label_37->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        SignUp_ShowConfirmPass = new QPushButton(P6_SignUp);
        SignUp_ShowConfirmPass->setObjectName("SignUp_ShowConfirmPass");
        SignUp_ShowConfirmPass->setGeometry(QRect(910, 450, 81, 50));
        sizePolicy1.setHeightForWidth(SignUp_ShowConfirmPass->sizePolicy().hasHeightForWidth());
        SignUp_ShowConfirmPass->setSizePolicy(sizePolicy1);
        SignUp_ShowConfirmPass->setMaximumSize(QSize(16777215, 50));
        SignUp_ShowConfirmPass->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/Show.png);\n"
"background-color: transparent;"));
        SignUp_ConfirmPass = new QLineEdit(P6_SignUp);
        SignUp_ConfirmPass->setObjectName("SignUp_ConfirmPass");
        SignUp_ConfirmPass->setGeometry(QRect(210, 460, 701, 40));
        sizePolicy1.setHeightForWidth(SignUp_ConfirmPass->sizePolicy().hasHeightForWidth());
        SignUp_ConfirmPass->setSizePolicy(sizePolicy1);
        SignUp_ConfirmPass->setMaximumSize(QSize(16777215, 40));
        SignUp_ConfirmPass->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
"\n"
"\n"
""));
        SignUp_ConfirmPass->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(P6_SignUp);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(240, 90, 571, 131));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/New User/newuserpng.png);"));
        label_38 = new QLabel(P6_SignUp);
        label_38->setObjectName("label_38");
        label_38->setGeometry(QRect(10, 0, 211, 151));
        label_38->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        stackedWidget->addWidget(P6_SignUp);
        P7_AccountSettings = new QWidget();
        P7_AccountSettings->setObjectName("P7_AccountSettings");
        UpdateUsername = new QPushButton(P7_AccountSettings);
        UpdateUsername->setObjectName("UpdateUsername");
        UpdateUsername->setGeometry(QRect(160, 250, 721, 111));
        UpdateUsername->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/User management/updateusername.png);"));
        UpdatePassword = new QPushButton(P7_AccountSettings);
        UpdatePassword->setObjectName("UpdatePassword");
        UpdatePassword->setGeometry(QRect(160, 360, 701, 111));
        UpdatePassword->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/User management/update-password.png);\n"
"border: none;"));
        DeleteAccount = new QPushButton(P7_AccountSettings);
        DeleteAccount->setObjectName("DeleteAccount");
        DeleteAccount->setGeometry(QRect(180, 460, 671, 121));
        DeleteAccount->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/User management/delete-account.png);"));
        SettingsBack = new QPushButton(P7_AccountSettings);
        SettingsBack->setObjectName("SettingsBack");
        SettingsBack->setGeometry(QRect(390, 580, 281, 131));
        SettingsBack->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game itsself/Back.png);"));
        label_7 = new QLabel(P7_AccountSettings);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(80, 100, 871, 151));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/User management/usermanegement.png);"));
        label_39 = new QLabel(P7_AccountSettings);
        label_39->setObjectName("label_39");
        label_39->setGeometry(QRect(10, 0, 211, 151));
        label_39->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        stackedWidget->addWidget(P7_AccountSettings);
        P8_UpdateUsername = new QWidget();
        P8_UpdateUsername->setObjectName("P8_UpdateUsername");
        ConfirmUserUpdate = new QPushButton(P8_UpdateUsername);
        ConfirmUserUpdate->setObjectName("ConfirmUserUpdate");
        ConfirmUserUpdate->setGeometry(QRect(380, 490, 271, 101));
        ConfirmUserUpdate->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/username/update.png);"));
        UpdateUser_Back = new QPushButton(P8_UpdateUsername);
        UpdateUser_Back->setObjectName("UpdateUser_Back");
        UpdateUser_Back->setGeometry(QRect(430, 600, 191, 101));
        UpdateUser_Back->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game itsself/Back.png);"));
        label_46 = new QLabel(P8_UpdateUsername);
        label_46->setObjectName("label_46");
        label_46->setGeometry(QRect(10, 270, 221, 81));
        label_46->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/username/new-username.png);"));
        label_47 = new QLabel(P8_UpdateUsername);
        label_47->setObjectName("label_47");
        label_47->setGeometry(QRect(220, 410, 721, 41));
        label_47->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        UpdateUser_Text = new QLineEdit(P8_UpdateUsername);
        UpdateUser_Text->setObjectName("UpdateUser_Text");
        UpdateUser_Text->setGeometry(QRect(230, 290, 701, 40));
        sizePolicy1.setHeightForWidth(UpdateUser_Text->sizePolicy().hasHeightForWidth());
        UpdateUser_Text->setSizePolicy(sizePolicy1);
        UpdateUser_Text->setMaximumSize(QSize(16777215, 40));
        UpdateUser_Text->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
"\n"
"\n"
""));
        UpdateUser_Text->setEchoMode(QLineEdit::Normal);
        UpdateUser_PassText = new QLineEdit(P8_UpdateUsername);
        UpdateUser_PassText->setObjectName("UpdateUser_PassText");
        UpdateUser_PassText->setGeometry(QRect(230, 390, 701, 40));
        sizePolicy1.setHeightForWidth(UpdateUser_PassText->sizePolicy().hasHeightForWidth());
        UpdateUser_PassText->setSizePolicy(sizePolicy1);
        UpdateUser_PassText->setMaximumSize(QSize(16777215, 40));
        UpdateUser_PassText->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
"\n"
"\n"
""));
        UpdateUser_PassText->setEchoMode(QLineEdit::Password);
        label_48 = new QLabel(P8_UpdateUsername);
        label_48->setObjectName("label_48");
        label_48->setGeometry(QRect(220, 310, 721, 41));
        label_48->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        UpdateUser_ShowPass = new QPushButton(P8_UpdateUsername);
        UpdateUser_ShowPass->setObjectName("UpdateUser_ShowPass");
        UpdateUser_ShowPass->setGeometry(QRect(930, 380, 81, 50));
        sizePolicy1.setHeightForWidth(UpdateUser_ShowPass->sizePolicy().hasHeightForWidth());
        UpdateUser_ShowPass->setSizePolicy(sizePolicy1);
        UpdateUser_ShowPass->setMaximumSize(QSize(16777215, 50));
        UpdateUser_ShowPass->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/Show.png);\n"
"background-color: transparent;"));
        label_49 = new QLabel(P8_UpdateUsername);
        label_49->setObjectName("label_49");
        label_49->setGeometry(QRect(20, 360, 221, 111));
        label_49->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/username/password(confirmation).png);"));
        label_12 = new QLabel(P8_UpdateUsername);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(230, 80, 551, 161));
        label_12->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/username/username.png);"));
        label_50 = new QLabel(P8_UpdateUsername);
        label_50->setObjectName("label_50");
        label_50->setGeometry(QRect(0, 0, 211, 151));
        label_50->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        stackedWidget->addWidget(P8_UpdateUsername);
        P9_UpdatePassword = new QWidget();
        P9_UpdatePassword->setObjectName("P9_UpdatePassword");
        ConfirmPassUpdate = new QPushButton(P9_UpdatePassword);
        ConfirmPassUpdate->setObjectName("ConfirmPassUpdate");
        ConfirmPassUpdate->setGeometry(QRect(330, 480, 321, 111));
        ConfirmPassUpdate->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/password/update.png);"));
        UpdatePass_Back = new QPushButton(P9_UpdatePassword);
        UpdatePass_Back->setObjectName("UpdatePass_Back");
        UpdatePass_Back->setGeometry(QRect(420, 580, 181, 91));
        UpdatePass_Back->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game itsself/Back.png);"));
        label_40 = new QLabel(P9_UpdatePassword);
        label_40->setObjectName("label_40");
        label_40->setGeometry(QRect(20, 180, 221, 81));
        label_40->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/password.png);\n"
"image: url(:/rec/img/password/old-pass.png);"));
        UpdatePass_NewPass = new QLineEdit(P9_UpdatePassword);
        UpdatePass_NewPass->setObjectName("UpdatePass_NewPass");
        UpdatePass_NewPass->setGeometry(QRect(230, 310, 701, 40));
        sizePolicy1.setHeightForWidth(UpdatePass_NewPass->sizePolicy().hasHeightForWidth());
        UpdatePass_NewPass->setSizePolicy(sizePolicy1);
        UpdatePass_NewPass->setMaximumSize(QSize(16777215, 40));
        UpdatePass_NewPass->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
"\n"
"\n"
""));
        UpdatePass_NewPass->setEchoMode(QLineEdit::Password);
        label_41 = new QLabel(P9_UpdatePassword);
        label_41->setObjectName("label_41");
        label_41->setGeometry(QRect(220, 230, 721, 41));
        label_41->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        label_42 = new QLabel(P9_UpdatePassword);
        label_42->setObjectName("label_42");
        label_42->setGeometry(QRect(30, 290, 201, 71));
        label_42->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/password/new-pass.png);"));
        UpdatePass_ShowNewPass = new QPushButton(P9_UpdatePassword);
        UpdatePass_ShowNewPass->setObjectName("UpdatePass_ShowNewPass");
        UpdatePass_ShowNewPass->setGeometry(QRect(930, 300, 81, 50));
        sizePolicy1.setHeightForWidth(UpdatePass_ShowNewPass->sizePolicy().hasHeightForWidth());
        UpdatePass_ShowNewPass->setSizePolicy(sizePolicy1);
        UpdatePass_ShowNewPass->setMaximumSize(QSize(16777215, 50));
        UpdatePass_ShowNewPass->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/Show.png);\n"
"background-color: transparent;"));
        label_43 = new QLabel(P9_UpdatePassword);
        label_43->setObjectName("label_43");
        label_43->setGeometry(QRect(220, 330, 721, 41));
        label_43->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        UpdatePass_ShowOldPass = new QPushButton(P9_UpdatePassword);
        UpdatePass_ShowOldPass->setObjectName("UpdatePass_ShowOldPass");
        UpdatePass_ShowOldPass->setGeometry(QRect(930, 200, 81, 50));
        sizePolicy1.setHeightForWidth(UpdatePass_ShowOldPass->sizePolicy().hasHeightForWidth());
        UpdatePass_ShowOldPass->setSizePolicy(sizePolicy1);
        UpdatePass_ShowOldPass->setMaximumSize(QSize(16777215, 50));
        UpdatePass_ShowOldPass->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/Show.png);\n"
"background-color: transparent;"));
        UpdatePass_OldPass = new QLineEdit(P9_UpdatePassword);
        UpdatePass_OldPass->setObjectName("UpdatePass_OldPass");
        UpdatePass_OldPass->setGeometry(QRect(230, 210, 701, 40));
        sizePolicy1.setHeightForWidth(UpdatePass_OldPass->sizePolicy().hasHeightForWidth());
        UpdatePass_OldPass->setSizePolicy(sizePolicy1);
        UpdatePass_OldPass->setMaximumSize(QSize(16777215, 40));
        UpdatePass_OldPass->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
"\n"
"\n"
""));
        UpdatePass_OldPass->setEchoMode(QLineEdit::Password);
        UpdatePass_ConfirmPass = new QLineEdit(P9_UpdatePassword);
        UpdatePass_ConfirmPass->setObjectName("UpdatePass_ConfirmPass");
        UpdatePass_ConfirmPass->setGeometry(QRect(230, 410, 701, 40));
        sizePolicy1.setHeightForWidth(UpdatePass_ConfirmPass->sizePolicy().hasHeightForWidth());
        UpdatePass_ConfirmPass->setSizePolicy(sizePolicy1);
        UpdatePass_ConfirmPass->setMaximumSize(QSize(16777215, 40));
        UpdatePass_ConfirmPass->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);\n"
"background-color: transparent;\n"
"border: none;\n"
"\n"
"\n"
""));
        UpdatePass_ConfirmPass->setEchoMode(QLineEdit::Password);
        label_44 = new QLabel(P9_UpdatePassword);
        label_44->setObjectName("label_44");
        label_44->setGeometry(QRect(220, 430, 721, 41));
        label_44->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login/white-rect.png);"));
        UpdatePass_ShowConfirmPass = new QPushButton(P9_UpdatePassword);
        UpdatePass_ShowConfirmPass->setObjectName("UpdatePass_ShowConfirmPass");
        UpdatePass_ShowConfirmPass->setGeometry(QRect(930, 400, 81, 50));
        sizePolicy1.setHeightForWidth(UpdatePass_ShowConfirmPass->sizePolicy().hasHeightForWidth());
        UpdatePass_ShowConfirmPass->setSizePolicy(sizePolicy1);
        UpdatePass_ShowConfirmPass->setMaximumSize(QSize(16777215, 50));
        UpdatePass_ShowConfirmPass->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Login/Show.png);\n"
"background-color: transparent;"));
        label_8 = new QLabel(P9_UpdatePassword);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 60, 471, 111));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/password/password.png);"));
        label_45 = new QLabel(P9_UpdatePassword);
        label_45->setObjectName("label_45");
        label_45->setGeometry(QRect(10, 0, 211, 151));
        label_45->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        label_16 = new QLabel(P9_UpdatePassword);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 390, 201, 91));
        label_16->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/password/new-pass(confirmation).png);"));
        stackedWidget->addWidget(P9_UpdatePassword);
        Q10_GameHistory = new QWidget();
        Q10_GameHistory->setObjectName("Q10_GameHistory");
        Q10_GameHistory->setStyleSheet(QString::fromUtf8(""));
        label_24 = new QLabel(Q10_GameHistory);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(280, 80, 461, 141));
        label_24->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/history page/history.png);"));
        label_25 = new QLabel(Q10_GameHistory);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(10, 0, 211, 151));
        label_25->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        DetailedHistory = new QPushButton(Q10_GameHistory);
        DetailedHistory->setObjectName("DetailedHistory");
        DetailedHistory->setGeometry(QRect(10, 600, 371, 81));
        DetailedHistory->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/history page/detailed-history.png);\n"
"border: none;"));
        HistoryBack = new QPushButton(Q10_GameHistory);
        HistoryBack->setObjectName("HistoryBack");
        HistoryBack->setGeometry(QRect(850, 590, 201, 121));
        HistoryBack->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game itsself/Back.png);"));
        WinsCount = new QLabel(Q10_GameHistory);
        WinsCount->setObjectName("WinsCount");
        WinsCount->setGeometry(QRect(100, 350, 171, 161));
        WinsCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"font: 500 72pt \"PWStrokes\";\n"
"qproperty-alignment: 'AlignCenter';"));
        label_11 = new QLabel(Q10_GameHistory);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(340, 220, 351, 131));
        label_11->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/history page/loses.png);"));
        label_11->setFrameShape(QFrame::NoFrame);
        label_9 = new QLabel(Q10_GameHistory);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 230, 281, 121));
        label_9->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/history page/wins.png);"));
        label_9->setFrameShape(QFrame::NoFrame);
        label_17 = new QLabel(Q10_GameHistory);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(690, 230, 341, 111));
        label_17->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/history page/Draws.png);"));
        label_17->setFrameShape(QFrame::NoFrame);
        LosesCount = new QLabel(Q10_GameHistory);
        LosesCount->setObjectName("LosesCount");
        LosesCount->setGeometry(QRect(450, 350, 141, 141));
        LosesCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"font: 500 72pt \"PWStrokes\";\n"
"qproperty-alignment: 'AlignCenter';"));
        DrawsCount = new QLabel(Q10_GameHistory);
        DrawsCount->setObjectName("DrawsCount");
        DrawsCount->setGeometry(QRect(800, 350, 131, 131));
        DrawsCount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"font: 500 72pt \"PWStrokes\";\n"
"qproperty-alignment: 'AlignCenter';"));
        stackedWidget->addWidget(Q10_GameHistory);
        Q11_DetailedHistory = new QWidget();
        Q11_DetailedHistory->setObjectName("Q11_DetailedHistory");
        Q11_DetailedHistory->setStyleSheet(QString::fromUtf8(""));
        Detailed_Back = new QPushButton(Q11_DetailedHistory);
        Detailed_Back->setObjectName("Detailed_Back");
        Detailed_Back->setGeometry(QRect(410, 610, 251, 91));
        Detailed_Back->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game itsself/Back.png);"));
        label_26 = new QLabel(Q11_DetailedHistory);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(210, 150, 631, 461));
        label_26->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Game itsself/Borders.png);"));
        label_27 = new QLabel(Q11_DetailedHistory);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(190, 80, 651, 101));
        label_27->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Game replay/game-replay.png);"));
        label_28 = new QLabel(Q11_DetailedHistory);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(-20, 20, 211, 151));
        label_28->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));
        layoutWidget = new QWidget(Q11_DetailedHistory);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 0, 1001, 42));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        GameNumber = new QLabel(layoutWidget);
        GameNumber->setObjectName("GameNumber");
        GameNumber->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Doctor Glitch\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);"));

        horizontalLayout_18->addWidget(GameNumber);

        GameStatus = new QLabel(layoutWidget);
        GameStatus->setObjectName("GameStatus");
        GameStatus->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Doctor Glitch\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);"));

        horizontalLayout_18->addWidget(GameStatus);

        GameOpponent = new QLabel(layoutWidget);
        GameOpponent->setObjectName("GameOpponent");
        GameOpponent->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Doctor Glitch\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);"));

        horizontalLayout_18->addWidget(GameOpponent);

        His_31 = new QPushButton(Q11_DetailedHistory);
        His_31->setObjectName("His_31");
        His_31->setGeometry(QRect(230, 450, 151, 111));
        sizePolicy3.setHeightForWidth(His_31->sizePolicy().hasHeightForWidth());
        His_31->setSizePolicy(sizePolicy3);
        His_31->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        His_11 = new QPushButton(Q11_DetailedHistory);
        His_11->setObjectName("His_11");
        His_11->setGeometry(QRect(230, 210, 151, 101));
        sizePolicy3.setHeightForWidth(His_11->sizePolicy().hasHeightForWidth());
        His_11->setSizePolicy(sizePolicy3);
        His_11->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"border: none;"));
        His_32 = new QPushButton(Q11_DetailedHistory);
        His_32->setObjectName("His_32");
        His_32->setGeometry(QRect(390, 450, 251, 121));
        sizePolicy3.setHeightForWidth(His_32->sizePolicy().hasHeightForWidth());
        His_32->setSizePolicy(sizePolicy3);
        His_32->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        His_22 = new QPushButton(Q11_DetailedHistory);
        His_22->setObjectName("His_22");
        His_22->setGeometry(QRect(400, 320, 241, 121));
        sizePolicy3.setHeightForWidth(His_22->sizePolicy().hasHeightForWidth());
        His_22->setSizePolicy(sizePolicy3);
        His_22->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        His_33 = new QPushButton(Q11_DetailedHistory);
        His_33->setObjectName("His_33");
        His_33->setGeometry(QRect(640, 450, 181, 111));
        sizePolicy3.setHeightForWidth(His_33->sizePolicy().hasHeightForWidth());
        His_33->setSizePolicy(sizePolicy3);
        His_33->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        His_13 = new QPushButton(Q11_DetailedHistory);
        His_13->setObjectName("His_13");
        His_13->setGeometry(QRect(650, 200, 171, 101));
        sizePolicy3.setHeightForWidth(His_13->sizePolicy().hasHeightForWidth());
        His_13->setSizePolicy(sizePolicy3);
        His_13->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        His_23 = new QPushButton(Q11_DetailedHistory);
        His_23->setObjectName("His_23");
        His_23->setGeometry(QRect(640, 320, 181, 121));
        sizePolicy3.setHeightForWidth(His_23->sizePolicy().hasHeightForWidth());
        His_23->setSizePolicy(sizePolicy3);
        His_23->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        His_21 = new QPushButton(Q11_DetailedHistory);
        His_21->setObjectName("His_21");
        His_21->setGeometry(QRect(230, 320, 151, 121));
        sizePolicy3.setHeightForWidth(His_21->sizePolicy().hasHeightForWidth());
        His_21->setSizePolicy(sizePolicy3);
        His_21->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"border: none;\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"color: rgb(255, 255, 255);"));
        His_12 = new QPushButton(Q11_DetailedHistory);
        His_12->setObjectName("His_12");
        His_12->setGeometry(QRect(390, 210, 251, 101));
        sizePolicy3.setHeightForWidth(His_12->sizePolicy().hasHeightForWidth());
        His_12->setSizePolicy(sizePolicy3);
        His_12->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";\n"
"image: url(:/rec/img/Game itsself/transparent.png);\n"
"border: none;\n"
"color: rgb(255, 255, 255);"));
        PreviousMove = new QPushButton(Q11_DetailedHistory);
        PreviousMove->setObjectName("PreviousMove");
        PreviousMove->setGeometry(QRect(0, 520, 211, 51));
        PreviousMove->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game replay/previous.png);"));
        NextMove = new QPushButton(Q11_DetailedHistory);
        NextMove->setObjectName("NextMove");
        NextMove->setGeometry(QRect(830, 530, 181, 51));
        NextMove->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game replay/next-move.png);"));
        PreviousGame = new QPushButton(Q11_DetailedHistory);
        PreviousGame->setObjectName("PreviousGame");
        PreviousGame->setGeometry(QRect(0, 580, 211, 61));
        PreviousGame->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game replay/previous-game.png);"));
        NextGame = new QPushButton(Q11_DetailedHistory);
        NextGame->setObjectName("NextGame");
        NextGame->setGeometry(QRect(840, 580, 171, 61));
        NextGame->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/rec/img/Game replay/next-game.png);"));
        stackedWidget->addWidget(Q11_DetailedHistory);
        layoutWidget->raise();
        His_31->raise();
        His_11->raise();
        His_32->raise();
        His_22->raise();
        His_33->raise();
        His_13->raise();
        His_23->raise();
        His_21->raise();
        His_12->raise();
        PreviousMove->raise();
        NextMove->raise();
        PreviousGame->raise();
        NextGame->raise();
        label_26->raise();
        Detailed_Back->raise();
        label_27->raise();
        label_28->raise();

        verticalLayout_14->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

<<<<<<< HEAD
        stackedWidget->setCurrentIndex(0);
=======
        stackedWidget->setCurrentIndex(7);
>>>>>>> b22b240360c950645de012f1bd0ffa7e16c03a56


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Welcome->setText(QString());
        pushButton_Login->setText(QString());
        label_30->setText(QString());
        label_3->setText(QString());
        label_31->setText(QString());
        ShowPass->setText(QString());
        label->setText(QString());
        SignUp->setText(QString());
        Quit->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_29->setText(QString());
        GameHistory->setText(QString());
        ManageAccount->setText(QString());
        Play->setText(QString());
        QuitGame->setText(QString());
        LogOut->setText(QString());
        label_10->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        TwoPlayers->setText(QString());
        AiPlayer->setText(QString());
        PM_Back->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        TP_Reset->setText(QString());
        TP_Back->setText(QString());
        Slot_21->setText(QString());
        Slot_32->setText(QString());
        Slot_31->setText(QString());
        Slot_33->setText(QString());
        Slot_13->setText(QString());
        Slot_12->setText(QString());
        Slot_11->setText(QString());
        Slot_23->setText(QString());
        Slot_22->setText(QString());
        AiSlot_21->setText(QString());
        label_21->setText(QString());
        AI_Reset->setText(QString());
        AiSlot_32->setText(QString());
        AiSlot_31->setText(QString());
        AiSlot_33->setText(QString());
        AiSlot_13->setText(QString());
        AI_Back->setText(QString());
        label_22->setText(QString());
        AiSlot_12->setText(QString());
        label_23->setText(QString());
        AiSlot_11->setText(QString());
        AiSlot_23->setText(QString());
        AiSlot_22->setText(QString());
        pushButton_SignUp->setText(QString());
        SignUp_Back->setText(QString());
        label_32->setText(QString());
        label_33->setText(QString());
        label_34->setText(QString());
        SignUp_ShowPass->setText(QString());
        label_35->setText(QString());
        label_36->setText(QString());
        label_37->setText(QString());
        SignUp_ShowConfirmPass->setText(QString());
        label_6->setText(QString());
        label_38->setText(QString());
        UpdateUsername->setText(QString());
        UpdatePassword->setText(QString());
        DeleteAccount->setText(QString());
        SettingsBack->setText(QString());
        label_7->setText(QString());
        label_39->setText(QString());
        ConfirmUserUpdate->setText(QString());
        UpdateUser_Back->setText(QString());
        label_46->setText(QString());
        label_47->setText(QString());
        label_48->setText(QString());
        UpdateUser_ShowPass->setText(QString());
        label_49->setText(QString());
        label_12->setText(QString());
        label_50->setText(QString());
        ConfirmPassUpdate->setText(QString());
        UpdatePass_Back->setText(QString());
        label_40->setText(QString());
        label_41->setText(QString());
        label_42->setText(QString());
        UpdatePass_ShowNewPass->setText(QString());
        label_43->setText(QString());
        UpdatePass_ShowOldPass->setText(QString());
        label_44->setText(QString());
        UpdatePass_ShowConfirmPass->setText(QString());
        label_8->setText(QString());
        label_45->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        label_24->setText(QString());
        label_25->setText(QString());
        DetailedHistory->setText(QString());
        HistoryBack->setText(QString());
        WinsCount->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; font-weight:700;\">0</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
        LosesCount->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; font-weight:700;\">0</span></p></body></html>", nullptr));
        DrawsCount->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:72pt; font-weight:700;\">0</span></p></body></html>", nullptr));
        Detailed_Back->setText(QString());
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        GameNumber->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        GameStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        GameOpponent->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        His_31->setText(QString());
        His_11->setText(QString());
        His_32->setText(QString());
        His_22->setText(QString());
        His_33->setText(QString());
        His_13->setText(QString());
        His_23->setText(QString());
        His_21->setText(QString());
        His_12->setText(QString());
        PreviousMove->setText(QString());
        NextMove->setText(QString());
        PreviousGame->setText(QString());
        NextGame->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
