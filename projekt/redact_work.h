#ifndef REDACT_WORK_H
#define REDACT_WORK_H

#include <QDialog>

namespace Ui {
class redact_work;
}

class redact_work : public QDialog
{
    Q_OBJECT

public:
    explicit redact_work(QWidget *parent = nullptr);
    ~redact_work();

private:
    Ui::redact_work *ui;
};

#endif // REDACT_WORK_H
