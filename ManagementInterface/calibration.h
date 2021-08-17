#ifndef CALIBRATION_H
#define CALIBRATION_H

#include <QMainWindow>

namespace Ui {
class calibration;
}

class calibration : public QMainWindow
{
    Q_OBJECT

public:
    explicit calibration(QWidget *parent = nullptr);
    ~calibration();

private:
    Ui::calibration *ui;
};

#endif // CALIBRATION_H
