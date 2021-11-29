#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fileMenu = ui->menubar->addMenu(tr("&Opciones"));
        openFileAction = new QAction(tr("Cargar base de datos"), this);
        closeSession = new QAction(tr("Cerrar sesión"), this);
        connect(closeSession, SIGNAL(triggered()), this, SLOT(logOut()));
        connect(openFileAction, SIGNAL(triggered()), this, SLOT(openFile()));
        fileMenu->addAction(openFileAction);
        fileMenu->addAction(closeSession);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openFile()
{
    QString fileName;

    fileName = QFileDialog::getOpenFileName(this, "HSJ - Sistema de Gestión de Servicios Médicos", "", "JSON files (*.json)");
    if(fileName.length() > 0)
    {
        dbFile.setFileName(fileName);
        loadDB();
        loadDBPSQL();
        ui->loginPage->setEnabled(true);
    }
}

void MainWindow::logOut()
{   
    if(ui->viewsWidget->currentIndex() == 1)
    {
        ui->viewsWidget->setCurrentIndex(0);
        QMessageBox text;
        text.setText("Sesión cerrada correctamente");
        text.exec();
    }
    else
    {
        QMessageBox text;
        text.setText("Error 0110 - No se encuentra activa una sesión");
        text.exec();
    }
}


void MainWindow::on_userLoginPB_clicked()
{
    validateUser();
    ui->userCodeLE->clear();
    ui->userPasswordLE->clear();
}

void MainWindow::saveDB()
{
    QJsonDocument jsonDoc;
    QJsonObject jsonObj;

    jsonObj["users"] = database;
    jsonDoc = QJsonDocument(jsonObj);

    dbFile.open(QIODevice::WriteOnly);
    dbFile.write(jsonDoc.toJson());
    dbFile.close();
}

void MainWindow::loadDB()
{
    user u;
    QJsonDocument jsonDoc;
    QJsonObject jsonObj;
    QByteArray data;
    dbFile.open(QIODevice::ReadOnly);
    data = dbFile.readAll();
    jsonDoc = QJsonDocument::fromJson(data);
    jsonObj = jsonDoc.object();
    database = jsonObj["users"].toArray();

    for(int i = 0; i < database.size(); i++)
    {
        u.setUsername(jsonDoc.object().value("users").toArray()[i].toObject().value("username").toString());
        u.setPassword(jsonDoc.object().value("users").toArray()[i].toObject().value("password").toString());

        users.push_back(u);
    }

    dbFile.close();
}

void MainWindow::loadDBPSQL()
{
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QPSQL");
    mydb.setHostName("localhost");
    mydb.setDatabaseName("hsj");
    mydb.setUserName("postgres");
    mydb.setPassword("signal");
    bool is_open = mydb.open();

    if(!is_open)
    {
        QMessageBox text;
        text.setText(mydb.lastError().text());
        text.exec();
    }
    else
    {
        QMessageBox text;
        text.setText("Conexión realizada correctamente");
        text.exec();
    }
}

void MainWindow::enableUserLoginPB()
{
    if(ui->userCodeLE->text().length() > 0 && ui->userPasswordLE->text().length() > 0)
    {
        ui->userLoginPB->setEnabled(true);
    }
    else
    {
        ui->userLoginPB->setEnabled(false);
    }
}


void MainWindow::validateUser()
{
    QMessageBox message;
    size_t i;
    for(i = 0; i < users.size(); i++)
    {
        if(users.at(i).getUsername() == ui->userCodeLE->text())
        {
            if(users.at(i).getPassword() == ui->userPasswordLE->text())
            {
                ui->viewsWidget->setCurrentIndex(1);
                message.setText("Sesión iniciada correctamente con el usuario: " + users.at(i).getUsername());
                message.exec();
            }
            else
            {
                message.setText("Error 0132 - Usuario o contraseña incorrectos... intente nuevamente");
                message.exec();
            }
            break;
        }
    }
    if(i == users.size())
    {
        message.setText("Error 0132 - Usuario o contraseña incorrectos... intente nuevamente");
        message.exec();
    }
}

void MainWindow::on_userCodeLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableUserLoginPB();
}

void MainWindow::on_userPasswordLE_textChanged(const QString &arg1)
{
    Q_UNUSED(arg1);
    enableUserLoginPB();
}
