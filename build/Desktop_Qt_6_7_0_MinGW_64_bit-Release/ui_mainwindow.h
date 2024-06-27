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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
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
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *Welcome;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_password;
    QPushButton *ShowPass;
    QPushButton *pushButton_Login;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *SignUp;
    QPushButton *Quit;
    QWidget *P2_MainMenu;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Pic;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QPushButton *Play;
    QPushButton *GameHistory;
    QPushButton *ManageAccount;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *LogOut;
    QPushButton *QuitGame;
    QWidget *P3_PlayMode;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QPushButton *TwoPlayers;
    QPushButton *AiPlayer;
    QPushButton *PM_Back;
    QWidget *P4_TwoPlayer;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_2;
    QPushButton *Slot_22;
    QPushButton *Slot_11;
    QPushButton *Slot_21;
    QPushButton *Slot_33;
    QPushButton *Slot_31;
    QPushButton *Slot_13;
    QPushButton *Slot_32;
    QPushButton *Slot_12;
    QPushButton *Slot_23;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *TP_Back;
    QPushButton *TP_Reset;
    QWidget *P5_AiPlayer;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout_4;
    QPushButton *AiSlot_21;
    QPushButton *AiSlot_33;
    QPushButton *AiSlot_32;
    QPushButton *AiSlot_22;
    QPushButton *AiSlot_31;
    QPushButton *AiSlot_12;
    QPushButton *AiSlot_23;
    QPushButton *AiSlot_13;
    QPushButton *AiSlot_11;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *AI_Back;
    QPushButton *AI_Reset;
    QWidget *P6_SignUp;
    QVBoxLayout *verticalLayout_13;
    QGroupBox *SignUpPage;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *SignUp_username;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLineEdit *SignUp_Password;
    QPushButton *SignUp_ShowPass;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *SignUp_ConfirmPass;
    QPushButton *SignUp_ShowConfirmPass;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_SignUp;
    QPushButton *SignUp_Back;
    QWidget *P7_AccountSettings;
    QVBoxLayout *verticalLayout_12;
    QPushButton *UpdateUsername;
    QPushButton *UpdatePassword;
    QPushButton *DeleteAccount;
    QPushButton *SettingsBack;
    QWidget *P8_UpdateUsername;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *UpdateUser_Text;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *UpdateUser_PassText;
    QPushButton *UpdateUser_ShowPass;
    QPushButton *ConfirmUserUpdate;
    QPushButton *UpdateUser_Back;
    QWidget *P9_UpdatePassword;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *UpdatePass_OldPass;
    QPushButton *UpdatePass_ShowOldPass;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_14;
    QLineEdit *UpdatePass_NewPass;
    QPushButton *UpdatePass_ShowNewPass;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QLineEdit *UpdatePass_ConfirmPass;
    QPushButton *UpdatePass_ShowConfirmPass;
    QPushButton *ConfirmPassUpdate;
    QPushButton *UpdatePass_Back;
    QWidget *Q10_GameHistory;
    QVBoxLayout *verticalLayout_18;
    QGridLayout *gridLayout;
    QLCDNumber *WinsCountlcd;
    QLabel *label_17;
    QLCDNumber *LosesCountlcd;
    QLCDNumber *DrawsCountlcd;
    QLabel *label_11;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_17;
    QPushButton *DetailedHistory;
    QPushButton *HistoryBack;
    QWidget *Q11_DetailedHistory;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_18;
    QLabel *GameNumber;
    QLabel *GameStatus;
    QLabel *GameOpponent;
    QGridLayout *gridLayout_3;
    QPushButton *His_22;
    QPushButton *His_21;
    QPushButton *His_11;
    QPushButton *His_33;
    QPushButton *His_13;
    QPushButton *His_12;
    QPushButton *His_23;
    QPushButton *His_31;
    QPushButton *His_32;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *PreviousMove;
    QPushButton *NextMove;
    QHBoxLayout *horizontalLayout_19;
    QPushButton *PreviousGame;
    QPushButton *NextGame;
    QPushButton *Detailed_Back;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1044, 673);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_14 = new QVBoxLayout(centralwidget);
        verticalLayout_14->setObjectName("verticalLayout_14");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        P1_Login = new QWidget();
        P1_Login->setObjectName("P1_Login");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(P1_Login->sizePolicy().hasHeightForWidth());
        P1_Login->setSizePolicy(sizePolicy);
        P1_Login->setStyleSheet(QString::fromUtf8("background-image: url(:/rec/img/Background.png);"));
        verticalLayout_2 = new QVBoxLayout(P1_Login);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_21->setSizeConstraint(QLayout::SetMinAndMaxSize);
        label_3 = new QLabel(P1_Login);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMaximumSize(QSize(16777215, 50));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));

        horizontalLayout_21->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(800, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_21->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_21);

        Welcome = new QLabel(P1_Login);
        Welcome->setObjectName("Welcome");
        sizePolicy1.setHeightForWidth(Welcome->sizePolicy().hasHeightForWidth());
        Welcome->setSizePolicy(sizePolicy1);
        Welcome->setMinimumSize(QSize(1000, 4));
        Welcome->setMaximumSize(QSize(16777215, 100));
        Welcome->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/welcome.png);\n"
"background-color: rgb(255, 0, 0);\n"
"outline: none;"));

        verticalLayout_2->addWidget(Welcome);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(P1_Login);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Username.png);"));

        horizontalLayout->addWidget(label_2);

        lineEdit_username = new QLineEdit(P1_Login);
        lineEdit_username->setObjectName("lineEdit_username");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_username->sizePolicy().hasHeightForWidth());
        lineEdit_username->setSizePolicy(sizePolicy2);
        lineEdit_username->setMinimumSize(QSize(0, 0));
        lineEdit_username->setMaximumSize(QSize(16777215, 40));
        lineEdit_username->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"background-color: transparent;"));

        horizontalLayout->addWidget(lineEdit_username);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 6);

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(P1_Login);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/password.png);"));

        horizontalLayout_3->addWidget(label);

        lineEdit_password = new QLineEdit(P1_Login);
        lineEdit_password->setObjectName("lineEdit_password");
        sizePolicy2.setHeightForWidth(lineEdit_password->sizePolicy().hasHeightForWidth());
        lineEdit_password->setSizePolicy(sizePolicy2);
        lineEdit_password->setMaximumSize(QSize(16777215, 40));
        lineEdit_password->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);\n"
"border: none;\n"
"background-color: transparent;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEdit_password);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 5);

        horizontalLayout_4->addLayout(horizontalLayout_3);

        ShowPass = new QPushButton(P1_Login);
        ShowPass->setObjectName("ShowPass");
        sizePolicy2.setHeightForWidth(ShowPass->sizePolicy().hasHeightForWidth());
        ShowPass->setSizePolicy(sizePolicy2);
        ShowPass->setMaximumSize(QSize(16777215, 50));
        ShowPass->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Show.png);\n"
"border: none;\n"
"background-color: transparent;"));

        horizontalLayout_4->addWidget(ShowPass);

        horizontalLayout_4->setStretch(0, 10);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_4);

        pushButton_Login = new QPushButton(P1_Login);
        pushButton_Login->setObjectName("pushButton_Login");
        sizePolicy1.setHeightForWidth(pushButton_Login->sizePolicy().hasHeightForWidth());
        pushButton_Login->setSizePolicy(sizePolicy1);
        pushButton_Login->setMinimumSize(QSize(0, 0));
        pushButton_Login->setMaximumSize(QSize(16777215, 56));
        pushButton_Login->setSizeIncrement(QSize(0, 0));
        pushButton_Login->setBaseSize(QSize(0, 0));
        pushButton_Login->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Login.png);\n"
"border: none;"));

        verticalLayout_2->addWidget(pushButton_Login);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        SignUp = new QPushButton(P1_Login);
        SignUp->setObjectName("SignUp");
        sizePolicy1.setHeightForWidth(SignUp->sizePolicy().hasHeightForWidth());
        SignUp->setSizePolicy(sizePolicy1);
        SignUp->setMaximumSize(QSize(16777215, 56));
        SignUp->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/SignUp.png);\n"
"border: none;\n"
"background-color: transparent;"));

        horizontalLayout_2->addWidget(SignUp);

        Quit = new QPushButton(P1_Login);
        Quit->setObjectName("Quit");
        sizePolicy1.setHeightForWidth(Quit->sizePolicy().hasHeightForWidth());
        Quit->setSizePolicy(sizePolicy1);
        Quit->setMaximumSize(QSize(16777215, 56));
        Quit->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Quit.png);\n"
"border: none;\n"
"background-color: transparent;"));

        horizontalLayout_2->addWidget(Quit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 2);
        verticalLayout_2->setStretch(2, 5);
        verticalLayout_2->setStretch(3, 5);
        verticalLayout_2->setStretch(4, 1);
        verticalLayout_2->setStretch(5, 1);
        stackedWidget->addWidget(P1_Login);
        P2_MainMenu = new QWidget();
        P2_MainMenu->setObjectName("P2_MainMenu");
        verticalLayout_6 = new QVBoxLayout(P2_MainMenu);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_Pic = new QLabel(P2_MainMenu);
        label_Pic->setObjectName("label_Pic");
        label_Pic->setStyleSheet(QString::fromUtf8("image: url(:/rec/img/Logo.png);"));

        horizontalLayout_5->addWidget(label_Pic);

        label_4 = new QLabel(P2_MainMenu);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);


        verticalLayout_6->addLayout(horizontalLayout_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        Play = new QPushButton(P2_MainMenu);
        Play->setObjectName("Play");
        Play->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_5->addWidget(Play);

        GameHistory = new QPushButton(P2_MainMenu);
        GameHistory->setObjectName("GameHistory");
        GameHistory->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_5->addWidget(GameHistory);

        ManageAccount = new QPushButton(P2_MainMenu);
        ManageAccount->setObjectName("ManageAccount");
        ManageAccount->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_5->addWidget(ManageAccount);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        LogOut = new QPushButton(P2_MainMenu);
        LogOut->setObjectName("LogOut");
        LogOut->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        horizontalLayout_17->addWidget(LogOut);

        QuitGame = new QPushButton(P2_MainMenu);
        QuitGame->setObjectName("QuitGame");
        QuitGame->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        horizontalLayout_17->addWidget(QuitGame);


        verticalLayout_5->addLayout(horizontalLayout_17);


        verticalLayout_6->addLayout(verticalLayout_5);

        stackedWidget->addWidget(P2_MainMenu);
        P3_PlayMode = new QWidget();
        P3_PlayMode->setObjectName("P3_PlayMode");
        verticalLayout_7 = new QVBoxLayout(P3_PlayMode);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_5 = new QLabel(P3_PlayMode);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        verticalLayout_7->addWidget(label_5);

        TwoPlayers = new QPushButton(P3_PlayMode);
        TwoPlayers->setObjectName("TwoPlayers");
        sizePolicy2.setHeightForWidth(TwoPlayers->sizePolicy().hasHeightForWidth());
        TwoPlayers->setSizePolicy(sizePolicy2);
        TwoPlayers->setMaximumSize(QSize(16777215, 60));

        verticalLayout_7->addWidget(TwoPlayers);

        AiPlayer = new QPushButton(P3_PlayMode);
        AiPlayer->setObjectName("AiPlayer");
        sizePolicy2.setHeightForWidth(AiPlayer->sizePolicy().hasHeightForWidth());
        AiPlayer->setSizePolicy(sizePolicy2);
        AiPlayer->setMaximumSize(QSize(16777215, 60));

        verticalLayout_7->addWidget(AiPlayer);

        PM_Back = new QPushButton(P3_PlayMode);
        PM_Back->setObjectName("PM_Back");
        sizePolicy2.setHeightForWidth(PM_Back->sizePolicy().hasHeightForWidth());
        PM_Back->setSizePolicy(sizePolicy2);
        PM_Back->setMaximumSize(QSize(16777215, 60));

        verticalLayout_7->addWidget(PM_Back);

        stackedWidget->addWidget(P3_PlayMode);
        P4_TwoPlayer = new QWidget();
        P4_TwoPlayer->setObjectName("P4_TwoPlayer");
        verticalLayout_8 = new QVBoxLayout(P4_TwoPlayer);
        verticalLayout_8->setObjectName("verticalLayout_8");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        Slot_22 = new QPushButton(P4_TwoPlayer);
        Slot_22->setObjectName("Slot_22");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Slot_22->sizePolicy().hasHeightForWidth());
        Slot_22->setSizePolicy(sizePolicy3);
        Slot_22->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_2->addWidget(Slot_22, 1, 1, 1, 1);

        Slot_11 = new QPushButton(P4_TwoPlayer);
        Slot_11->setObjectName("Slot_11");
        sizePolicy3.setHeightForWidth(Slot_11->sizePolicy().hasHeightForWidth());
        Slot_11->setSizePolicy(sizePolicy3);
        Slot_11->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_2->addWidget(Slot_11, 0, 0, 1, 1);

        Slot_21 = new QPushButton(P4_TwoPlayer);
        Slot_21->setObjectName("Slot_21");
        sizePolicy3.setHeightForWidth(Slot_21->sizePolicy().hasHeightForWidth());
        Slot_21->setSizePolicy(sizePolicy3);
        Slot_21->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_2->addWidget(Slot_21, 1, 0, 1, 1);

        Slot_33 = new QPushButton(P4_TwoPlayer);
        Slot_33->setObjectName("Slot_33");
        sizePolicy3.setHeightForWidth(Slot_33->sizePolicy().hasHeightForWidth());
        Slot_33->setSizePolicy(sizePolicy3);
        Slot_33->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_2->addWidget(Slot_33, 2, 2, 1, 1);

        Slot_31 = new QPushButton(P4_TwoPlayer);
        Slot_31->setObjectName("Slot_31");
        sizePolicy3.setHeightForWidth(Slot_31->sizePolicy().hasHeightForWidth());
        Slot_31->setSizePolicy(sizePolicy3);
        Slot_31->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_2->addWidget(Slot_31, 2, 0, 1, 1);

        Slot_13 = new QPushButton(P4_TwoPlayer);
        Slot_13->setObjectName("Slot_13");
        sizePolicy3.setHeightForWidth(Slot_13->sizePolicy().hasHeightForWidth());
        Slot_13->setSizePolicy(sizePolicy3);
        Slot_13->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_2->addWidget(Slot_13, 0, 2, 1, 1);

        Slot_32 = new QPushButton(P4_TwoPlayer);
        Slot_32->setObjectName("Slot_32");
        sizePolicy3.setHeightForWidth(Slot_32->sizePolicy().hasHeightForWidth());
        Slot_32->setSizePolicy(sizePolicy3);
        Slot_32->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_2->addWidget(Slot_32, 2, 1, 1, 1);

        Slot_12 = new QPushButton(P4_TwoPlayer);
        Slot_12->setObjectName("Slot_12");
        sizePolicy3.setHeightForWidth(Slot_12->sizePolicy().hasHeightForWidth());
        Slot_12->setSizePolicy(sizePolicy3);
        Slot_12->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_2->addWidget(Slot_12, 0, 1, 1, 1);

        Slot_23 = new QPushButton(P4_TwoPlayer);
        Slot_23->setObjectName("Slot_23");
        sizePolicy3.setHeightForWidth(Slot_23->sizePolicy().hasHeightForWidth());
        Slot_23->setSizePolicy(sizePolicy3);
        Slot_23->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_2->addWidget(Slot_23, 1, 2, 1, 1);


        verticalLayout_8->addLayout(gridLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        TP_Back = new QPushButton(P4_TwoPlayer);
        TP_Back->setObjectName("TP_Back");

        horizontalLayout_7->addWidget(TP_Back);

        TP_Reset = new QPushButton(P4_TwoPlayer);
        TP_Reset->setObjectName("TP_Reset");

        horizontalLayout_7->addWidget(TP_Reset);


        verticalLayout_8->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(P4_TwoPlayer);
        P5_AiPlayer = new QWidget();
        P5_AiPlayer->setObjectName("P5_AiPlayer");
        verticalLayout_16 = new QVBoxLayout(P5_AiPlayer);
        verticalLayout_16->setObjectName("verticalLayout_16");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        AiSlot_21 = new QPushButton(P5_AiPlayer);
        AiSlot_21->setObjectName("AiSlot_21");
        sizePolicy3.setHeightForWidth(AiSlot_21->sizePolicy().hasHeightForWidth());
        AiSlot_21->setSizePolicy(sizePolicy3);
        AiSlot_21->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_4->addWidget(AiSlot_21, 3, 0, 1, 1);

        AiSlot_33 = new QPushButton(P5_AiPlayer);
        AiSlot_33->setObjectName("AiSlot_33");
        sizePolicy3.setHeightForWidth(AiSlot_33->sizePolicy().hasHeightForWidth());
        AiSlot_33->setSizePolicy(sizePolicy3);
        AiSlot_33->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_4->addWidget(AiSlot_33, 4, 2, 1, 1);

        AiSlot_32 = new QPushButton(P5_AiPlayer);
        AiSlot_32->setObjectName("AiSlot_32");
        sizePolicy3.setHeightForWidth(AiSlot_32->sizePolicy().hasHeightForWidth());
        AiSlot_32->setSizePolicy(sizePolicy3);
        AiSlot_32->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_4->addWidget(AiSlot_32, 4, 1, 1, 1);

        AiSlot_22 = new QPushButton(P5_AiPlayer);
        AiSlot_22->setObjectName("AiSlot_22");
        sizePolicy3.setHeightForWidth(AiSlot_22->sizePolicy().hasHeightForWidth());
        AiSlot_22->setSizePolicy(sizePolicy3);
        AiSlot_22->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_4->addWidget(AiSlot_22, 3, 1, 1, 1);

        AiSlot_31 = new QPushButton(P5_AiPlayer);
        AiSlot_31->setObjectName("AiSlot_31");
        sizePolicy3.setHeightForWidth(AiSlot_31->sizePolicy().hasHeightForWidth());
        AiSlot_31->setSizePolicy(sizePolicy3);
        AiSlot_31->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_4->addWidget(AiSlot_31, 4, 0, 1, 1);

        AiSlot_12 = new QPushButton(P5_AiPlayer);
        AiSlot_12->setObjectName("AiSlot_12");
        sizePolicy3.setHeightForWidth(AiSlot_12->sizePolicy().hasHeightForWidth());
        AiSlot_12->setSizePolicy(sizePolicy3);
        AiSlot_12->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_4->addWidget(AiSlot_12, 0, 1, 1, 1);

        AiSlot_23 = new QPushButton(P5_AiPlayer);
        AiSlot_23->setObjectName("AiSlot_23");
        sizePolicy3.setHeightForWidth(AiSlot_23->sizePolicy().hasHeightForWidth());
        AiSlot_23->setSizePolicy(sizePolicy3);
        AiSlot_23->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_4->addWidget(AiSlot_23, 3, 2, 1, 1);

        AiSlot_13 = new QPushButton(P5_AiPlayer);
        AiSlot_13->setObjectName("AiSlot_13");
        sizePolicy3.setHeightForWidth(AiSlot_13->sizePolicy().hasHeightForWidth());
        AiSlot_13->setSizePolicy(sizePolicy3);
        AiSlot_13->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_4->addWidget(AiSlot_13, 0, 2, 1, 1);

        AiSlot_11 = new QPushButton(P5_AiPlayer);
        AiSlot_11->setObjectName("AiSlot_11");
        sizePolicy3.setHeightForWidth(AiSlot_11->sizePolicy().hasHeightForWidth());
        AiSlot_11->setSizePolicy(sizePolicy3);
        AiSlot_11->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_4->addWidget(AiSlot_11, 0, 0, 1, 1);


        verticalLayout_16->addLayout(gridLayout_4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        AI_Back = new QPushButton(P5_AiPlayer);
        AI_Back->setObjectName("AI_Back");

        horizontalLayout_13->addWidget(AI_Back);

        AI_Reset = new QPushButton(P5_AiPlayer);
        AI_Reset->setObjectName("AI_Reset");

        horizontalLayout_13->addWidget(AI_Reset);


        verticalLayout_16->addLayout(horizontalLayout_13);

        stackedWidget->addWidget(P5_AiPlayer);
        P6_SignUp = new QWidget();
        P6_SignUp->setObjectName("P6_SignUp");
        verticalLayout_13 = new QVBoxLayout(P6_SignUp);
        verticalLayout_13->setObjectName("verticalLayout_13");
        SignUpPage = new QGroupBox(P6_SignUp);
        SignUpPage->setObjectName("SignUpPage");
        verticalLayout_10 = new QVBoxLayout(SignUpPage);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_6->setContentsMargins(-1, 0, -1, 0);
        label_6 = new QLabel(SignUpPage);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        SignUp_username = new QLineEdit(SignUpPage);
        SignUp_username->setObjectName("SignUp_username");

        horizontalLayout_6->addWidget(SignUp_username);


        verticalLayout_11->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_10->setContentsMargins(-1, 0, -1, 0);
        label_7 = new QLabel(SignUpPage);
        label_7->setObjectName("label_7");

        horizontalLayout_10->addWidget(label_7);

        SignUp_Password = new QLineEdit(SignUpPage);
        SignUp_Password->setObjectName("SignUp_Password");
        SignUp_Password->setEchoMode(QLineEdit::Password);

        horizontalLayout_10->addWidget(SignUp_Password);

        SignUp_ShowPass = new QPushButton(SignUpPage);
        SignUp_ShowPass->setObjectName("SignUp_ShowPass");

        horizontalLayout_10->addWidget(SignUp_ShowPass);


        verticalLayout_11->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_8->setContentsMargins(-1, 0, -1, 0);
        label_8 = new QLabel(SignUpPage);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        SignUp_ConfirmPass = new QLineEdit(SignUpPage);
        SignUp_ConfirmPass->setObjectName("SignUp_ConfirmPass");
        SignUp_ConfirmPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_8->addWidget(SignUp_ConfirmPass);

        SignUp_ShowConfirmPass = new QPushButton(SignUpPage);
        SignUp_ShowConfirmPass->setObjectName("SignUp_ShowConfirmPass");

        horizontalLayout_8->addWidget(SignUp_ShowConfirmPass);


        verticalLayout_11->addLayout(horizontalLayout_8);

        verticalLayout_11->setStretch(0, 1);
        verticalLayout_11->setStretch(1, 1);
        verticalLayout_11->setStretch(2, 1);

        verticalLayout_10->addLayout(verticalLayout_11);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pushButton_SignUp = new QPushButton(SignUpPage);
        pushButton_SignUp->setObjectName("pushButton_SignUp");
        sizePolicy2.setHeightForWidth(pushButton_SignUp->sizePolicy().hasHeightForWidth());
        pushButton_SignUp->setSizePolicy(sizePolicy2);
        pushButton_SignUp->setMaximumSize(QSize(16777215, 60));

        horizontalLayout_9->addWidget(pushButton_SignUp);

        SignUp_Back = new QPushButton(SignUpPage);
        SignUp_Back->setObjectName("SignUp_Back");
        SignUp_Back->setMaximumSize(QSize(16777215, 60));

        horizontalLayout_9->addWidget(SignUp_Back);


        verticalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_13->addWidget(SignUpPage);

        stackedWidget->addWidget(P6_SignUp);
        P7_AccountSettings = new QWidget();
        P7_AccountSettings->setObjectName("P7_AccountSettings");
        verticalLayout_12 = new QVBoxLayout(P7_AccountSettings);
        verticalLayout_12->setObjectName("verticalLayout_12");
        UpdateUsername = new QPushButton(P7_AccountSettings);
        UpdateUsername->setObjectName("UpdateUsername");
        UpdateUsername->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_12->addWidget(UpdateUsername);

        UpdatePassword = new QPushButton(P7_AccountSettings);
        UpdatePassword->setObjectName("UpdatePassword");
        UpdatePassword->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_12->addWidget(UpdatePassword);

        DeleteAccount = new QPushButton(P7_AccountSettings);
        DeleteAccount->setObjectName("DeleteAccount");
        DeleteAccount->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_12->addWidget(DeleteAccount);

        SettingsBack = new QPushButton(P7_AccountSettings);
        SettingsBack->setObjectName("SettingsBack");
        SettingsBack->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_12->addWidget(SettingsBack);

        stackedWidget->addWidget(P7_AccountSettings);
        P8_UpdateUsername = new QWidget();
        P8_UpdateUsername->setObjectName("P8_UpdateUsername");
        verticalLayout_15 = new QVBoxLayout(P8_UpdateUsername);
        verticalLayout_15->setObjectName("verticalLayout_15");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_12 = new QLabel(P8_UpdateUsername);
        label_12->setObjectName("label_12");

        horizontalLayout_11->addWidget(label_12);

        UpdateUser_Text = new QLineEdit(P8_UpdateUsername);
        UpdateUser_Text->setObjectName("UpdateUser_Text");

        horizontalLayout_11->addWidget(UpdateUser_Text);


        verticalLayout_15->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_13 = new QLabel(P8_UpdateUsername);
        label_13->setObjectName("label_13");

        horizontalLayout_12->addWidget(label_13);

        UpdateUser_PassText = new QLineEdit(P8_UpdateUsername);
        UpdateUser_PassText->setObjectName("UpdateUser_PassText");
        UpdateUser_PassText->setEchoMode(QLineEdit::Password);

        horizontalLayout_12->addWidget(UpdateUser_PassText);

        UpdateUser_ShowPass = new QPushButton(P8_UpdateUsername);
        UpdateUser_ShowPass->setObjectName("UpdateUser_ShowPass");

        horizontalLayout_12->addWidget(UpdateUser_ShowPass);


        verticalLayout_15->addLayout(horizontalLayout_12);

        ConfirmUserUpdate = new QPushButton(P8_UpdateUsername);
        ConfirmUserUpdate->setObjectName("ConfirmUserUpdate");
        ConfirmUserUpdate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_15->addWidget(ConfirmUserUpdate);

        UpdateUser_Back = new QPushButton(P8_UpdateUsername);
        UpdateUser_Back->setObjectName("UpdateUser_Back");
        UpdateUser_Back->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_15->addWidget(UpdateUser_Back);

        stackedWidget->addWidget(P8_UpdateUsername);
        P9_UpdatePassword = new QWidget();
        P9_UpdatePassword->setObjectName("P9_UpdatePassword");
        verticalLayout = new QVBoxLayout(P9_UpdatePassword);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_15 = new QLabel(P9_UpdatePassword);
        label_15->setObjectName("label_15");

        horizontalLayout_15->addWidget(label_15);

        UpdatePass_OldPass = new QLineEdit(P9_UpdatePassword);
        UpdatePass_OldPass->setObjectName("UpdatePass_OldPass");

        horizontalLayout_15->addWidget(UpdatePass_OldPass);

        UpdatePass_ShowOldPass = new QPushButton(P9_UpdatePassword);
        UpdatePass_ShowOldPass->setObjectName("UpdatePass_ShowOldPass");

        horizontalLayout_15->addWidget(UpdatePass_ShowOldPass);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_14 = new QLabel(P9_UpdatePassword);
        label_14->setObjectName("label_14");

        horizontalLayout_14->addWidget(label_14);

        UpdatePass_NewPass = new QLineEdit(P9_UpdatePassword);
        UpdatePass_NewPass->setObjectName("UpdatePass_NewPass");
        UpdatePass_NewPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_14->addWidget(UpdatePass_NewPass);

        UpdatePass_ShowNewPass = new QPushButton(P9_UpdatePassword);
        UpdatePass_ShowNewPass->setObjectName("UpdatePass_ShowNewPass");

        horizontalLayout_14->addWidget(UpdatePass_ShowNewPass);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_16 = new QLabel(P9_UpdatePassword);
        label_16->setObjectName("label_16");

        horizontalLayout_16->addWidget(label_16);

        UpdatePass_ConfirmPass = new QLineEdit(P9_UpdatePassword);
        UpdatePass_ConfirmPass->setObjectName("UpdatePass_ConfirmPass");
        UpdatePass_ConfirmPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_16->addWidget(UpdatePass_ConfirmPass);

        UpdatePass_ShowConfirmPass = new QPushButton(P9_UpdatePassword);
        UpdatePass_ShowConfirmPass->setObjectName("UpdatePass_ShowConfirmPass");

        horizontalLayout_16->addWidget(UpdatePass_ShowConfirmPass);


        verticalLayout->addLayout(horizontalLayout_16);

        ConfirmPassUpdate = new QPushButton(P9_UpdatePassword);
        ConfirmPassUpdate->setObjectName("ConfirmPassUpdate");
        ConfirmPassUpdate->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout->addWidget(ConfirmPassUpdate);

        UpdatePass_Back = new QPushButton(P9_UpdatePassword);
        UpdatePass_Back->setObjectName("UpdatePass_Back");
        UpdatePass_Back->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout->addWidget(UpdatePass_Back);

        stackedWidget->addWidget(P9_UpdatePassword);
        Q10_GameHistory = new QWidget();
        Q10_GameHistory->setObjectName("Q10_GameHistory");
        verticalLayout_18 = new QVBoxLayout(Q10_GameHistory);
        verticalLayout_18->setObjectName("verticalLayout_18");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        WinsCountlcd = new QLCDNumber(Q10_GameHistory);
        WinsCountlcd->setObjectName("WinsCountlcd");
        WinsCountlcd->setFrameShape(QFrame::Box);
        WinsCountlcd->setDigitCount(3);
        WinsCountlcd->setMode(QLCDNumber::Dec);
        WinsCountlcd->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(WinsCountlcd, 1, 0, 1, 1);

        label_17 = new QLabel(Q10_GameHistory);
        label_17->setObjectName("label_17");
        label_17->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_17, 0, 2, 1, 1);

        LosesCountlcd = new QLCDNumber(Q10_GameHistory);
        LosesCountlcd->setObjectName("LosesCountlcd");
        LosesCountlcd->setDigitCount(3);
        LosesCountlcd->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(LosesCountlcd, 1, 1, 1, 1);

        DrawsCountlcd = new QLCDNumber(Q10_GameHistory);
        DrawsCountlcd->setObjectName("DrawsCountlcd");
        DrawsCountlcd->setDigitCount(3);
        DrawsCountlcd->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(DrawsCountlcd, 1, 2, 1, 1);

        label_11 = new QLabel(Q10_GameHistory);
        label_11->setObjectName("label_11");
        label_11->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_11, 0, 1, 1, 1);

        label_9 = new QLabel(Q10_GameHistory);
        label_9->setObjectName("label_9");
        label_9->setFrameShape(QFrame::Box);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);


        verticalLayout_18->addLayout(gridLayout);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        DetailedHistory = new QPushButton(Q10_GameHistory);
        DetailedHistory->setObjectName("DetailedHistory");
        DetailedHistory->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_17->addWidget(DetailedHistory);

        HistoryBack = new QPushButton(Q10_GameHistory);
        HistoryBack->setObjectName("HistoryBack");
        HistoryBack->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 85);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 20pt \"Segoe UI\";"));

        verticalLayout_17->addWidget(HistoryBack);


        verticalLayout_18->addLayout(verticalLayout_17);

        stackedWidget->addWidget(Q10_GameHistory);
        Q11_DetailedHistory = new QWidget();
        Q11_DetailedHistory->setObjectName("Q11_DetailedHistory");
        verticalLayout_19 = new QVBoxLayout(Q11_DetailedHistory);
        verticalLayout_19->setObjectName("verticalLayout_19");
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        GameNumber = new QLabel(Q11_DetailedHistory);
        GameNumber->setObjectName("GameNumber");

        horizontalLayout_18->addWidget(GameNumber);

        GameStatus = new QLabel(Q11_DetailedHistory);
        GameStatus->setObjectName("GameStatus");

        horizontalLayout_18->addWidget(GameStatus);

        GameOpponent = new QLabel(Q11_DetailedHistory);
        GameOpponent->setObjectName("GameOpponent");

        horizontalLayout_18->addWidget(GameOpponent);


        verticalLayout_19->addLayout(horizontalLayout_18);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        His_22 = new QPushButton(Q11_DetailedHistory);
        His_22->setObjectName("His_22");
        sizePolicy3.setHeightForWidth(His_22->sizePolicy().hasHeightForWidth());
        His_22->setSizePolicy(sizePolicy3);
        His_22->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_3->addWidget(His_22, 1, 1, 1, 1);

        His_21 = new QPushButton(Q11_DetailedHistory);
        His_21->setObjectName("His_21");
        sizePolicy3.setHeightForWidth(His_21->sizePolicy().hasHeightForWidth());
        His_21->setSizePolicy(sizePolicy3);
        His_21->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_3->addWidget(His_21, 1, 0, 1, 1);

        His_11 = new QPushButton(Q11_DetailedHistory);
        His_11->setObjectName("His_11");
        sizePolicy3.setHeightForWidth(His_11->sizePolicy().hasHeightForWidth());
        His_11->setSizePolicy(sizePolicy3);
        His_11->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_3->addWidget(His_11, 0, 0, 1, 1);

        His_33 = new QPushButton(Q11_DetailedHistory);
        His_33->setObjectName("His_33");
        sizePolicy3.setHeightForWidth(His_33->sizePolicy().hasHeightForWidth());
        His_33->setSizePolicy(sizePolicy3);
        His_33->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_3->addWidget(His_33, 2, 2, 1, 1);

        His_13 = new QPushButton(Q11_DetailedHistory);
        His_13->setObjectName("His_13");
        sizePolicy3.setHeightForWidth(His_13->sizePolicy().hasHeightForWidth());
        His_13->setSizePolicy(sizePolicy3);
        His_13->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_3->addWidget(His_13, 0, 2, 1, 1);

        His_12 = new QPushButton(Q11_DetailedHistory);
        His_12->setObjectName("His_12");
        sizePolicy3.setHeightForWidth(His_12->sizePolicy().hasHeightForWidth());
        His_12->setSizePolicy(sizePolicy3);
        His_12->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_3->addWidget(His_12, 0, 1, 1, 1);

        His_23 = new QPushButton(Q11_DetailedHistory);
        His_23->setObjectName("His_23");
        sizePolicy3.setHeightForWidth(His_23->sizePolicy().hasHeightForWidth());
        His_23->setSizePolicy(sizePolicy3);
        His_23->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_3->addWidget(His_23, 1, 2, 1, 1);

        His_31 = new QPushButton(Q11_DetailedHistory);
        His_31->setObjectName("His_31");
        sizePolicy3.setHeightForWidth(His_31->sizePolicy().hasHeightForWidth());
        His_31->setSizePolicy(sizePolicy3);
        His_31->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_3->addWidget(His_31, 2, 0, 1, 1);

        His_32 = new QPushButton(Q11_DetailedHistory);
        His_32->setObjectName("His_32");
        sizePolicy3.setHeightForWidth(His_32->sizePolicy().hasHeightForWidth());
        His_32->setSizePolicy(sizePolicy3);
        His_32->setStyleSheet(QString::fromUtf8("font: 700 32pt \"Segoe UI\";"));

        gridLayout_3->addWidget(His_32, 2, 1, 1, 1);


        verticalLayout_19->addLayout(gridLayout_3);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        PreviousMove = new QPushButton(Q11_DetailedHistory);
        PreviousMove->setObjectName("PreviousMove");

        horizontalLayout_20->addWidget(PreviousMove);

        NextMove = new QPushButton(Q11_DetailedHistory);
        NextMove->setObjectName("NextMove");

        horizontalLayout_20->addWidget(NextMove);


        verticalLayout_19->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        PreviousGame = new QPushButton(Q11_DetailedHistory);
        PreviousGame->setObjectName("PreviousGame");

        horizontalLayout_19->addWidget(PreviousGame);

        NextGame = new QPushButton(Q11_DetailedHistory);
        NextGame->setObjectName("NextGame");

        horizontalLayout_19->addWidget(NextGame);


        verticalLayout_19->addLayout(horizontalLayout_19);

        Detailed_Back = new QPushButton(Q11_DetailedHistory);
        Detailed_Back->setObjectName("Detailed_Back");

        verticalLayout_19->addWidget(Detailed_Back);

        stackedWidget->addWidget(Q11_DetailedHistory);

        verticalLayout_14->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QString());
        Welcome->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        ShowPass->setText(QString());
        pushButton_Login->setText(QString());
        SignUp->setText(QString());
        Quit->setText(QString());
        label_Pic->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700;\">Welcome to our<br/>Tic Tac Toe<br/>Game</span></p></body></html>", nullptr));
        Play->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        GameHistory->setText(QCoreApplication::translate("MainWindow", "Game History", nullptr));
        ManageAccount->setText(QCoreApplication::translate("MainWindow", "Manage Account", nullptr));
        LogOut->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
        QuitGame->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700;\">Choose Play Mode</span></p></body></html>", nullptr));
        TwoPlayers->setText(QCoreApplication::translate("MainWindow", "Two Players", nullptr));
        AiPlayer->setText(QCoreApplication::translate("MainWindow", "Single Player VS AI   ", nullptr));
        PM_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        Slot_22->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Slot_11->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Slot_21->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Slot_33->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Slot_31->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Slot_13->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Slot_32->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Slot_12->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        Slot_23->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        TP_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        TP_Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        AiSlot_21->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AiSlot_33->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AiSlot_32->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AiSlot_22->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AiSlot_31->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AiSlot_12->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AiSlot_23->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AiSlot_13->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AiSlot_11->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        AI_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        AI_Reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        SignUpPage->setTitle(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Password ", nullptr));
        SignUp_ShowPass->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Confirm</p><p align=\"center\">Password</p></body></html>", nullptr));
        SignUp_ShowConfirmPass->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        SignUp_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        UpdateUsername->setText(QCoreApplication::translate("MainWindow", "Update Username", nullptr));
        UpdatePassword->setText(QCoreApplication::translate("MainWindow", "Update Password", nullptr));
        DeleteAccount->setText(QCoreApplication::translate("MainWindow", "Delete Account", nullptr));
        SettingsBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">New <br/>Username</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">Enter Password<br/>To confirm its you</span></p></body></html>", nullptr));
        UpdateUser_ShowPass->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        ConfirmUserUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        UpdateUser_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">Old<br/>Password</span></p></body></html>", nullptr));
        UpdatePass_ShowOldPass->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">New<br/>Password</span></p></body></html>", nullptr));
        UpdatePass_ShowNewPass->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">Confirm New<br/>Password</span></p></body></html>", nullptr));
        UpdatePass_ShowConfirmPass->setText(QCoreApplication::translate("MainWindow", "Show", nullptr));
        ConfirmPassUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        UpdatePass_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">Draws</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">Loses</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">Wins</span></p></body></html>", nullptr));
        DetailedHistory->setText(QCoreApplication::translate("MainWindow", "View Detailed History", nullptr));
        HistoryBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        GameNumber->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        GameStatus->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        GameOpponent->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        His_22->setText(QString());
        His_21->setText(QString());
        His_11->setText(QString());
        His_33->setText(QString());
        His_13->setText(QString());
        His_12->setText(QString());
        His_23->setText(QString());
        His_31->setText(QString());
        His_32->setText(QString());
        PreviousMove->setText(QCoreApplication::translate("MainWindow", "Previous Move", nullptr));
        NextMove->setText(QCoreApplication::translate("MainWindow", "Next move", nullptr));
        PreviousGame->setText(QCoreApplication::translate("MainWindow", "Previous Game", nullptr));
        NextGame->setText(QCoreApplication::translate("MainWindow", "Next Game", nullptr));
        Detailed_Back->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
