#include "form.h"
#include "ui_form.h"

form::form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::form)
{
    ui->setupUi(this);
    ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Enviar");
    ui->buttonBox->button(QDialogButtonBox::Cancel)->setText("Cancelar");
}

form::~form()
{
    delete ui;
}

void form::on_buttonBox_accepted()
{
    QMessageBox message;
    message.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
    message.setText("Requisición realizada correctamente");
    message.exec();
}


void form::on_buttonBox_rejected()
{
    QMessageBox message;
    message.setWindowTitle("HSJ - Sistema de Gestión de Servicios Médicos");
    message.setText("Requisición cancelada correctamente");
    message.exec();
}

