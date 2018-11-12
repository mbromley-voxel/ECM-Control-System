/********************************************************************************
** Form generated from reading UI file 'ECM_controller_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECM_CONTROLLER_GUI_H
#define UI_ECM_CONTROLLER_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "LED.h"
#include "plot_handler.h"

QT_BEGIN_NAMESPACE

class Ui_ECMControllerGUI
{
public:
    QAction *actionConnections;
    QAction *actionPower_Supply;
    QAction *actionPump;
    QAction *actionOscilliscope;
    QAction *actionTouchoff;
    QAction *actionOpen_Sensors_Window;
    QAction *actionClose;
    QAction *actionMotion_Profile;
    QAction *actionCustom_Motion_Commands;
    QAction *actionClear_All_Data;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QFrame *frame_ProfileOptions;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_RunExplicitProfile;
    QLineEdit *lineEdit_PartNumber_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_RunAutomatedProfile;
    QLineEdit *lineEdit_PartNumber_5;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_PartNumber;
    QLineEdit *lineEdit_PartNumber;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_PartNumber_2;
    QLineEdit *lineEdit_SerialNumber;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_PartNumber_3;
    QLineEdit *lineEdit_PartNumber_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_PartNumber_4;
    QLineEdit *lineEdit_PartNumber_3;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_Status;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    LED *widget_LEDHomed;
    LED *widget_LEDCommunication;
    LED *widget_LEDTouchoff;
    LED *widget_LEDESTOP;
    QLineEdit *lineEdit_GalilState;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_4;
    graphing::PlotHandler *widget_primaryPlot;
    graphing::PlotHandler *widget_primaryPlotVoltage;
    graphing::PlotHandler *widget_primaryPlotCurrent;
    QFrame *frame_MaunalControl;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_MotorEnable;
    QPushButton *pushButton_MotorDisable;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_ResetHome;
    QPushButton *pushButton_MoveHome;
    QPushButton *pushButton_Stop;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTools;
    QMenu *menuHelp;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ECMControllerGUI)
    {
        if (ECMControllerGUI->objectName().isEmpty())
            ECMControllerGUI->setObjectName(QStringLiteral("ECMControllerGUI"));
        ECMControllerGUI->resize(1040, 1004);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ECMControllerGUI->sizePolicy().hasHeightForWidth());
        ECMControllerGUI->setSizePolicy(sizePolicy);
        ECMControllerGUI->setMinimumSize(QSize(1040, 0));
        ECMControllerGUI->setMaximumSize(QSize(1040, 16777215));
        ECMControllerGUI->setStyleSheet(QLatin1String("QMenuBar{\n"
"background-color:#1d1d1d;\n"
"padding:5px;\n"
"	font: 12pt \"MS Shell Dlg 2\";\n"
"}\n"
"\n"
"QMenuBar::item{\n"
"background-color:#1d1d1d;\n"
"color:#fff;\n"
"padding:5px;\n"
"\n"
"}\n"
"\n"
"QMenu{\n"
"color:#fff;\n"
"padding:0;\n"
"}\n"
"\n"
"QMenu::item:selected{\n"
"color:#fff;\n"
"background-color:#00aba9;\n"
"}\n"
"\n"
"QTableWidget{\n"
"background-color:#3d3d3d;\n"
"color:#fff;\n"
"  selection-background-color: #da532c;\n"
"border:solid;\n"
"border-width:3px;\n"
"border-color:#da532c;\n"
"}\n"
"QHeaderView::section{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(20, 158, 217, 255), stop:1 rgba(36, 158, 217, 255));\n"
"border:none;\n"
"border-top-style:solid;\n"
"border-width:1px;\n"
"border-top-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(20, 158, 217, 255), stop:1 rgba(36, 158, 217, 255));\n"
"color:#fff;\n"
"\n"
"}\n"
"QHeaderView{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(20, 158, "
                        "217, 255), stop:1 rgba(36, 158, 217, 255));\n"
"\n"
"border:none;\n"
"border-top-style:solid;\n"
"border-width:1px;\n"
"border-top-color:#149ED9;\n"
"color:#fff;\n"
"	font: 75 12pt \"Calibri\";\n"
"}\n"
"\n"
"QTableCornerButton::section{\n"
"border:none;\n"
"background-color:#149ED9;\n"
"}\n"
"\n"
"QListWidget{\n"
"background-color:#3d3d3d;\n"
"color:#fff;\n"
"}\n"
"\n"
"QMenu{\n"
"background-color:#3d3d3d;\n"
"}\n"
"QStatusBar{\n"
"background-color:#7e3878;\n"
"color:#fff;\n"
"}\n"
"\n"
"QPushButton{\n"
"border-style:solid;\n"
"background-color:#3d3d3d;\n"
"color:#fff;\n"
"border-radius:7px;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"background-color: rgb(204, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"color:#ccc;\n"
"	background-color: qlineargradient(spread:pad, x1:0.517, y1:0, x2:0.517, y2:1, stop:0 rgba(45, 45, 45, 255), stop:0.505682 rgba(45, 45, 45, 255), stop:1 rgba(29, 29, 29, 255));\n"
"	border-color:#2d89ef;\n"
"border-width:2px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color: qlineargrad"
                        "ient(spread:pad, x1:0.517, y1:0, x2:0.517, y2:1, stop:0 rgba(29, 29, 29, 255), stop:0.505682 rgba(45, 45, 45, 255), stop:1 rgba(29, 29, 29, 255));\n"
"}\n"
"\n"
"\n"
"QTabWidget::tab{\n"
"background-color:#3d3d3d;\n"
"}\n"
"\n"
"QLineEdit{\n"
"border-radius:0;\n"
"}\n"
"\n"
"QProgressBar{\n"
"border-radius:0;\n"
"text-align:center;\n"
"color:#fff;\n"
"background-color:transparent;\n"
"border: 2px solid #e3a21a;\n"
"border-radius:7px;\n"
"	font: 75 12pt \"Open Sans\";\n"
"\n"
"}\n"
"\n"
"QProgressBar::chunk{\n"
"background-color:#2d89ef;\n"
"width:20px;\n"
"}"));
        actionConnections = new QAction(ECMControllerGUI);
        actionConnections->setObjectName(QStringLiteral("actionConnections"));
        actionConnections->setCheckable(true);
        actionPower_Supply = new QAction(ECMControllerGUI);
        actionPower_Supply->setObjectName(QStringLiteral("actionPower_Supply"));
        actionPower_Supply->setCheckable(true);
        actionPump = new QAction(ECMControllerGUI);
        actionPump->setObjectName(QStringLiteral("actionPump"));
        actionPump->setCheckable(true);
        actionOscilliscope = new QAction(ECMControllerGUI);
        actionOscilliscope->setObjectName(QStringLiteral("actionOscilliscope"));
        actionOscilliscope->setCheckable(true);
        actionTouchoff = new QAction(ECMControllerGUI);
        actionTouchoff->setObjectName(QStringLiteral("actionTouchoff"));
        actionTouchoff->setCheckable(true);
        actionOpen_Sensors_Window = new QAction(ECMControllerGUI);
        actionOpen_Sensors_Window->setObjectName(QStringLiteral("actionOpen_Sensors_Window"));
        actionOpen_Sensors_Window->setCheckable(true);
        actionClose = new QAction(ECMControllerGUI);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionMotion_Profile = new QAction(ECMControllerGUI);
        actionMotion_Profile->setObjectName(QStringLiteral("actionMotion_Profile"));
        actionMotion_Profile->setCheckable(true);
        actionCustom_Motion_Commands = new QAction(ECMControllerGUI);
        actionCustom_Motion_Commands->setObjectName(QStringLiteral("actionCustom_Motion_Commands"));
        actionCustom_Motion_Commands->setCheckable(true);
        actionClear_All_Data = new QAction(ECMControllerGUI);
        actionClear_All_Data->setObjectName(QStringLiteral("actionClear_All_Data"));
        centralWidget = new QWidget(ECMControllerGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        frame_ProfileOptions = new QFrame(centralWidget);
        frame_ProfileOptions->setObjectName(QStringLiteral("frame_ProfileOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_ProfileOptions->sizePolicy().hasHeightForWidth());
        frame_ProfileOptions->setSizePolicy(sizePolicy1);
        frame_ProfileOptions->setMinimumSize(QSize(490, 300));
        frame_ProfileOptions->setMaximumSize(QSize(490, 300));
        frame_ProfileOptions->setFrameShape(QFrame::Box);
        frame_ProfileOptions->setFrameShadow(QFrame::Plain);
        frame_ProfileOptions->setLineWidth(2);
        gridLayout_2 = new QGridLayout(frame_ProfileOptions);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButton_RunExplicitProfile = new QPushButton(frame_ProfileOptions);
        pushButton_RunExplicitProfile->setObjectName(QStringLiteral("pushButton_RunExplicitProfile"));
        sizePolicy1.setHeightForWidth(pushButton_RunExplicitProfile->sizePolicy().hasHeightForWidth());
        pushButton_RunExplicitProfile->setSizePolicy(sizePolicy1);
        pushButton_RunExplicitProfile->setMinimumSize(QSize(180, 30));
        QFont font;
        font.setPointSize(12);
        pushButton_RunExplicitProfile->setFont(font);

        horizontalLayout_6->addWidget(pushButton_RunExplicitProfile);

        lineEdit_PartNumber_4 = new QLineEdit(frame_ProfileOptions);
        lineEdit_PartNumber_4->setObjectName(QStringLiteral("lineEdit_PartNumber_4"));
        sizePolicy1.setHeightForWidth(lineEdit_PartNumber_4->sizePolicy().hasHeightForWidth());
        lineEdit_PartNumber_4->setSizePolicy(sizePolicy1);
        lineEdit_PartNumber_4->setMinimumSize(QSize(200, 30));
        lineEdit_PartNumber_4->setMaximumSize(QSize(400, 30));
        QFont font1;
        font1.setPointSize(10);
        lineEdit_PartNumber_4->setFont(font1);
        lineEdit_PartNumber_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(lineEdit_PartNumber_4);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_RunAutomatedProfile = new QPushButton(frame_ProfileOptions);
        pushButton_RunAutomatedProfile->setObjectName(QStringLiteral("pushButton_RunAutomatedProfile"));
        sizePolicy1.setHeightForWidth(pushButton_RunAutomatedProfile->sizePolicy().hasHeightForWidth());
        pushButton_RunAutomatedProfile->setSizePolicy(sizePolicy1);
        pushButton_RunAutomatedProfile->setMinimumSize(QSize(180, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton_RunAutomatedProfile->setFont(font2);
        pushButton_RunAutomatedProfile->setToolTipDuration(-1);

        horizontalLayout_5->addWidget(pushButton_RunAutomatedProfile);

        lineEdit_PartNumber_5 = new QLineEdit(frame_ProfileOptions);
        lineEdit_PartNumber_5->setObjectName(QStringLiteral("lineEdit_PartNumber_5"));
        sizePolicy1.setHeightForWidth(lineEdit_PartNumber_5->sizePolicy().hasHeightForWidth());
        lineEdit_PartNumber_5->setSizePolicy(sizePolicy1);
        lineEdit_PartNumber_5->setMinimumSize(QSize(200, 30));
        lineEdit_PartNumber_5->setMaximumSize(QSize(400, 30));
        lineEdit_PartNumber_5->setFont(font1);
        lineEdit_PartNumber_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lineEdit_PartNumber_5);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_8->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_8, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_PartNumber = new QLabel(frame_ProfileOptions);
        label_PartNumber->setObjectName(QStringLiteral("label_PartNumber"));
        sizePolicy1.setHeightForWidth(label_PartNumber->sizePolicy().hasHeightForWidth());
        label_PartNumber->setSizePolicy(sizePolicy1);
        label_PartNumber->setMinimumSize(QSize(180, 25));
        label_PartNumber->setMaximumSize(QSize(180, 25));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        label_PartNumber->setFont(font3);
        label_PartNumber->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_PartNumber);

        lineEdit_PartNumber = new QLineEdit(frame_ProfileOptions);
        lineEdit_PartNumber->setObjectName(QStringLiteral("lineEdit_PartNumber"));
        sizePolicy1.setHeightForWidth(lineEdit_PartNumber->sizePolicy().hasHeightForWidth());
        lineEdit_PartNumber->setSizePolicy(sizePolicy1);
        lineEdit_PartNumber->setMinimumSize(QSize(180, 30));
        lineEdit_PartNumber->setMaximumSize(QSize(180, 30));
        lineEdit_PartNumber->setFont(font1);
        lineEdit_PartNumber->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lineEdit_PartNumber);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_PartNumber_2 = new QLabel(frame_ProfileOptions);
        label_PartNumber_2->setObjectName(QStringLiteral("label_PartNumber_2"));
        sizePolicy1.setHeightForWidth(label_PartNumber_2->sizePolicy().hasHeightForWidth());
        label_PartNumber_2->setSizePolicy(sizePolicy1);
        label_PartNumber_2->setMinimumSize(QSize(180, 25));
        label_PartNumber_2->setMaximumSize(QSize(180, 25));
        label_PartNumber_2->setFont(font3);
        label_PartNumber_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_PartNumber_2);

        lineEdit_SerialNumber = new QLineEdit(frame_ProfileOptions);
        lineEdit_SerialNumber->setObjectName(QStringLiteral("lineEdit_SerialNumber"));
        sizePolicy1.setHeightForWidth(lineEdit_SerialNumber->sizePolicy().hasHeightForWidth());
        lineEdit_SerialNumber->setSizePolicy(sizePolicy1);
        lineEdit_SerialNumber->setMinimumSize(QSize(180, 30));
        lineEdit_SerialNumber->setMaximumSize(QSize(180, 30));
        lineEdit_SerialNumber->setFont(font1);
        lineEdit_SerialNumber->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lineEdit_SerialNumber);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_PartNumber_3 = new QLabel(frame_ProfileOptions);
        label_PartNumber_3->setObjectName(QStringLiteral("label_PartNumber_3"));
        sizePolicy1.setHeightForWidth(label_PartNumber_3->sizePolicy().hasHeightForWidth());
        label_PartNumber_3->setSizePolicy(sizePolicy1);
        label_PartNumber_3->setMinimumSize(QSize(180, 25));
        label_PartNumber_3->setMaximumSize(QSize(180, 25));
        label_PartNumber_3->setFont(font3);
        label_PartNumber_3->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_PartNumber_3);

        lineEdit_PartNumber_2 = new QLineEdit(frame_ProfileOptions);
        lineEdit_PartNumber_2->setObjectName(QStringLiteral("lineEdit_PartNumber_2"));
        sizePolicy1.setHeightForWidth(lineEdit_PartNumber_2->sizePolicy().hasHeightForWidth());
        lineEdit_PartNumber_2->setSizePolicy(sizePolicy1);
        lineEdit_PartNumber_2->setMinimumSize(QSize(180, 30));
        lineEdit_PartNumber_2->setMaximumSize(QSize(180, 30));
        lineEdit_PartNumber_2->setFont(font1);
        lineEdit_PartNumber_2->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lineEdit_PartNumber_2);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_PartNumber_4 = new QLabel(frame_ProfileOptions);
        label_PartNumber_4->setObjectName(QStringLiteral("label_PartNumber_4"));
        sizePolicy1.setHeightForWidth(label_PartNumber_4->sizePolicy().hasHeightForWidth());
        label_PartNumber_4->setSizePolicy(sizePolicy1);
        label_PartNumber_4->setMinimumSize(QSize(180, 25));
        label_PartNumber_4->setMaximumSize(QSize(180, 25));
        label_PartNumber_4->setFont(font3);
        label_PartNumber_4->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_PartNumber_4);

        lineEdit_PartNumber_3 = new QLineEdit(frame_ProfileOptions);
        lineEdit_PartNumber_3->setObjectName(QStringLiteral("lineEdit_PartNumber_3"));
        sizePolicy1.setHeightForWidth(lineEdit_PartNumber_3->sizePolicy().hasHeightForWidth());
        lineEdit_PartNumber_3->setSizePolicy(sizePolicy1);
        lineEdit_PartNumber_3->setMinimumSize(QSize(180, 30));
        lineEdit_PartNumber_3->setMaximumSize(QSize(180, 30));
        lineEdit_PartNumber_3->setFont(font1);
        lineEdit_PartNumber_3->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lineEdit_PartNumber_3);


        horizontalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout_8);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 67, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);


        gridLayout_3->addWidget(frame_ProfileOptions, 1, 0, 1, 1);

        frame_Status = new QFrame(centralWidget);
        frame_Status->setObjectName(QStringLiteral("frame_Status"));
        sizePolicy1.setHeightForWidth(frame_Status->sizePolicy().hasHeightForWidth());
        frame_Status->setSizePolicy(sizePolicy1);
        frame_Status->setMinimumSize(QSize(180, 300));
        frame_Status->setMaximumSize(QSize(180, 300));
        frame_Status->setFrameShape(QFrame::Box);
        frame_Status->setFrameShadow(QFrame::Plain);
        frame_Status->setLineWidth(2);
        gridLayout = new QGridLayout(frame_Status);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label_2 = new QLabel(frame_Status);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(110, 32));
        label_2->setMaximumSize(QSize(110, 32));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(frame_Status);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(110, 32));
        label_3->setMaximumSize(QSize(110, 32));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 1, 1, 1, 1);

        label_4 = new QLabel(frame_Status);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(110, 32));
        label_4->setMaximumSize(QSize(110, 32));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_4, 2, 1, 1, 1);

        label_5 = new QLabel(frame_Status);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMinimumSize(QSize(110, 32));
        label_5->setMaximumSize(QSize(110, 32));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_5, 3, 1, 1, 1);

        widget_LEDHomed = new LED(frame_Status);
        widget_LEDHomed->setObjectName(QStringLiteral("widget_LEDHomed"));
        sizePolicy1.setHeightForWidth(widget_LEDHomed->sizePolicy().hasHeightForWidth());
        widget_LEDHomed->setSizePolicy(sizePolicy1);
        widget_LEDHomed->setMinimumSize(QSize(32, 32));
        widget_LEDHomed->setMaximumSize(QSize(32, 32));

        gridLayout_5->addWidget(widget_LEDHomed, 1, 0, 1, 1);

        widget_LEDCommunication = new LED(frame_Status);
        widget_LEDCommunication->setObjectName(QStringLiteral("widget_LEDCommunication"));
        sizePolicy1.setHeightForWidth(widget_LEDCommunication->sizePolicy().hasHeightForWidth());
        widget_LEDCommunication->setSizePolicy(sizePolicy1);
        widget_LEDCommunication->setMinimumSize(QSize(32, 32));
        widget_LEDCommunication->setMaximumSize(QSize(32, 32));

        gridLayout_5->addWidget(widget_LEDCommunication, 0, 0, 1, 1);

        widget_LEDTouchoff = new LED(frame_Status);
        widget_LEDTouchoff->setObjectName(QStringLiteral("widget_LEDTouchoff"));
        sizePolicy1.setHeightForWidth(widget_LEDTouchoff->sizePolicy().hasHeightForWidth());
        widget_LEDTouchoff->setSizePolicy(sizePolicy1);
        widget_LEDTouchoff->setMinimumSize(QSize(32, 32));
        widget_LEDTouchoff->setMaximumSize(QSize(32, 32));

        gridLayout_5->addWidget(widget_LEDTouchoff, 2, 0, 1, 1);

        widget_LEDESTOP = new LED(frame_Status);
        widget_LEDESTOP->setObjectName(QStringLiteral("widget_LEDESTOP"));
        sizePolicy1.setHeightForWidth(widget_LEDESTOP->sizePolicy().hasHeightForWidth());
        widget_LEDESTOP->setSizePolicy(sizePolicy1);
        widget_LEDESTOP->setMinimumSize(QSize(32, 32));
        widget_LEDESTOP->setMaximumSize(QSize(32, 32));

        gridLayout_5->addWidget(widget_LEDESTOP, 3, 0, 1, 1);


        gridLayout->addLayout(gridLayout_5, 0, 0, 1, 1);

        lineEdit_GalilState = new QLineEdit(frame_Status);
        lineEdit_GalilState->setObjectName(QStringLiteral("lineEdit_GalilState"));
        sizePolicy1.setHeightForWidth(lineEdit_GalilState->sizePolicy().hasHeightForWidth());
        lineEdit_GalilState->setSizePolicy(sizePolicy1);
        lineEdit_GalilState->setMinimumSize(QSize(160, 32));
        lineEdit_GalilState->setMaximumSize(QSize(160, 32));
        lineEdit_GalilState->setFont(font1);
        lineEdit_GalilState->setAlignment(Qt::AlignCenter);
        lineEdit_GalilState->setReadOnly(true);

        gridLayout->addWidget(lineEdit_GalilState, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_3->addWidget(frame_Status, 1, 3, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        widget_primaryPlot = new graphing::PlotHandler(centralWidget);
        widget_primaryPlot->setObjectName(QStringLiteral("widget_primaryPlot"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_primaryPlot->sizePolicy().hasHeightForWidth());
        widget_primaryPlot->setSizePolicy(sizePolicy2);
        widget_primaryPlot->setMinimumSize(QSize(1020, 300));
        widget_primaryPlot->setMaximumSize(QSize(1020, 16777215));

        gridLayout_4->addWidget(widget_primaryPlot, 0, 0, 1, 2);

        widget_primaryPlotVoltage = new graphing::PlotHandler(centralWidget);
        widget_primaryPlotVoltage->setObjectName(QStringLiteral("widget_primaryPlotVoltage"));
        sizePolicy2.setHeightForWidth(widget_primaryPlotVoltage->sizePolicy().hasHeightForWidth());
        widget_primaryPlotVoltage->setSizePolicy(sizePolicy2);
        widget_primaryPlotVoltage->setMinimumSize(QSize(505, 300));
        widget_primaryPlotVoltage->setMaximumSize(QSize(1020, 16777215));

        gridLayout_4->addWidget(widget_primaryPlotVoltage, 1, 0, 1, 1);

        widget_primaryPlotCurrent = new graphing::PlotHandler(centralWidget);
        widget_primaryPlotCurrent->setObjectName(QStringLiteral("widget_primaryPlotCurrent"));
        sizePolicy2.setHeightForWidth(widget_primaryPlotCurrent->sizePolicy().hasHeightForWidth());
        widget_primaryPlotCurrent->setSizePolicy(sizePolicy2);
        widget_primaryPlotCurrent->setMinimumSize(QSize(505, 300));
        widget_primaryPlotCurrent->setMaximumSize(QSize(1020, 16777215));

        gridLayout_4->addWidget(widget_primaryPlotCurrent, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 0, 0, 1, 4);

        frame_MaunalControl = new QFrame(centralWidget);
        frame_MaunalControl->setObjectName(QStringLiteral("frame_MaunalControl"));
        sizePolicy1.setHeightForWidth(frame_MaunalControl->sizePolicy().hasHeightForWidth());
        frame_MaunalControl->setSizePolicy(sizePolicy1);
        frame_MaunalControl->setMinimumSize(QSize(340, 300));
        frame_MaunalControl->setMaximumSize(QSize(340, 300));
        frame_MaunalControl->setFrameShape(QFrame::Box);
        frame_MaunalControl->setFrameShadow(QFrame::Plain);
        frame_MaunalControl->setLineWidth(2);
        gridLayout_6 = new QGridLayout(frame_MaunalControl);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_MotorEnable = new QPushButton(frame_MaunalControl);
        pushButton_MotorEnable->setObjectName(QStringLiteral("pushButton_MotorEnable"));
        sizePolicy1.setHeightForWidth(pushButton_MotorEnable->sizePolicy().hasHeightForWidth());
        pushButton_MotorEnable->setSizePolicy(sizePolicy1);
        pushButton_MotorEnable->setMinimumSize(QSize(130, 30));
        pushButton_MotorEnable->setMaximumSize(QSize(130, 30));
        pushButton_MotorEnable->setFont(font);

        horizontalLayout->addWidget(pushButton_MotorEnable);

        pushButton_MotorDisable = new QPushButton(frame_MaunalControl);
        pushButton_MotorDisable->setObjectName(QStringLiteral("pushButton_MotorDisable"));
        sizePolicy1.setHeightForWidth(pushButton_MotorDisable->sizePolicy().hasHeightForWidth());
        pushButton_MotorDisable->setSizePolicy(sizePolicy1);
        pushButton_MotorDisable->setMinimumSize(QSize(130, 30));
        pushButton_MotorDisable->setMaximumSize(QSize(130, 30));
        pushButton_MotorDisable->setFont(font);

        horizontalLayout->addWidget(pushButton_MotorDisable);


        gridLayout_6->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_ResetHome = new QPushButton(frame_MaunalControl);
        pushButton_ResetHome->setObjectName(QStringLiteral("pushButton_ResetHome"));
        sizePolicy1.setHeightForWidth(pushButton_ResetHome->sizePolicy().hasHeightForWidth());
        pushButton_ResetHome->setSizePolicy(sizePolicy1);
        pushButton_ResetHome->setMinimumSize(QSize(130, 30));
        pushButton_ResetHome->setMaximumSize(QSize(130, 30));
        pushButton_ResetHome->setFont(font);

        horizontalLayout_2->addWidget(pushButton_ResetHome);

        pushButton_MoveHome = new QPushButton(frame_MaunalControl);
        pushButton_MoveHome->setObjectName(QStringLiteral("pushButton_MoveHome"));
        sizePolicy1.setHeightForWidth(pushButton_MoveHome->sizePolicy().hasHeightForWidth());
        pushButton_MoveHome->setSizePolicy(sizePolicy1);
        pushButton_MoveHome->setMinimumSize(QSize(130, 30));
        pushButton_MoveHome->setMaximumSize(QSize(130, 30));
        pushButton_MoveHome->setFont(font);

        horizontalLayout_2->addWidget(pushButton_MoveHome);


        gridLayout_6->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        pushButton_Stop = new QPushButton(frame_MaunalControl);
        pushButton_Stop->setObjectName(QStringLiteral("pushButton_Stop"));
        pushButton_Stop->setMinimumSize(QSize(120, 50));
        pushButton_Stop->setMaximumSize(QSize(120, 50));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_Stop->setFont(font4);

        gridLayout_6->addWidget(pushButton_Stop, 2, 0, 1, 1);


        gridLayout_3->addWidget(frame_MaunalControl, 1, 2, 1, 1);

        ECMControllerGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ECMControllerGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1040, 40));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        ECMControllerGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ECMControllerGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ECMControllerGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ECMControllerGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ECMControllerGUI->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionClose);
        menuTools->addAction(actionConnections);
        menuTools->addSeparator();
        menuTools->addAction(actionPower_Supply);
        menuTools->addAction(actionPump);
        menuTools->addAction(actionOscilliscope);
        menuTools->addSeparator();
        menuTools->addAction(actionTouchoff);
        menuTools->addAction(actionMotion_Profile);
        menuTools->addSeparator();
        menuTools->addAction(actionCustom_Motion_Commands);
        menuView->addAction(actionOpen_Sensors_Window);
        menuView->addSeparator();
        menuView->addAction(actionClear_All_Data);
        menuView->addSeparator();

        retranslateUi(ECMControllerGUI);

        QMetaObject::connectSlotsByName(ECMControllerGUI);
    } // setupUi

    void retranslateUi(QMainWindow *ECMControllerGUI)
    {
        ECMControllerGUI->setWindowTitle(QApplication::translate("ECMControllerGUI", "ECMControllerGUI", nullptr));
        actionConnections->setText(QApplication::translate("ECMControllerGUI", "Connections", nullptr));
        actionPower_Supply->setText(QApplication::translate("ECMControllerGUI", "Power Supply", nullptr));
        actionPump->setText(QApplication::translate("ECMControllerGUI", "Pump", nullptr));
        actionOscilliscope->setText(QApplication::translate("ECMControllerGUI", "Oscilliscope", nullptr));
        actionTouchoff->setText(QApplication::translate("ECMControllerGUI", "Touchoff", nullptr));
        actionOpen_Sensors_Window->setText(QApplication::translate("ECMControllerGUI", "Open Sensors Window", nullptr));
        actionClose->setText(QApplication::translate("ECMControllerGUI", "Close", nullptr));
        actionMotion_Profile->setText(QApplication::translate("ECMControllerGUI", "Motion Profile", nullptr));
        actionCustom_Motion_Commands->setText(QApplication::translate("ECMControllerGUI", "Custom Motion Commands", nullptr));
        actionClear_All_Data->setText(QApplication::translate("ECMControllerGUI", "Clear All Data", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_RunExplicitProfile->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton_RunExplicitProfile->setText(QApplication::translate("ECMControllerGUI", "Load Configuration", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_PartNumber_4->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineEdit_PartNumber_4->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_PartNumber_4->setText(QApplication::translate("ECMControllerGUI", "Configuration Path", nullptr));
#ifndef QT_NO_TOOLTIP
        pushButton_RunAutomatedProfile->setToolTip(QApplication::translate("ECMControllerGUI", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt;\">Execute a profile while performing appropriate setup checks autonomously.<br/></span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_RunAutomatedProfile->setWhatsThis(QApplication::translate("ECMControllerGUI", "<html><head/><body><p>What does this actually do?</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        pushButton_RunAutomatedProfile->setText(QApplication::translate("ECMControllerGUI", "Run Configuration", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_PartNumber_5->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineEdit_PartNumber_5->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_PartNumber_5->setText(QApplication::translate("ECMControllerGUI", "Profile Time:", nullptr));
        label_PartNumber->setText(QApplication::translate("ECMControllerGUI", "Part Number:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_PartNumber->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineEdit_PartNumber->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_PartNumber->setText(QApplication::translate("ECMControllerGUI", "DEFAULT PART #", nullptr));
        label_PartNumber_2->setText(QApplication::translate("ECMControllerGUI", "Serial Number:", nullptr));
        lineEdit_SerialNumber->setText(QApplication::translate("ECMControllerGUI", "DEFAULT SERIAL #", nullptr));
        label_PartNumber_3->setText(QApplication::translate("ECMControllerGUI", "Profile Number:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_PartNumber_2->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineEdit_PartNumber_2->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_PartNumber_2->setText(QApplication::translate("ECMControllerGUI", "0", nullptr));
        label_PartNumber_4->setText(QApplication::translate("ECMControllerGUI", "of Profiles Detected:", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_PartNumber_3->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        lineEdit_PartNumber_3->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        lineEdit_PartNumber_3->setText(QApplication::translate("ECMControllerGUI", "0", nullptr));
        label_2->setText(QApplication::translate("ECMControllerGUI", "COMMUNICATION", nullptr));
        label_3->setText(QApplication::translate("ECMControllerGUI", "HOMED", nullptr));
        label_4->setText(QApplication::translate("ECMControllerGUI", "TOUCHOFF", nullptr));
        label_5->setText(QApplication::translate("ECMControllerGUI", "ESTOP", nullptr));
        pushButton_MotorEnable->setText(QApplication::translate("ECMControllerGUI", "ENABLE MOTOR", nullptr));
        pushButton_MotorDisable->setText(QApplication::translate("ECMControllerGUI", "DISABLE MOTOR", nullptr));
        pushButton_ResetHome->setText(QApplication::translate("ECMControllerGUI", "RESET HOME", nullptr));
        pushButton_MoveHome->setText(QApplication::translate("ECMControllerGUI", "MOVE HOME", nullptr));
        pushButton_Stop->setText(QApplication::translate("ECMControllerGUI", "STOP", nullptr));
        menuFile->setTitle(QApplication::translate("ECMControllerGUI", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("ECMControllerGUI", "Edit", nullptr));
        menuTools->setTitle(QApplication::translate("ECMControllerGUI", "Tools", nullptr));
        menuHelp->setTitle(QApplication::translate("ECMControllerGUI", "Help", nullptr));
        menuView->setTitle(QApplication::translate("ECMControllerGUI", "Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ECMControllerGUI: public Ui_ECMControllerGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECM_CONTROLLER_GUI_H
