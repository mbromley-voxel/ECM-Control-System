#include "widget_segment_time_data.h"
#include "ui_widgetsegmenttimedata.h"

WidgetSegmentTimeData::WidgetSegmentTimeData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetSegmentTimeData),
    m_CB(NULL)
{
    ui->setupUi(this);

    data = new DataParameter::SegmentTimeDataDetailed();

    std::vector<std::string> modeValues = Data::getListOfSegmentMode();

    size_t size = modeValues.size();
    for(unsigned int i = 0; i < size; i++)
        this->ui->comboBox_Mode->addItem(QString::fromStdString(modeValues[i]));

    int index = this->ui->comboBox_Mode->findText(QString::fromStdString(Data::SegmentModeToString(data->getSegmentMode())));
    this->ui->comboBox_Mode->setCurrentIndex(index);
}

WidgetSegmentTimeData::~WidgetSegmentTimeData()
{
    delete ui;
}

void WidgetSegmentTimeData::updateDisplayData() const
{
    int modeIndex = ui->comboBox_Mode->findText(QString::fromStdString(Data::SegmentModeToString(data->getSegmentMode())));
    ui->comboBox_Mode->blockSignals(true);
    ui->comboBox_Mode->setCurrentIndex(modeIndex);
    ui->comboBox_Mode->blockSignals(false);

    ui->doubleSpinBox_Current->blockSignals(true);
    ui->doubleSpinBox_Current->setValue(data->getSegmentCurrent());
    ui->doubleSpinBox_Current->blockSignals(false);

    ui->doubleSpinBox_Time->blockSignals(true);
    ui->doubleSpinBox_Time->setValue(data->getTimeValue() / 1000.0);
    ui->doubleSpinBox_Time->blockSignals(false);

    ui->doubleSpinBox_Voltage->blockSignals(true);
    ui->doubleSpinBox_Voltage->setValue(data->getSegmentVoltage());
    ui->doubleSpinBox_Voltage->blockSignals(false);

}

void WidgetSegmentTimeData::on_comboBox_Mode_currentIndexChanged(const QString &arg1)
{
    Data::SegmentMode selectedMode = Data::SegmentModeFromString(arg1.toStdString());
    data->setSegmentMode(selectedMode);

    if((selectedMode == Data::SegmentMode::HIZ) || (selectedMode == Data::SegmentMode::DEAD))
    {
        ui->doubleSpinBox_Current->setValue(0.0);
        ui->doubleSpinBox_Current->setEnabled(false);
        ui->doubleSpinBox_Voltage->setValue(0.0);
        ui->doubleSpinBox_Voltage->setEnabled(false);
    }
    else{
        if(!ui->doubleSpinBox_Current->isEnabled())
        {
            ui->doubleSpinBox_Current->setEnabled(true);
        }
        if(!ui->doubleSpinBox_Voltage->isEnabled())
        {
            ui->doubleSpinBox_Voltage->setEnabled(true);
        }
    }

    emitCallback();
}

void WidgetSegmentTimeData::on_doubleSpinBox_Voltage_valueChanged(const double arg1)
{
    data->setSegmentVoltage(arg1);
    emitCallback();
}

void WidgetSegmentTimeData::on_doubleSpinBox_Current_valueChanged(const double arg1)
{
    data->setSegmentCurrent(arg1);
    emitCallback();
}

void WidgetSegmentTimeData::on_doubleSpinBox_Time_valueChanged(const double arg1)
{
    data->setTimeValue(arg1 * 1000.0);
    emitCallback();
}
