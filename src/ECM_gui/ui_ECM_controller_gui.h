/********************************************************************************
** Form generated from reading UI file 'ECM_controller_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECM_CONTROLLER_GUI_H
#define UI_ECM_CONTROLLER_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ECMControllerGUI
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_8;
    QWidget *widget_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QFrame *frame_ProfileOptions;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_RunProfile;
    QSplitter *splitter_2;
    QLabel *label_ManualControl_2;
    QComboBox *comboBox_ProgramProfiles;
    QTabWidget *tabWidget;
    QWidget *tab_linearParams;
    QGridLayout *gridLayout_5;
    QFormLayout *formLayout_2;
    QLabel *label_CutDepth;
    QLabel *label_CutSpeed;
    QSpinBox *spinBox_CutSpeed;
    QDoubleSpinBox *doubleSpinBox_CutDepth;
    QWidget *tab_vibrationParams;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_RetractSpeed;
    QSpinBox *spinBox_RetractSpeed;
    QLabel *label_PlungeSpeed;
    QSpinBox *spinBox_PlungeSpeed;
    QLabel *label_RetractDistance;
    QDoubleSpinBox *doubleSpinBox_RetractDistance;
    QLabel *label_StepSize;
    QDoubleSpinBox *doubleSpinBox_StepSize;
    QLabel *label_RetractPeriod;
    QSpinBox *spinBox_RetractPeriod;
    QLabel *label_Pause;
    QSpinBox *spinBox_Pause;
    QPushButton *pushButton_UploadProgram;
    QFormLayout *formLayout_3;
    QPushButton *pushButton_EstablishTouchoff;
    QWidget *widget;
    QPushButton *pushButton_DownloadProgram;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_MaunalControl;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_ManualControl;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *pushButton_ResetHome;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_MoveHome;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_GalilState;
    QSpacerItem *horizontalSpacer_13;
    QLineEdit *lineEdit_MachinePosition;
    QGridLayout *gridLayout;
    QLabel *label_ManualControl_4;
    QLabel *label_ManualControl_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_9;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_IncreaseRelativeMove;
    QSpinBox *spinBox_RelativeMove;
    QPushButton *pushButton_DecreaseRelativeMove;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_IncreaseJog;
    QSpinBox *spinBox_Jog;
    QPushButton *pushButton_DecreaseJog;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_MotorDisable;
    QPushButton *pushButton_MotorEnable;
    QFrame *frame_MotorControl;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QFrame *frame_DIO;
    QLabel *label_ManualControl_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ECMControllerGUI)
    {
        if (ECMControllerGUI->objectName().isEmpty())
            ECMControllerGUI->setObjectName(QStringLiteral("ECMControllerGUI"));
        ECMControllerGUI->resize(1040, 727);
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
        centralWidget = new QWidget(ECMControllerGUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_8 = new QGridLayout(centralWidget);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMinimumSize(QSize(1020, 300));
        widget_2->setMaximumSize(QSize(1020, 16777215));

        gridLayout_8->addWidget(widget_2, 0, 0, 1, 3);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setMinimumSize(QSize(490, 25));
        lineEdit->setMaximumSize(QSize(490, 25));
        QFont font;
        font.setPointSize(10);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(true);

        gridLayout_8->addWidget(lineEdit, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);
        lineEdit_2->setMinimumSize(QSize(490, 25));
        lineEdit_2->setMaximumSize(QSize(490, 25));
        lineEdit_2->setFont(font);
        lineEdit_2->setReadOnly(true);

        gridLayout_8->addWidget(lineEdit_2, 1, 1, 1, 2);

        frame_ProfileOptions = new QFrame(centralWidget);
        frame_ProfileOptions->setObjectName(QStringLiteral("frame_ProfileOptions"));
        sizePolicy2.setHeightForWidth(frame_ProfileOptions->sizePolicy().hasHeightForWidth());
        frame_ProfileOptions->setSizePolicy(sizePolicy2);
        frame_ProfileOptions->setMinimumSize(QSize(490, 300));
        frame_ProfileOptions->setMaximumSize(QSize(490, 300));
        frame_ProfileOptions->setFrameShape(QFrame::Box);
        frame_ProfileOptions->setFrameShadow(QFrame::Plain);
        frame_ProfileOptions->setLineWidth(2);
        gridLayout_7 = new QGridLayout(frame_ProfileOptions);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pushButton_RunProfile = new QPushButton(frame_ProfileOptions);
        pushButton_RunProfile->setObjectName(QStringLiteral("pushButton_RunProfile"));
        sizePolicy2.setHeightForWidth(pushButton_RunProfile->sizePolicy().hasHeightForWidth());
        pushButton_RunProfile->setSizePolicy(sizePolicy2);
        pushButton_RunProfile->setMinimumSize(QSize(180, 30));
        QFont font1;
        font1.setPointSize(12);
        pushButton_RunProfile->setFont(font1);

        gridLayout_7->addWidget(pushButton_RunProfile, 0, 1, 2, 1);

        splitter_2 = new QSplitter(frame_ProfileOptions);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_ManualControl_2 = new QLabel(splitter_2);
        label_ManualControl_2->setObjectName(QStringLiteral("label_ManualControl_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_ManualControl_2->sizePolicy().hasHeightForWidth());
        label_ManualControl_2->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_ManualControl_2->setFont(font2);
        label_ManualControl_2->setAlignment(Qt::AlignCenter);
        splitter_2->addWidget(label_ManualControl_2);

        gridLayout_7->addWidget(splitter_2, 0, 0, 1, 1);

        comboBox_ProgramProfiles = new QComboBox(frame_ProfileOptions);
        comboBox_ProgramProfiles->setObjectName(QStringLiteral("comboBox_ProgramProfiles"));
        comboBox_ProgramProfiles->setMinimumSize(QSize(180, 30));

        gridLayout_7->addWidget(comboBox_ProgramProfiles, 2, 1, 1, 1);

        tabWidget = new QTabWidget(frame_ProfileOptions);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMinimumSize(QSize(280, 160));
        tabWidget->setMaximumSize(QSize(280, 350));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab_linearParams = new QWidget();
        tab_linearParams->setObjectName(QStringLiteral("tab_linearParams"));
        gridLayout_5 = new QGridLayout(tab_linearParams);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_CutDepth = new QLabel(tab_linearParams);
        label_CutDepth->setObjectName(QStringLiteral("label_CutDepth"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_CutDepth->sizePolicy().hasHeightForWidth());
        label_CutDepth->setSizePolicy(sizePolicy4);
        label_CutDepth->setMinimumSize(QSize(145, 25));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_CutDepth->setFont(font3);
        label_CutDepth->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_CutDepth);

        label_CutSpeed = new QLabel(tab_linearParams);
        label_CutSpeed->setObjectName(QStringLiteral("label_CutSpeed"));
        sizePolicy4.setHeightForWidth(label_CutSpeed->sizePolicy().hasHeightForWidth());
        label_CutSpeed->setSizePolicy(sizePolicy4);
        label_CutSpeed->setMinimumSize(QSize(145, 25));
        label_CutSpeed->setFont(font3);
        label_CutSpeed->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_CutSpeed);

        spinBox_CutSpeed = new QSpinBox(tab_linearParams);
        spinBox_CutSpeed->setObjectName(QStringLiteral("spinBox_CutSpeed"));
        sizePolicy2.setHeightForWidth(spinBox_CutSpeed->sizePolicy().hasHeightForWidth());
        spinBox_CutSpeed->setSizePolicy(sizePolicy2);
        spinBox_CutSpeed->setMinimumSize(QSize(100, 25));
        spinBox_CutSpeed->setFont(font);
        spinBox_CutSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_CutSpeed->setMinimum(1);
        spinBox_CutSpeed->setMaximum(10000);
        spinBox_CutSpeed->setSingleStep(10);
        spinBox_CutSpeed->setValue(100);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBox_CutSpeed);

        doubleSpinBox_CutDepth = new QDoubleSpinBox(tab_linearParams);
        doubleSpinBox_CutDepth->setObjectName(QStringLiteral("doubleSpinBox_CutDepth"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_CutDepth->sizePolicy().hasHeightForWidth());
        doubleSpinBox_CutDepth->setSizePolicy(sizePolicy2);
        doubleSpinBox_CutDepth->setMinimumSize(QSize(100, 25));
        doubleSpinBox_CutDepth->setFont(font);
        doubleSpinBox_CutDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, doubleSpinBox_CutDepth);


        gridLayout_5->addLayout(formLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_linearParams, QString());
        tab_vibrationParams = new QWidget();
        tab_vibrationParams->setObjectName(QStringLiteral("tab_vibrationParams"));
        layoutWidget = new QWidget(tab_vibrationParams);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 9, 253, 182));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_RetractSpeed = new QLabel(layoutWidget);
        label_RetractSpeed->setObjectName(QStringLiteral("label_RetractSpeed"));
        sizePolicy4.setHeightForWidth(label_RetractSpeed->sizePolicy().hasHeightForWidth());
        label_RetractSpeed->setSizePolicy(sizePolicy4);
        label_RetractSpeed->setMinimumSize(QSize(145, 25));
        label_RetractSpeed->setFont(font3);
        label_RetractSpeed->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_RetractSpeed);

        spinBox_RetractSpeed = new QSpinBox(layoutWidget);
        spinBox_RetractSpeed->setObjectName(QStringLiteral("spinBox_RetractSpeed"));
        sizePolicy2.setHeightForWidth(spinBox_RetractSpeed->sizePolicy().hasHeightForWidth());
        spinBox_RetractSpeed->setSizePolicy(sizePolicy2);
        spinBox_RetractSpeed->setMinimumSize(QSize(100, 25));
        spinBox_RetractSpeed->setFont(font);
        spinBox_RetractSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_RetractSpeed->setMinimum(0);
        spinBox_RetractSpeed->setMaximum(10000);
        spinBox_RetractSpeed->setSingleStep(10);
        spinBox_RetractSpeed->setValue(0);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox_RetractSpeed);

        label_PlungeSpeed = new QLabel(layoutWidget);
        label_PlungeSpeed->setObjectName(QStringLiteral("label_PlungeSpeed"));
        sizePolicy4.setHeightForWidth(label_PlungeSpeed->sizePolicy().hasHeightForWidth());
        label_PlungeSpeed->setSizePolicy(sizePolicy4);
        label_PlungeSpeed->setMinimumSize(QSize(145, 25));
        label_PlungeSpeed->setFont(font3);
        label_PlungeSpeed->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_PlungeSpeed);

        spinBox_PlungeSpeed = new QSpinBox(layoutWidget);
        spinBox_PlungeSpeed->setObjectName(QStringLiteral("spinBox_PlungeSpeed"));
        sizePolicy2.setHeightForWidth(spinBox_PlungeSpeed->sizePolicy().hasHeightForWidth());
        spinBox_PlungeSpeed->setSizePolicy(sizePolicy2);
        spinBox_PlungeSpeed->setMinimumSize(QSize(100, 25));
        spinBox_PlungeSpeed->setFont(font);
        spinBox_PlungeSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_PlungeSpeed->setMinimum(0);
        spinBox_PlungeSpeed->setMaximum(10000);
        spinBox_PlungeSpeed->setSingleStep(10);
        spinBox_PlungeSpeed->setValue(0);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox_PlungeSpeed);

        label_RetractDistance = new QLabel(layoutWidget);
        label_RetractDistance->setObjectName(QStringLiteral("label_RetractDistance"));
        sizePolicy4.setHeightForWidth(label_RetractDistance->sizePolicy().hasHeightForWidth());
        label_RetractDistance->setSizePolicy(sizePolicy4);
        label_RetractDistance->setMinimumSize(QSize(145, 25));
        label_RetractDistance->setFont(font3);
        label_RetractDistance->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_RetractDistance);

        doubleSpinBox_RetractDistance = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_RetractDistance->setObjectName(QStringLiteral("doubleSpinBox_RetractDistance"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_RetractDistance->sizePolicy().hasHeightForWidth());
        doubleSpinBox_RetractDistance->setSizePolicy(sizePolicy2);
        doubleSpinBox_RetractDistance->setMinimumSize(QSize(100, 25));
        doubleSpinBox_RetractDistance->setFont(font);
        doubleSpinBox_RetractDistance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox_RetractDistance);

        label_StepSize = new QLabel(layoutWidget);
        label_StepSize->setObjectName(QStringLiteral("label_StepSize"));
        sizePolicy4.setHeightForWidth(label_StepSize->sizePolicy().hasHeightForWidth());
        label_StepSize->setSizePolicy(sizePolicy4);
        label_StepSize->setMinimumSize(QSize(145, 25));
        label_StepSize->setFont(font3);
        label_StepSize->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_StepSize);

        doubleSpinBox_StepSize = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_StepSize->setObjectName(QStringLiteral("doubleSpinBox_StepSize"));
        sizePolicy2.setHeightForWidth(doubleSpinBox_StepSize->sizePolicy().hasHeightForWidth());
        doubleSpinBox_StepSize->setSizePolicy(sizePolicy2);
        doubleSpinBox_StepSize->setMinimumSize(QSize(100, 25));
        doubleSpinBox_StepSize->setFont(font);
        doubleSpinBox_StepSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox_StepSize);

        label_RetractPeriod = new QLabel(layoutWidget);
        label_RetractPeriod->setObjectName(QStringLiteral("label_RetractPeriod"));
        sizePolicy4.setHeightForWidth(label_RetractPeriod->sizePolicy().hasHeightForWidth());
        label_RetractPeriod->setSizePolicy(sizePolicy4);
        label_RetractPeriod->setMinimumSize(QSize(145, 25));
        label_RetractPeriod->setFont(font3);
        label_RetractPeriod->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_RetractPeriod);

        spinBox_RetractPeriod = new QSpinBox(layoutWidget);
        spinBox_RetractPeriod->setObjectName(QStringLiteral("spinBox_RetractPeriod"));
        sizePolicy2.setHeightForWidth(spinBox_RetractPeriod->sizePolicy().hasHeightForWidth());
        spinBox_RetractPeriod->setSizePolicy(sizePolicy2);
        spinBox_RetractPeriod->setMinimumSize(QSize(100, 25));
        spinBox_RetractPeriod->setFont(font);
        spinBox_RetractPeriod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_RetractPeriod->setMinimum(0);
        spinBox_RetractPeriod->setMaximum(10000);
        spinBox_RetractPeriod->setSingleStep(10);
        spinBox_RetractPeriod->setValue(0);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinBox_RetractPeriod);

        label_Pause = new QLabel(layoutWidget);
        label_Pause->setObjectName(QStringLiteral("label_Pause"));
        sizePolicy4.setHeightForWidth(label_Pause->sizePolicy().hasHeightForWidth());
        label_Pause->setSizePolicy(sizePolicy4);
        label_Pause->setMinimumSize(QSize(145, 25));
        label_Pause->setFont(font3);
        label_Pause->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_Pause);

        spinBox_Pause = new QSpinBox(layoutWidget);
        spinBox_Pause->setObjectName(QStringLiteral("spinBox_Pause"));
        sizePolicy2.setHeightForWidth(spinBox_Pause->sizePolicy().hasHeightForWidth());
        spinBox_Pause->setSizePolicy(sizePolicy2);
        spinBox_Pause->setMinimumSize(QSize(100, 25));
        spinBox_Pause->setFont(font);
        spinBox_Pause->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_Pause->setMinimum(0);
        spinBox_Pause->setMaximum(10000);
        spinBox_Pause->setSingleStep(10);
        spinBox_Pause->setValue(0);

        formLayout->setWidget(5, QFormLayout::FieldRole, spinBox_Pause);

        tabWidget->addTab(tab_vibrationParams, QString());

        gridLayout_7->addWidget(tabWidget, 1, 0, 4, 1);

        pushButton_UploadProgram = new QPushButton(frame_ProfileOptions);
        pushButton_UploadProgram->setObjectName(QStringLiteral("pushButton_UploadProgram"));
        sizePolicy2.setHeightForWidth(pushButton_UploadProgram->sizePolicy().hasHeightForWidth());
        pushButton_UploadProgram->setSizePolicy(sizePolicy2);
        pushButton_UploadProgram->setMinimumSize(QSize(180, 30));
        pushButton_UploadProgram->setFont(font1);

        gridLayout_7->addWidget(pushButton_UploadProgram, 4, 1, 1, 1);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        pushButton_EstablishTouchoff = new QPushButton(frame_ProfileOptions);
        pushButton_EstablishTouchoff->setObjectName(QStringLiteral("pushButton_EstablishTouchoff"));
        sizePolicy2.setHeightForWidth(pushButton_EstablishTouchoff->sizePolicy().hasHeightForWidth());
        pushButton_EstablishTouchoff->setSizePolicy(sizePolicy2);
        pushButton_EstablishTouchoff->setMinimumSize(QSize(180, 30));
        pushButton_EstablishTouchoff->setFont(font1);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, pushButton_EstablishTouchoff);

        widget = new QWidget(frame_ProfileOptions);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(30, 30));
        widget->setMaximumSize(QSize(30, 30));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, widget);


        gridLayout_7->addLayout(formLayout_3, 5, 0, 1, 1);

        pushButton_DownloadProgram = new QPushButton(frame_ProfileOptions);
        pushButton_DownloadProgram->setObjectName(QStringLiteral("pushButton_DownloadProgram"));
        sizePolicy2.setHeightForWidth(pushButton_DownloadProgram->sizePolicy().hasHeightForWidth());
        pushButton_DownloadProgram->setSizePolicy(sizePolicy2);
        pushButton_DownloadProgram->setMinimumSize(QSize(180, 30));
        pushButton_DownloadProgram->setFont(font1);

        gridLayout_7->addWidget(pushButton_DownloadProgram, 5, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 79, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_2, 3, 1, 1, 1);


        gridLayout_8->addWidget(frame_ProfileOptions, 2, 0, 2, 1);

        frame_MaunalControl = new QFrame(centralWidget);
        frame_MaunalControl->setObjectName(QStringLiteral("frame_MaunalControl"));
        sizePolicy2.setHeightForWidth(frame_MaunalControl->sizePolicy().hasHeightForWidth());
        frame_MaunalControl->setSizePolicy(sizePolicy2);
        frame_MaunalControl->setMinimumSize(QSize(350, 300));
        frame_MaunalControl->setMaximumSize(QSize(350, 300));
        frame_MaunalControl->setFrameShape(QFrame::Box);
        frame_MaunalControl->setFrameShadow(QFrame::Plain);
        frame_MaunalControl->setLineWidth(2);
        gridLayout_4 = new QGridLayout(frame_MaunalControl);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_ManualControl = new QLabel(frame_MaunalControl);
        label_ManualControl->setObjectName(QStringLiteral("label_ManualControl"));
        sizePolicy4.setHeightForWidth(label_ManualControl->sizePolicy().hasHeightForWidth());
        label_ManualControl->setSizePolicy(sizePolicy4);
        label_ManualControl->setFont(font2);
        label_ManualControl->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_ManualControl, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_12 = new QSpacerItem(19, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        pushButton_ResetHome = new QPushButton(frame_MaunalControl);
        pushButton_ResetHome->setObjectName(QStringLiteral("pushButton_ResetHome"));
        sizePolicy2.setHeightForWidth(pushButton_ResetHome->sizePolicy().hasHeightForWidth());
        pushButton_ResetHome->setSizePolicy(sizePolicy2);
        pushButton_ResetHome->setMinimumSize(QSize(112, 30));
        pushButton_ResetHome->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_ResetHome);

        horizontalSpacer_10 = new QSpacerItem(37, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        pushButton_MoveHome = new QPushButton(frame_MaunalControl);
        pushButton_MoveHome->setObjectName(QStringLiteral("pushButton_MoveHome"));
        sizePolicy2.setHeightForWidth(pushButton_MoveHome->sizePolicy().hasHeightForWidth());
        pushButton_MoveHome->setSizePolicy(sizePolicy2);
        pushButton_MoveHome->setMinimumSize(QSize(112, 30));
        pushButton_MoveHome->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_MoveHome);

        horizontalSpacer_11 = new QSpacerItem(18, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 2, 2);

        verticalSpacer = new QSpacerItem(14, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit_GalilState = new QLineEdit(frame_MaunalControl);
        lineEdit_GalilState->setObjectName(QStringLiteral("lineEdit_GalilState"));
        lineEdit_GalilState->setMinimumSize(QSize(150, 25));
        lineEdit_GalilState->setMaximumSize(QSize(150, 25));
        lineEdit_GalilState->setFont(font);
        lineEdit_GalilState->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_GalilState);

        horizontalSpacer_13 = new QSpacerItem(2, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);

        lineEdit_MachinePosition = new QLineEdit(frame_MaunalControl);
        lineEdit_MachinePosition->setObjectName(QStringLiteral("lineEdit_MachinePosition"));
        lineEdit_MachinePosition->setMinimumSize(QSize(150, 25));
        lineEdit_MachinePosition->setMaximumSize(QSize(150, 25));
        lineEdit_MachinePosition->setFont(font);
        lineEdit_MachinePosition->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lineEdit_MachinePosition);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 0, 1, 2);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_ManualControl_4 = new QLabel(frame_MaunalControl);
        label_ManualControl_4->setObjectName(QStringLiteral("label_ManualControl_4"));
        sizePolicy4.setHeightForWidth(label_ManualControl_4->sizePolicy().hasHeightForWidth());
        label_ManualControl_4->setSizePolicy(sizePolicy4);
        label_ManualControl_4->setFont(font2);
        label_ManualControl_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_ManualControl_4, 0, 1, 1, 1);

        label_ManualControl_3 = new QLabel(frame_MaunalControl);
        label_ManualControl_3->setObjectName(QStringLiteral("label_ManualControl_3"));
        sizePolicy4.setHeightForWidth(label_ManualControl_3->sizePolicy().hasHeightForWidth());
        label_ManualControl_3->setSizePolicy(sizePolicy4);
        label_ManualControl_3->setFont(font2);
        label_ManualControl_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_ManualControl_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_9);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_IncreaseRelativeMove = new QPushButton(frame_MaunalControl);
        pushButton_IncreaseRelativeMove->setObjectName(QStringLiteral("pushButton_IncreaseRelativeMove"));
        sizePolicy2.setHeightForWidth(pushButton_IncreaseRelativeMove->sizePolicy().hasHeightForWidth());
        pushButton_IncreaseRelativeMove->setSizePolicy(sizePolicy2);
        pushButton_IncreaseRelativeMove->setMinimumSize(QSize(112, 30));
        pushButton_IncreaseRelativeMove->setFont(font1);

        verticalLayout_2->addWidget(pushButton_IncreaseRelativeMove);

        spinBox_RelativeMove = new QSpinBox(frame_MaunalControl);
        spinBox_RelativeMove->setObjectName(QStringLiteral("spinBox_RelativeMove"));
        sizePolicy2.setHeightForWidth(spinBox_RelativeMove->sizePolicy().hasHeightForWidth());
        spinBox_RelativeMove->setSizePolicy(sizePolicy2);
        spinBox_RelativeMove->setMinimumSize(QSize(112, 30));
        spinBox_RelativeMove->setFont(font1);
        spinBox_RelativeMove->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_RelativeMove->setMaximum(100000);
        spinBox_RelativeMove->setSingleStep(100);
        spinBox_RelativeMove->setValue(10000);

        verticalLayout_2->addWidget(spinBox_RelativeMove);

        pushButton_DecreaseRelativeMove = new QPushButton(frame_MaunalControl);
        pushButton_DecreaseRelativeMove->setObjectName(QStringLiteral("pushButton_DecreaseRelativeMove"));
        sizePolicy2.setHeightForWidth(pushButton_DecreaseRelativeMove->sizePolicy().hasHeightForWidth());
        pushButton_DecreaseRelativeMove->setSizePolicy(sizePolicy2);
        pushButton_DecreaseRelativeMove->setMinimumSize(QSize(112, 30));
        pushButton_DecreaseRelativeMove->setFont(font1);

        verticalLayout_2->addWidget(pushButton_DecreaseRelativeMove);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_IncreaseJog = new QPushButton(frame_MaunalControl);
        pushButton_IncreaseJog->setObjectName(QStringLiteral("pushButton_IncreaseJog"));
        sizePolicy2.setHeightForWidth(pushButton_IncreaseJog->sizePolicy().hasHeightForWidth());
        pushButton_IncreaseJog->setSizePolicy(sizePolicy2);
        pushButton_IncreaseJog->setMinimumSize(QSize(112, 30));
        pushButton_IncreaseJog->setFont(font1);

        verticalLayout->addWidget(pushButton_IncreaseJog);

        spinBox_Jog = new QSpinBox(frame_MaunalControl);
        spinBox_Jog->setObjectName(QStringLiteral("spinBox_Jog"));
        sizePolicy2.setHeightForWidth(spinBox_Jog->sizePolicy().hasHeightForWidth());
        spinBox_Jog->setSizePolicy(sizePolicy2);
        spinBox_Jog->setMinimumSize(QSize(112, 30));
        spinBox_Jog->setFont(font1);
        spinBox_Jog->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spinBox_Jog->setMinimum(1);
        spinBox_Jog->setMaximum(10000);
        spinBox_Jog->setSingleStep(10);
        spinBox_Jog->setValue(100);

        verticalLayout->addWidget(spinBox_Jog);

        pushButton_DecreaseJog = new QPushButton(frame_MaunalControl);
        pushButton_DecreaseJog->setObjectName(QStringLiteral("pushButton_DecreaseJog"));
        sizePolicy2.setHeightForWidth(pushButton_DecreaseJog->sizePolicy().hasHeightForWidth());
        pushButton_DecreaseJog->setSizePolicy(sizePolicy2);
        pushButton_DecreaseJog->setMinimumSize(QSize(112, 30));
        pushButton_DecreaseJog->setFont(font1);

        verticalLayout->addWidget(pushButton_DecreaseJog);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_MotorDisable = new QPushButton(frame_MaunalControl);
        pushButton_MotorDisable->setObjectName(QStringLiteral("pushButton_MotorDisable"));
        sizePolicy2.setHeightForWidth(pushButton_MotorDisable->sizePolicy().hasHeightForWidth());
        pushButton_MotorDisable->setSizePolicy(sizePolicy2);
        pushButton_MotorDisable->setMinimumSize(QSize(130, 30));
        pushButton_MotorDisable->setFont(font1);

        gridLayout_6->addWidget(pushButton_MotorDisable, 0, 2, 1, 1);

        pushButton_MotorEnable = new QPushButton(frame_MaunalControl);
        pushButton_MotorEnable->setObjectName(QStringLiteral("pushButton_MotorEnable"));
        sizePolicy2.setHeightForWidth(pushButton_MotorEnable->sizePolicy().hasHeightForWidth());
        pushButton_MotorEnable->setSizePolicy(sizePolicy2);
        pushButton_MotorEnable->setMinimumSize(QSize(130, 30));
        pushButton_MotorEnable->setFont(font1);

        gridLayout_6->addWidget(pushButton_MotorEnable, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_6, 2, 0, 1, 1);


        gridLayout_8->addWidget(frame_MaunalControl, 2, 1, 2, 1);

        frame_MotorControl = new QFrame(centralWidget);
        frame_MotorControl->setObjectName(QStringLiteral("frame_MotorControl"));
        sizePolicy2.setHeightForWidth(frame_MotorControl->sizePolicy().hasHeightForWidth());
        frame_MotorControl->setSizePolicy(sizePolicy2);
        frame_MotorControl->setMinimumSize(QSize(166, 74));
        frame_MotorControl->setMaximumSize(QSize(166, 74));
        frame_MotorControl->setFrameShape(QFrame::Box);
        frame_MotorControl->setFrameShadow(QFrame::Plain);
        frame_MotorControl->setLineWidth(2);
        gridLayout_3 = new QGridLayout(frame_MotorControl);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton = new QPushButton(frame_MotorControl);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(120, 50));
        pushButton->setMaximumSize(QSize(120, 50));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton->setFont(font4);

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);


        gridLayout_8->addWidget(frame_MotorControl, 2, 2, 1, 1);

        frame_DIO = new QFrame(centralWidget);
        frame_DIO->setObjectName(QStringLiteral("frame_DIO"));
        sizePolicy2.setHeightForWidth(frame_DIO->sizePolicy().hasHeightForWidth());
        frame_DIO->setSizePolicy(sizePolicy2);
        frame_DIO->setMinimumSize(QSize(166, 220));
        frame_DIO->setMaximumSize(QSize(166, 220));
        frame_DIO->setFrameShape(QFrame::Box);
        frame_DIO->setFrameShadow(QFrame::Plain);
        frame_DIO->setLineWidth(2);
        label_ManualControl_5 = new QLabel(frame_DIO);
        label_ManualControl_5->setObjectName(QStringLiteral("label_ManualControl_5"));
        label_ManualControl_5->setGeometry(QRect(30, 10, 94, 19));
        sizePolicy3.setHeightForWidth(label_ManualControl_5->sizePolicy().hasHeightForWidth());
        label_ManualControl_5->setSizePolicy(sizePolicy3);
        label_ManualControl_5->setFont(font2);
        label_ManualControl_5->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(frame_DIO, 3, 2, 1, 1);

        ECMControllerGUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ECMControllerGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1040, 40));
        ECMControllerGUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ECMControllerGUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ECMControllerGUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ECMControllerGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ECMControllerGUI->setStatusBar(statusBar);

        retranslateUi(ECMControllerGUI);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ECMControllerGUI);
    } // setupUi

    void retranslateUi(QMainWindow *ECMControllerGUI)
    {
        ECMControllerGUI->setWindowTitle(QApplication::translate("ECMControllerGUI", "ECMControllerGUI", nullptr));
        pushButton_RunProfile->setText(QApplication::translate("ECMControllerGUI", "Run Profile", nullptr));
        label_ManualControl_2->setText(QApplication::translate("ECMControllerGUI", "Profile Optons", nullptr));
        label_CutDepth->setText(QApplication::translate("ECMControllerGUI", "Depth of Cut (um)", nullptr));
        label_CutSpeed->setText(QApplication::translate("ECMControllerGUI", "Cut Speed (um/s)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_linearParams), QApplication::translate("ECMControllerGUI", "Linear Parameters", nullptr));
        label_RetractSpeed->setText(QApplication::translate("ECMControllerGUI", "Retract Speed (um/s)", nullptr));
        label_PlungeSpeed->setText(QApplication::translate("ECMControllerGUI", "Plunge Speed (um/s)", nullptr));
        label_RetractDistance->setText(QApplication::translate("ECMControllerGUI", "Retract Distance (um)", nullptr));
        label_StepSize->setText(QApplication::translate("ECMControllerGUI", "Step Size (um)", nullptr));
        label_RetractPeriod->setText(QApplication::translate("ECMControllerGUI", "Retract Period (ms)", nullptr));
        label_Pause->setText(QApplication::translate("ECMControllerGUI", "Pause (ms)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_vibrationParams), QApplication::translate("ECMControllerGUI", "Vibration Parameters", nullptr));
        pushButton_UploadProgram->setText(QApplication::translate("ECMControllerGUI", "Upload Program", nullptr));
        pushButton_EstablishTouchoff->setText(QApplication::translate("ECMControllerGUI", "Establish Touchoff", nullptr));
        pushButton_DownloadProgram->setText(QApplication::translate("ECMControllerGUI", "Download Program", nullptr));
        label_ManualControl->setText(QApplication::translate("ECMControllerGUI", "Manual Control", nullptr));
        pushButton_ResetHome->setText(QApplication::translate("ECMControllerGUI", "Reset Home", nullptr));
        pushButton_MoveHome->setText(QApplication::translate("ECMControllerGUI", "Move To Home", nullptr));
        label_ManualControl_4->setText(QApplication::translate("ECMControllerGUI", "Step Control (um)", nullptr));
        label_ManualControl_3->setText(QApplication::translate("ECMControllerGUI", "Jog Control (um/sec)", nullptr));
        pushButton_IncreaseRelativeMove->setText(QApplication::translate("ECMControllerGUI", "INCREASE", nullptr));
        pushButton_DecreaseRelativeMove->setText(QApplication::translate("ECMControllerGUI", "DECREASE", nullptr));
        pushButton_IncreaseJog->setText(QApplication::translate("ECMControllerGUI", "INCREASE", nullptr));
        pushButton_DecreaseJog->setText(QApplication::translate("ECMControllerGUI", "DECREASE", nullptr));
        pushButton_MotorDisable->setText(QApplication::translate("ECMControllerGUI", "DISABLE MOTOR", nullptr));
        pushButton_MotorEnable->setText(QApplication::translate("ECMControllerGUI", "ENABLE MOTOR", nullptr));
        pushButton->setText(QApplication::translate("ECMControllerGUI", "STOP", nullptr));
        label_ManualControl_5->setText(QApplication::translate("ECMControllerGUI", "DIO Signals", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ECMControllerGUI: public Ui_ECMControllerGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECM_CONTROLLER_GUI_H
