#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tableSort.h"
#include <stdlib.h>
#include <ctime>
#include <QDebug>
#include <QString>
#include "QSqlDatabase"
#include <QSqlQuery>
#include <QSql>
#include <QSqlTableModel>
#include "QSqlError"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);       
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    window = new tableSort(this);
    window->show();

}

void MainWindow::on_generate_clicked()
{
    int min_len = 4000;
    int max_len = 6500;
    int min_diam = 130;
    int max_diam = 350;
    int len = 0, diam= 0;
    len = min_len + rand() % ((max_len+1)-min_len);
    diam = min_diam + rand() % ((max_diam+1)-min_diam);
    QString l = QString::number(len);
    QString d = QString::number(diam);
    ui->textEdit->setText(l);
    ui->textEdit1->setText(d);



    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("root");
    db.setDatabaseName("2");
    if(!db.open())
    {
        QMessageBox::information(this, "No connected", "NO!");
        qDebug()<<"error open database because"<<db.lastError().text();
    }
    else
    {
        qDebug() << len;
        qDebug() << diam;

        QSqlQuery query;
        query.prepare("INSERT INTO history (pocket_number, length, diameter) "
                    "VALUES ('7', :length ,:diameter)");
            query.bindValue(":length", len);
            query.bindValue(":diameter", diam);
            query.exec();

        QMessageBox::information(this, "Connecting", "GOOD!");
    }

}


