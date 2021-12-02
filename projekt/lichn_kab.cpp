#include "lichn_kab.h"
#include "ui_lichn_kab.h"

Lichn_Kab::Lichn_Kab(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lichn_Kab)
{
    ui->setupUi(this);
}

Lichn_Kab::~Lichn_Kab()
{
    delete ui;
}

void Lichn_Kab::on_Enter_clicked()
{

}


void Lichn_Kab::on_Exit_clicked()
{

}

