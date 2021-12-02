#include "redact_work.h"
#include "ui_redact_work.h"

redact_work::redact_work(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::redact_work)
{
    ui->setupUi(this);
}

redact_work::~redact_work()
{
    delete ui;
}
