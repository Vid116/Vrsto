#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include <QFileInfo>
#include <QMessageBox>
QString pot="C:/Users/Uporabnik/Desktop/pt.db";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
bool MainWindow::poveziBazo()
{
    baza=QSqlDatabase:: addDatabase ("QSQLITE");
    baza.setDatabaseName(pot);
    if (!baza.open())
    {
        QMessageBox::information (this,"Povezava NI uspela!","Datoteke "+pot+" ne najdem!",  QMessageBox::Ok);
        return false;
    }
    else
        return true;
}

void MainWindow::zapriPovezavo()
{
    baza.close();
    baza.removeDatabase(QSqlDatabase::defaultConnection);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    MainWindow obj;
     if (obj.poveziBazo())
     {
        QSqlQuery poizvedba;
        QSqlQueryModel *model=new QSqlQueryModel();
        poizvedba.prepare("select ime, priimek from osebe;");
         poizvedba.exec();
        model->setQuery(poizvedba);
        ui->tableView->setModel(model);
     }
    obj.zapriPovezavo();
}

