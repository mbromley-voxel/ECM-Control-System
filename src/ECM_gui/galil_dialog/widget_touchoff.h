#ifndef WIDGET_TOUCHOFF_H
#define WIDGET_TOUCHOFF_H

#include <QWidget>

#include "library_galilMotionController/galil_motion_controller.h"
#include "library_galilMotionController/motion_command_touchoff_config.h"

namespace Ui {
class Widget_Touchoff;
}

class Widget_Touchoff : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_Touchoff(GalilMotionController* galilObject, QWidget *parent = 0);
    ~Widget_Touchoff();

public:

    void loadFromTouchoffConfig(const MotionCommand_TouchoffConfig &config);

    MotionCommand_TouchoffConfig getCurrentTouchoffConfig() const;

public:
    void setTouchoffRef(const double &value);

    void setTouchoffGap(const double &value);

    void setTouchoffUtilization(const bool &execute);

private slots:

    void on_pushButton_TouchoffRef_released();

    void on_doubleSpinBox_TouchoffRef_valueChanged(double arg1);

    void on_doubleSpinBox_InitialGap_valueChanged(double arg1);

    void on_checkBox_ReferenceOldPosition_toggled(bool val);

private:
    Ui::Widget_Touchoff *ui;

    GalilMotionController* m_Galil;

};

#endif // WIDGET_TOUCHOFF_H
