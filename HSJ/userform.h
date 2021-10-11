#ifndef USERFORM_H
#define USERFORM_H

#include <QWidget>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>

namespace Ui {
class userForm;
}

class userForm : public QWidget
{
    Q_OBJECT

public:
    explicit userForm(QWidget *parent = nullptr);
    ~userForm();

private slots:

    void on_displaySubjectPB_clicked();

    void on_queryPB_clicked();

    void on_resetTablePB_clicked();

    void on_displaySubjectPB_2_clicked();

    void on_pushButton_clicked();

    void on_displaySubjectPB_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::userForm *ui;
};

#endif // USERFORM_H
