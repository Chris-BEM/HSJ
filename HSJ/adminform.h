#ifndef ADMINFORM_H
#define ADMINFORM_H

#include <QWidget>
#include <QtSql>
#include <QSqlError>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>

using namespace std;

namespace Ui {
class adminForm;
}

class adminForm : public QWidget
{
    Q_OBJECT

public:
    explicit adminForm(QWidget *parent = nullptr);
    ~adminForm();

private slots:
    void on_subjectInsertPB_clicked();

    void on_subjectUpdatePB_clicked();

    void on_subjectDeletePB_clicked();

    void on_modifyTableTeacherPB_clicked();

    void on_teacherInsertPB_clicked();

    void on_teacherUpdatePB_clicked();

    void on_teacherDeletePB_clicked();

    void on_modifyTableSubjectPB_clicked();

    void on_subjectDisplayLogPB_clicked();

    void on_teacherDisplayLogPB_clicked();

    void on_displayTeacherLogPB_clicked();

    void on_displaySubjectLogPB_clicked();

    void on_modifySubjectLogPB_clicked();

    void on_modifyTeacherLogPB_clicked();

    void on_resetLogsPB_clicked();

    void on_deletLogTeacherPB_clicked();

    void on_deleteSubjectLogPB_clicked();

private:
    Ui::adminForm *ui;
};

#endif // ADMINFORM_H
