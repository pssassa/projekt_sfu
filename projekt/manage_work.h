#ifndef MANAGE_WORK_H
#define MANAGE_WORK_H

#include <QDialog>

namespace Ui {
class manage_WORK;
}

class manage_WORK : public QDialog
{
    Q_OBJECT

public:
    explicit manage_WORK(QWidget *parent = nullptr);
    ~manage_WORK();

private slots:
    void on_Add_clicked();

private:
    Ui::manage_WORK *ui;
};

#endif // MANAGE_WORK_H
