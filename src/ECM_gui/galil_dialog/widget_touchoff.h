#ifndef WIDGET_TOUCHOFF_H
#define WIDGET_TOUCHOFF_H

#include <QWidget>

#include "library_galilMotionController/galil_motion_controller.h"

namespace Ui {
class Widget_Touchoff;
}

class Widget_Touchoff : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_Touchoff(GalilMotionController* galilObject, QWidget *parent = 0);
    ~Widget_Touchoff();

private slots:
    void on_pushButton_ExecuteTouchoff_released();

    void on_pushButton_TouchoffRef_released();

    void on_doubleSpinBox_TouchoffRef_valueChanged(double arg1);

    void on_doubleSpinBox_InitialGap_valueChanged(double arg1);

private slots:
    void slot_UpdateMotionProfileState(const MotionProfileState &state);

private:
    Ui::Widget_Touchoff *ui;

    GalilMotionController* m_Galil;

};

#endif // WIDGET_TOUCHOFF_H