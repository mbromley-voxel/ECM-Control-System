#include "widget_scripting_variables.h"
#include "ui_widget_scripting_variables.h"

Widget_ScriptingVariables::Widget_ScriptingVariables(GalilMotionController* galilObject, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget_ScriptingVariables)
{
    ui->setupUi(this);

    m_Galil = galilObject;

    ui->doubleSpinBox_CutDepth->setToolTip("Profile Variable: maxdepth");
    ui->doubleSpinBox_RetractDistance->setToolTip("Profile Variable: rtdist");
    ui->doubleSpinBox_StepSize->setToolTip("Profile Variable: step");
    ui->spinBox_RetractSpeed->setToolTip("Profile Variable: backsp");
    ui->spinBox_PlungeSpeed->setToolTip("Profile Variable: forsp");
    ui->doubleSpinBox_CutSpeed->setToolTip("Profile Variable: speed");
    ui->spinBox_RetractPeriod->setToolTip("Profile Variable: rtfq");
    ui->spinBox_Pause->setToolTip("Profile Variable: rtpause");

    connect(m_Galil, SIGNAL(signal_MCNewProgramVariableList(ProgramVariableList)), this, SLOT(slot_MCNEWProgramVariableList(ProgramVariableList)));
}

Widget_ScriptingVariables::~Widget_ScriptingVariables()
{
    delete ui;
}

void Widget_ScriptingVariables::on_doubleSpinBox_CutDepth_editingFinished()
{
    //Command_Variable command("maxdepth",ui->doubleSpinBox_CutDepth->value() * 10);
    Command_VariablePtr command = std::make_shared<Command_Variable>("maxdepth",ui->doubleSpinBox_CutDepth->value() * 10.0);
    //m_Galil->executeCommand(command);
}

void Widget_ScriptingVariables::on_doubleSpinBox_RetractDistance_editingFinished()
{
    //Command_Variable command("rtdist",ui->doubleSpinBox_RetractDistance->value() * 10);
    Command_VariablePtr command = std::make_shared<Command_Variable>("rtdist",ui->doubleSpinBox_RetractDistance->value() * 10.0);
    //m_Galil->executeCommand(command);
}

void Widget_ScriptingVariables::on_doubleSpinBox_StepSize_editingFinished()
{
    //Command_Variable command("step",ui->doubleSpinBox_StepSize->value() * 10);
    Command_VariablePtr command = std::make_shared<Command_Variable>("step",ui->doubleSpinBox_StepSize->value() * 10.0);
    //m_Galil->executeCommand(command);
}

void Widget_ScriptingVariables::on_spinBox_RetractSpeed_editingFinished()
{
    //Command_Variable command("backsp",ui->spinBox_RetractSpeed->value() * 10);
    Command_VariablePtr command = std::make_shared<Command_Variable>("backsp",ui->spinBox_RetractSpeed->value() * 10.0);
    //m_Galil->executeCommand(command);
}

void Widget_ScriptingVariables::on_spinBox_PlungeSpeed_editingFinished()
{
    //Command_Variable command("forsp",ui->spinBox_PlungeSpeed->value() * 10);
    Command_VariablePtr command = std::make_shared<Command_Variable>("forsp",ui->spinBox_PlungeSpeed->value() * 10.0);
    //m_Galil->executeCommand(command);
}

void Widget_ScriptingVariables::on_doubleSpinBox_CutSpeed_editingFinished()
{
    //Command_Variable command("speed",ui->doubleSpinBox_CutSpeed->value() * 10);
    Command_VariablePtr command = std::make_shared<Command_Variable>("speed",ui->doubleSpinBox_CutSpeed->value() * 10.0);
    //m_Galil->executeCommand(command);
}

void Widget_ScriptingVariables::on_spinBox_RetractPeriod_editingFinished()
{
    //Command_Variable command("rtfq",ui->spinBox_RetractPeriod->value());
    Command_VariablePtr command = std::make_shared<Command_Variable>("rtfq",ui->spinBox_RetractPeriod->value());
    //m_Galil->executeCommand(command);
}

void Widget_ScriptingVariables::on_spinBox_Pause_editingFinished()
{
    //Command_Variable command("rtpause",ui->spinBox_Pause->value());
    Command_VariablePtr command = std::make_shared<Command_Variable>("rtpause",ui->spinBox_Pause->value());
    //m_Galil->executeCommand(command);
}

void Widget_ScriptingVariables::slot_MCNEWProgramVariableList(const ProgramVariableList &variables)
{
    double value = 0;
    if(variables.getVariableValue("maxdepth",value))
        ui->doubleSpinBox_CutDepth->setValue(value / 10.0);
    if(variables.getVariableValue("rtdist",value))
        ui->doubleSpinBox_RetractDistance->setValue(value / 10.0);
    if(variables.getVariableValue("step",value))
        ui->doubleSpinBox_StepSize->setValue(value / 10.0);
    if(variables.getVariableValue("backsp",value))
        ui->spinBox_RetractSpeed->setValue(value / 10.0);
    if(variables.getVariableValue("forsp",value))
        ui->spinBox_PlungeSpeed->setValue(value / 10.0);
    if(variables.getVariableValue("speed",value))
        ui->doubleSpinBox_CutSpeed->setValue(value / 10.0);
    if(variables.getVariableValue("rtfq",value))
        ui->spinBox_RetractPeriod->setValue(value);
    if(variables.getVariableValue("rtpause",value))
        ui->spinBox_Pause->setValue(value);
}

void Widget_ScriptingVariables::slot_MCNewProgramLabelList(const ProgramLabelList &labels)
{
    std::string currentProgram = ui->comboBox_ProgramLabels->currentText().toStdString();

    ui->comboBox_ProgramLabels->clear();

    ui->comboBox_ProgramLabels->addItems(labels.getLabelList());

    if(labels.doesLabelExist(currentProgram))
    {
        int boxIndex = ui->comboBox_ProgramLabels->findText(QString::fromStdString(currentProgram));
        ui->comboBox_ProgramLabels->setCurrentIndex(boxIndex);
    }
}