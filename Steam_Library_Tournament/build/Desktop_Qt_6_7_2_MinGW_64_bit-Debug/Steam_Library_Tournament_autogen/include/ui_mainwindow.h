/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReset;
    QAction *actionExit;
    QAction *actionStart_Tournament;
    QAction *actionIncluded_Games;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *Actions;
    QFrame *LoginInfoScreen;
    QVBoxLayout *verticalLayout_3;
    QLabel *noLoginText;
    QFrame *line;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *Randomize_Button;
    QPushButton *StartTournament_Button;
    QFrame *line_2;
    QFrame *Commands;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *Game1_VLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *Game1_Button;
    QFrame *line_3;
    QVBoxLayout *Game2_VLayout;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *Game2_Button;
    QTabWidget *Tournament;
    QWidget *tab_Brackets;
    QWidget *tab_Results;
    QMenuBar *menubar;
    QMenu *menuApp;
    QMenu *menuTournament;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1112, 619);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName("actionReset");
        actionReset->setEnabled(false);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionStart_Tournament = new QAction(MainWindow);
        actionStart_Tournament->setObjectName("actionStart_Tournament");
        actionStart_Tournament->setEnabled(false);
        actionIncluded_Games = new QAction(MainWindow);
        actionIncluded_Games->setObjectName("actionIncluded_Games");
        actionIncluded_Games->setEnabled(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Actions = new QVBoxLayout();
        Actions->setObjectName("Actions");
        LoginInfoScreen = new QFrame(centralwidget);
        LoginInfoScreen->setObjectName("LoginInfoScreen");
        LoginInfoScreen->setFrameShape(QFrame::Shape::StyledPanel);
        LoginInfoScreen->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(LoginInfoScreen);
        verticalLayout_3->setObjectName("verticalLayout_3");
        noLoginText = new QLabel(LoginInfoScreen);
        noLoginText->setObjectName("noLoginText");

        verticalLayout_3->addWidget(noLoginText);


        Actions->addWidget(LoginInfoScreen);

        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        Actions->addWidget(line);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        Randomize_Button = new QPushButton(centralwidget);
        Randomize_Button->setObjectName("Randomize_Button");
        Randomize_Button->setEnabled(false);

        horizontalLayout_6->addWidget(Randomize_Button);

        StartTournament_Button = new QPushButton(centralwidget);
        StartTournament_Button->setObjectName("StartTournament_Button");
        StartTournament_Button->setEnabled(false);

        horizontalLayout_6->addWidget(StartTournament_Button);


        Actions->addLayout(horizontalLayout_6);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        Actions->addWidget(line_2);

        Commands = new QFrame(centralwidget);
        Commands->setObjectName("Commands");
        Commands->setFrameShape(QFrame::Shape::StyledPanel);
        Commands->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_10 = new QVBoxLayout(Commands);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        Game1_VLayout = new QVBoxLayout();
        Game1_VLayout->setObjectName("Game1_VLayout");
        frame_3 = new QFrame(Commands);
        frame_3->setObjectName("frame_3");
        frame_3->setAutoFillBackground(false);
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");
        label_3->setFrameShape(QFrame::Shape::Panel);
        label_3->setTextFormat(Qt::TextFormat::RichText);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/assets/icons/question.png")));
        label_3->setScaledContents(true);

        verticalLayout_5->addWidget(label_3);


        Game1_VLayout->addWidget(frame_3);

        label_4 = new QLabel(Commands);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        Game1_VLayout->addWidget(label_4);

        Game1_Button = new QPushButton(Commands);
        Game1_Button->setObjectName("Game1_Button");
        Game1_Button->setEnabled(false);
        Game1_Button->setFlat(false);

        Game1_VLayout->addWidget(Game1_Button);


        horizontalLayout_5->addLayout(Game1_VLayout);

        line_3 = new QFrame(Commands);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_5->addWidget(line_3);

        Game2_VLayout = new QVBoxLayout();
        Game2_VLayout->setObjectName("Game2_VLayout");
        frame_4 = new QFrame(Commands);
        frame_4->setObjectName("frame_4");
        frame_4->setAutoFillBackground(false);
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_4);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_5 = new QLabel(frame_4);
        label_5->setObjectName("label_5");
        label_5->setFrameShape(QFrame::Shape::Panel);
        label_5->setTextFormat(Qt::TextFormat::RichText);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/icons/assets/icons/question.png")));
        label_5->setScaledContents(true);

        verticalLayout_9->addWidget(label_5);


        Game2_VLayout->addWidget(frame_4);

        label_6 = new QLabel(Commands);
        label_6->setObjectName("label_6");
        label_6->setWordWrap(true);

        Game2_VLayout->addWidget(label_6);

        Game2_Button = new QPushButton(Commands);
        Game2_Button->setObjectName("Game2_Button");
        Game2_Button->setEnabled(false);

        Game2_VLayout->addWidget(Game2_Button);


        horizontalLayout_5->addLayout(Game2_VLayout);


        verticalLayout_10->addLayout(horizontalLayout_5);

        verticalLayout_10->setStretch(0, 5);

        Actions->addWidget(Commands);

        Actions->setStretch(0, 3);
        Actions->setStretch(1, 1);
        Actions->setStretch(4, 5);

        horizontalLayout->addLayout(Actions);

        Tournament = new QTabWidget(centralwidget);
        Tournament->setObjectName("Tournament");
        Tournament->setEnabled(false);
        Tournament->setTabPosition(QTabWidget::TabPosition::North);
        Tournament->setMovable(false);
        tab_Brackets = new QWidget();
        tab_Brackets->setObjectName("tab_Brackets");
        Tournament->addTab(tab_Brackets, QString());
        tab_Results = new QWidget();
        tab_Results->setObjectName("tab_Results");
        Tournament->addTab(tab_Results, QString());

        horizontalLayout->addWidget(Tournament);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 10);

        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1112, 25));
        menuApp = new QMenu(menubar);
        menuApp->setObjectName("menuApp");
        menuApp->setToolTipsVisible(true);
        menuTournament = new QMenu(menubar);
        menuTournament->setObjectName("menuTournament");
        menuTournament->setToolTipsVisible(true);
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        menuAbout->setToolTipsVisible(true);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuApp->menuAction());
        menubar->addAction(menuTournament->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuApp->addAction(actionExit);
        menuTournament->addAction(actionStart_Tournament);
        menuTournament->addAction(actionReset);
        menuTournament->addAction(actionIncluded_Games);

        retranslateUi(MainWindow);

        Game1_Button->setDefault(false);
        Tournament->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Steam Library Tournament", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        actionReset->setToolTip(QCoreApplication::translate("MainWindow", "Clear the brackets to start a new tournament.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(tooltip)
        actionExit->setToolTip(QCoreApplication::translate("MainWindow", "Exit Steam Library Tournament.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionStart_Tournament->setText(QCoreApplication::translate("MainWindow", "Start Tournament", nullptr));
#if QT_CONFIG(tooltip)
        actionStart_Tournament->setToolTip(QCoreApplication::translate("MainWindow", "Starts a new tournament with current layout.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionIncluded_Games->setText(QCoreApplication::translate("MainWindow", "Contender List", nullptr));
#if QT_CONFIG(tooltip)
        actionIncluded_Games->setToolTip(QCoreApplication::translate("MainWindow", "Check, include and remove games in the contender list.", nullptr));
#endif // QT_CONFIG(tooltip)
        noLoginText->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">No Steam Game Library loaded.</p><p align=\"center\"><a href=\"store.steampowered.com/login\"><span style=\" text-decoration: underline; color:#007af4;\">Log in via Steam.</span></a></p></body></html>", nullptr));
        Randomize_Button->setText(QCoreApplication::translate("MainWindow", "Randomize Brackets", nullptr));
        StartTournament_Button->setText(QCoreApplication::translate("MainWindow", "Start Tournament", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Game 1</p></body></html>", nullptr));
        Game1_Button->setText(QCoreApplication::translate("MainWindow", "Choose this Game", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Game 2</p></body></html>", nullptr));
        Game2_Button->setText(QCoreApplication::translate("MainWindow", "Choose this Game", nullptr));
        Tournament->setTabText(Tournament->indexOf(tab_Brackets), QCoreApplication::translate("MainWindow", "Brackets", nullptr));
        Tournament->setTabText(Tournament->indexOf(tab_Results), QCoreApplication::translate("MainWindow", "Results", nullptr));
        menuApp->setTitle(QCoreApplication::translate("MainWindow", "Application", nullptr));
        menuTournament->setTitle(QCoreApplication::translate("MainWindow", "Tournament", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
