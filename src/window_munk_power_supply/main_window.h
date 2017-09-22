#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <iostream>

#include "qcustomplot.h"

#include "widget_segment_time_data.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow, public WidgetTimeDataInterface
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_released();

private:
    void cbiSegmentDataInterface_UpdatedData(const DataParameter::SegmentTimeDataDetailed* obj) override;

private:
    Ui::MainWindow *ui;

    QCPGraph* voltageGraph;
    QCPGraph* currentGraph;

    std::list<WidgetSegmentTimeData*> m_dataList;
};

#endif // MAIN_WINDOW_H
