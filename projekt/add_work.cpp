#include "add_work.h"
#include "ui_add_work.h"

add_WORK::add_WORK(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_WORK)
{
    ui->setupUi(this);
}

add_WORK::~add_WORK()
{
    delete ui;
}



void add_WORK::on_Add_clicked()
{

}


void add_WORK::on_ESC_clicked()
{

}

