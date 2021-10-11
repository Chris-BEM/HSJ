#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // Carga el archivo de estilo de la aplicación
    QFile styleFile( ":/resources/qss/DiffnesAlt.qss" );
    styleFile.open( QFile::ReadOnly );
    // Aplica la hoja de estilos previamente cargada
    QString style( styleFile.readAll() );
    a.setStyleSheet(style);
    return a.exec();
}
