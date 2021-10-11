#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include <QMenu>
#include <QAction>
#include <QFile>
#include <QFileDialog>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>
#include <QJsonValue>
#include <QMessageBox>
#include "user.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void openFile();

    void logOut();

    void on_userLoginPB_clicked();

    void on_userCodeLE_textChanged(const QString &arg1);

    void on_userPasswordLE_textChanged(const QString &arg1);

    void on_page_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MainWindow *ui;

    QAction *openFileAction;
    QAction *closeSession;
    QFile dbFile;
    QMenu *fileMenu;
    vector<user> users;
    QJsonArray database;

    void saveDB();
    void loadDB();
    void loadDBPSQL();
    void enableUserLoginPB();
    void validateUser();
};
#endif // MAINWINDOW_H
