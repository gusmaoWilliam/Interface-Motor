#include "plot.h"
#include "ui_plot.h"

plot::plot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::plot)
{
    ui->setupUi(this);
}

plot::~plot()
{
    delete ui;
}
