#ifndef ADDWORKER_H
#define ADDWORKER_H

#include <QDialog>

namespace Ui {
class worker;
}

class worker : public QDialog
{
    Q_OBJECT

public:
    explicit worker(QWidget *parent = nullptr);
    ~worker();

private slots:
    void on_Add_clicked();

    void on_ESC_clicked();

private:
    Ui::worker *ui;
};

#endif // ADDWORKER_H
