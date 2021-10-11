#include "adminform.h"
#include "ui_adminform.h"

adminForm::adminForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminForm)
{
    ui->setupUi(this);
}

adminForm::~adminForm()
{
    delete ui;
}

void adminForm::on_subjectInsertPB_clicked()
{
    QSqlQuery *query = new QSqlQuery();

    query->prepare("insert into materias values (:nombre,:nrc,:clave,:horario,:dia,:salon,:seccion,:codigo_materia)");
    query->bindValue(":nombre", ui->sNameInsertLE->text());
    query->bindValue(":nrc", ui->sNrcInsertLE->text());
    query->bindValue(":clave", ui->sCodeInsertLE->text());
    query->bindValue(":horario", ui->sScheduleInsertLE->text());
    query->bindValue(":dia", ui->sDayInsertLE->text());
    query->bindValue(":salon", ui->sClassroomInsertLE->text());
    query->bindValue(":seccion", ui->sSectionInsertLE->text());
    query->bindValue(":codigo_materia", ui->sCodeSubjectInsertLE->text());

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR AL EJECUTAR EL SCRIPT");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    ui->sNameInsertLE->clear();
    ui->sNrcInsertLE->clear();
    ui->sCodeInsertLE->clear();
    ui->sScheduleInsertLE->clear();
    ui->sDayInsertLE->clear();
    ui->sClassroomInsertLE->clear();
    ui->sSectionInsertLE->clear();
    ui->sCodeSubjectInsertLE->clear();
}

void adminForm::on_subjectUpdatePB_clicked()
{
    QSqlQuery *query = new QSqlQuery();

    query->prepare("UPDATE materias SET salon = :setData WHERE nrc = :whereData");
    query->bindValue(":setData", ui->subjectSetDataLE->text());
    query->bindValue(":whereData", ui->subjectWhereDataLE->text());

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR AL EJECUTAR EL SCRIPT");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    ui->subjectSetDataLE->clear();
    ui->subjectWhereDataLE->clear();
}

void adminForm::on_subjectDeletePB_clicked()
{
    QSqlQuery *query = new QSqlQuery();

    query->prepare("DELETE FROM materias WHERE nrc = :deleteNRC");
    query->bindValue(":deleteNRC", ui->subjectNrcDeleteLE->text());

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR AL EJECUTAR EL SCRIPT");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    ui->subjectNrcDeleteLE->clear();
}

void adminForm::on_modifyTableTeacherPB_clicked()
{
    ui->viewsAdmin->setCurrentIndex(1);
}

void adminForm::on_teacherInsertPB_clicked()
{
    QSqlQuery *query = new QSqlQuery();

    query->prepare("insert into maestros values (:id,:nombre,:apellidos,:codigo_materia)");
    query->bindValue(":id", ui->teacherIDLE->text());
    query->bindValue(":nombre", ui->teacherNameLE->text());
    query->bindValue(":apellidos", ui->teacherLastNameLE->text());
    query->bindValue(":codigo_materia", ui->teacherCodeSubjectLE->text());

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR AL EJECUTAR EL SCRIPT");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    ui->teacherIDLE->clear();
    ui->teacherNameLE->clear();
    ui->teacherLastNameLE->clear();
    ui->teacherCodeSubjectLE->clear();
}

void adminForm::on_teacherUpdatePB_clicked()
{
    QSqlQuery *query = new QSqlQuery();

    query->prepare("UPDATE maestros SET codigo_materia = :setData WHERE id_maestro = :whereData");
    query->bindValue(":setData", ui->teacherCodeSubjectUpdateLE->text());
    query->bindValue(":whereData", ui->teacherIdUpdateLE->text().toInt());

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR AL EJECUTAR EL SCRIPT");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    ui->teacherCodeSubjectUpdateLE->clear();
    ui->teacherIdUpdateLE->clear();
}

void adminForm::on_teacherDeletePB_clicked()
{
    QSqlQuery *query = new QSqlQuery();

    query->prepare("DELETE FROM maestros WHERE id_maestro = :deleteID");
    query->bindValue(":deleteID", ui->teacherIdDeleteLE->text().toInt());

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    ui->teacherIdDeleteLE->clear();
}

void adminForm::on_modifyTableSubjectPB_clicked()
{
    ui->viewsAdmin->setCurrentIndex(0);
}

void adminForm::on_subjectDisplayLogPB_clicked()
{
    ui->viewsAdmin->setCurrentIndex(2);
}

void adminForm::on_teacherDisplayLogPB_clicked()
{
    ui->viewsAdmin->setCurrentIndex(2);
}

void adminForm::on_displayTeacherLogPB_clicked()
{
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT * FROM log_update_maestros");

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR AL EJECUTAR EL SCRIPT");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    table->setQuery(*query);
    ui->logTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->logTableView->setModel(table);
}

void adminForm::on_displaySubjectLogPB_clicked()
{
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT * FROM log_update_materias");

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR AL EJECUTAR EL SCRIPT");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    table->setQuery(*query);
    ui->logTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->logTableView->setModel(table);
}

void adminForm::on_modifySubjectLogPB_clicked()
{
    QSqlQueryModel *table = new QSqlQueryModel();
    ui->logTableView->setModel(table);
    table->clear();
    ui->viewsAdmin->setCurrentIndex(0);
}

void adminForm::on_modifyTeacherLogPB_clicked()
{
    QSqlQueryModel *table = new QSqlQueryModel();
    ui->logTableView->setModel(table);
    table->clear();
    ui->viewsAdmin->setCurrentIndex(1);
}

void adminForm::on_resetLogsPB_clicked()
{
    QSqlQueryModel *table = new QSqlQueryModel();
    ui->logTableView->setModel(table);
    table->clear();
}

void adminForm::on_deletLogTeacherPB_clicked()
{
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT * FROM log_delete_maestros");

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR AL EJECUTAR EL SCRIPT");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    table->setQuery(*query);
    ui->logTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->logTableView->setModel(table);
}

void adminForm::on_deleteSubjectLogPB_clicked()
{
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT * FROM log_delete_materias");

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("ERROR AL EJECUTAR EL SCRIPT");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("SCRIPT EJECUTADO CORRECTAMENTE");
        isValid.setText(query->executedQuery());
        isValid.exec();
    }

    table->setQuery(*query);
    ui->logTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->logTableView->setModel(table);
}
