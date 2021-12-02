#ifndef LICHN_KAB_H
#define LICHN_KAB_H

#include <QDialog>

namespace Ui {
class Lichn_Kab;
}

class Lichn_Kab : public QDialog
{
    Q_OBJECT

public:
    explicit Lichn_Kab(QWidget *parent = nullptr);
    ~Lichn_Kab();

private slots:
    void on_Enter_clicked();

    void on_Exit_clicked();

private:
    Ui::Lichn_Kab *ui;
};

#endif // LICHN_KAB_H
