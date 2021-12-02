#include "manage_work.h"
#include "ui_manage_work.h"

manage_WORK::manage_WORK(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manage_WORK)
{
    ui->setupUi(this);
}

manage_WORK::~manage_WORK()
{
    delete ui;
}

void manage_WORK::on_Add_clicked()
{

}

