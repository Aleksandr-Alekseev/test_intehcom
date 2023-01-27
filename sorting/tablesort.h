#ifndef TABLESORT_H
#define TABLESORT_H

#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>
#include <QMessageBox>

namespace Ui {
class tableSort;
}


class tableSort : public QDialog
{
    Q_OBJECT

public:
    explicit tableSort(QWidget *parent = nullptr);
    ~tableSort();


private:
    Ui::tableSort *ui;

    QSqlDatabase database;
    QSqlTableModel *table;

};

#endif // TABLESORT_H
