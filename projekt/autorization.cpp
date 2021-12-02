#include "autorization.h"
#include "ui_autorization.h"

Autorization::Autorization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Autorization)
{
    ui->setupUi(this);
}

Autorization::~Autorization()
{
    delete ui;
}

void Autorization::on_Enter_clicked()
{

}


void Autorization::on_Registrat_clicked()
{

}

