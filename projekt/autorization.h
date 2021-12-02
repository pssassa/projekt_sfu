#ifndef AUTORIZATION_H
#define AUTORIZATION_H

#include <QDialog>

namespace Ui {
class Autorization;
}

class Autorization : public QDialog
{
    Q_OBJECT

public:
    explicit Autorization(QWidget *parent = nullptr);
    ~Autorization();

private slots:
    void on_Enter_clicked();

    void on_Registrat_clicked();

private:
    Ui::Autorization *ui;
};

#endif // AUTORIZATION_H
