#include "userform.h"
#include "ui_userform.h"
#include "form.h"

userForm::userForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::userForm)
{
    ui->setupUi(this);
}

userForm::~userForm()
{
    delete ui;
}

void userForm::on_displaySubjectPB_clicked()
{
    ui->lineEdit->clear();
    ui->stackedWidget->setCurrentIndex(0);
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT numero_lote as lote, id_enfermera as enfermera, id_doctor as doctor, "
                   "fecha_solicitud as fecha, tipo_insumo as tipo, stock FROM insumos");

    /*if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        error.setText("Error 0121 - Consulta no realizada");
        //error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        isValid.setText("Consulta realizada correctamente");
        //isValid.setText(query->executedQuery());
        isValid.exec();
    }*/
    query->exec();
    table->setQuery(*query);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->databaseTableView->setModel(table);
}

/*void userForm::on_queryPB_clicked()
{
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT materias.nombre_materia as materia, materias.nrc, materias.clave, materias.horario, "
                   "materias.dia as día, materias.salon as salón, materias.seccion as sección, "
                   "maestros.nombre_maestro as Maestro, maestros.apellidos as Maestro "
                   "FROM materias INNER JOIN maestros ON (materias.codigo_materia = :text3)");
    query->bindValue(":text3", ui->codeSubjectLE->text());

    if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        error.setText("Error 0121 - Consulta no realizada");
        //error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        isValid.setText("Consulta realizada correctamente");
        //isValid.setText(query->executedQuery());
        isValid.exec();
    }

    table->setQuery(*query);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->databaseTableView->setModel(table);
}*/

void userForm::on_resetTablePB_clicked()
{
    form addForm;
    addForm.setModal(true);
    addForm.exec();
}

void userForm::on_displaySubjectPB_2_clicked()
{
    ui->lineEdit_2->clear();
    ui->stackedWidget->setCurrentIndex(1);
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    /*query->prepare("SELECT tratamiento, id_doctor as doctor, sintomas, "
                   "condicion, numero_paciente as paciente, padecimiento FROM diagnostico");*/

    query->prepare("SELECT a.id_doctor FROM dblink('dbname=hsj-productivo user=cencinas password=1234',"
                    "'SELECT id_doctor FROM doctor') AS a(id_doctor integer)");

    /*if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        //error.setText("Error 0121 - Consulta no realizada");
        error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        isValid.setText("Consulta realizada correctamente");
        //isValid.setText(query->executedQuery());
        isValid.exec();
    }*/
    query->exec();
    table->setQuery(*query);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->databaseTableView->setModel(table);
}

void userForm::on_pushButton_clicked()
{
    ui->lineEdit_3->clear();
    ui->stackedWidget->setCurrentIndex(2);
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT numero_paciente as Paciente, telefono, fecha_nacimiento as Nacimiento, "
                   "numero_habitacion as Habitacion, domicilio, nombre, sexo, fecha_ingreso as Ingreso, fecha_alta as Alta FROM paciente");

    /*if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        error.setText("Error 0121 - Consulta no realizada");
        //error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        isValid.setText("Consulta realizada correctamente");
        //isValid.setText(query->executedQuery());
        isValid.exec();
    }*/
    query->exec();
    table->setQuery(*query);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->databaseTableView->setModel(table);
}


void userForm::on_displaySubjectPB_3_clicked()
{
    ui->lineEdit_4->clear();
    ui->stackedWidget->setCurrentIndex(3);
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT numero_estudio as estudio, responsable, resultados, "
                   "tipo, fecha_realizacion as realizacion FROM estudios");

    /*if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        error.setText("Error 0121 - Consulta no realizada");
        //error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        isValid.setText("Consulta realizada correctamente");
        //isValid.setText(query->executedQuery());
        isValid.exec();
    }*/
    query->exec();
    table->setQuery(*query);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->databaseTableView->setModel(table);
}


void userForm::on_pushButton_2_clicked()
{
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT * FROM insumos WHERE numero_lote = :busquedaID");
    query->bindValue(":busquedaID", ui->lineEdit->text().toInt());

    /*if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        error.setText("Error 0121 - Consulta no realizada");
        //error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        isValid.setText("Consulta realizada correctamente");
        //isValid.setText(query->executedQuery());
        isValid.exec();
    }*/
    query->exec();
    table->setQuery(*query);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->databaseTableView->setModel(table);
}


void userForm::on_pushButton_3_clicked()
{
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT * FROM diagnostico WHERE id_doctor = :busquedaID");
    query->bindValue(":busquedaID", ui->lineEdit_2->text().toInt());

    /*if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        error.setText("Error 0121 - Consulta no realizada");
        //error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        isValid.setText("Consulta realizada correctamente");
        //isValid.setText(query->executedQuery());
        isValid.exec();
    }*/
    query->exec();
    table->setQuery(*query);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->databaseTableView->setModel(table);
}


void userForm::on_pushButton_4_clicked()
{
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT * FROM paciente WHERE numero_paciente = :busquedaID");
    query->bindValue(":busquedaID", ui->lineEdit_3->text().toInt());

    /*if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        error.setText("Error 0121 - Consulta no realizada");
        //error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        isValid.setText("Consulta realizada correctamente");
        //isValid.setText(query->executedQuery());
        isValid.exec();
    }*/
    query->exec();
    table->setQuery(*query);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->databaseTableView->setModel(table);
}


void userForm::on_pushButton_5_clicked()
{
    QMessageBox text;
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *query = new QSqlQuery();

    query->prepare("SELECT * FROM estudios WHERE numero_estudio = :busquedaID");
    query->bindValue(":busquedaID", ui->lineEdit_4->text().toInt());

    /*if(!query->exec())
    {
        QMessageBox error;
        error.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        error.setText("Error 0121 - Consulta no realizada");
        //error.setText(query->lastError().text());
        error.exec();
    }
    else
    {
        query->exec();
        QMessageBox isValid;
        isValid.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
        isValid.setText("Consulta realizada correctamente");
        //isValid.setText(query->executedQuery());
        isValid.exec();
    }*/
    query->exec();
    table->setQuery(*query);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->databaseTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->databaseTableView->setModel(table);
}

