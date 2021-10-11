#ifndef FORM_H
#define FORM_H

#include <QDialog>
#include <QMessageBox>
#include <QPushButton>

namespace Ui {
class form;
}

class form : public QDialog
{
    Q_OBJECT

public:
    explicit form(QWidget *parent = nullptr);
    ~form();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::form *ui;
};

#endif // FORM_H
