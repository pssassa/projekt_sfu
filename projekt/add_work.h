#ifndef ADD_WORK_H
#define ADD_WORK_H

#include <QDialog>

namespace Ui {
class add_WORK;
}

class add_WORK : public QDialog
{
    Q_OBJECT

public:
    explicit add_WORK(QWidget *parent = nullptr);
    ~add_WORK();

private slots:

    void on_Add_clicked();

    void on_ESC_clicked();

private:
    Ui::add_WORK *ui;
};

#endif // ADD_WORK_H
