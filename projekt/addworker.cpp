#include "addworker.h"
#include "ui_addworker.h"

worker::worker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::worker)
{
    ui->setupUi(this);
}

worker::~worker()
{
    delete ui;
}

void worker::on_Add_clicked()
{

}


void worker::on_ESC_clicked()
{

}

