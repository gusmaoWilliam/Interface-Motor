#ifndef PLOT_H
#define PLOT_H

#include <QMainWindow>

namespace Ui {
class plot;
}

class plot : public QMainWindow
{
    Q_OBJECT

public:
    explicit plot(QWidget *parent = nullptr);
    ~plot();

private:
    Ui::plot *ui;
};

#endif // PLOT_H
