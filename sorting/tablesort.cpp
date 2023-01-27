#include "tablesort.h"
#include "ui_tablesort.h"

#include "QSqlDatabase"
#include <QSql>
#include <QSqlTableModel>
#include "QSqlError"
#include "QDebug"
#include <iostream>
using namespace std;

tableSort::tableSort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tableSort)
{
    ui->setupUi(this);

    //Подключение к БД
    database = QSqlDatabase::addDatabase("QODBC");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("root");
    database.setDatabaseName("2");

    //Проверка подключения к БД
    if(database.open()) {
        table = new QSqlTableModel();
        table->setTable("sortingtable");
        table->select();

        table->setHeaderData(0, Qt::Horizontal, tr("Номер кармана"));
        table->setHeaderData(1, Qt::Horizontal, tr("Минимальная длина"));
        table->setHeaderData(2, Qt::Horizontal, tr("Максимальная длина"));
        table->setHeaderData(3, Qt::Horizontal, tr("Минимальный диаметр"));
        table->setHeaderData(4, Qt::Horizontal, tr("Максимальный диаметр"));

        ui->tableView->setModel(table);
    }else {
        QMessageBox::information(this,"Failed","Connection failed");
    }
}

tableSort::~tableSort()
{
    delete ui;
}
