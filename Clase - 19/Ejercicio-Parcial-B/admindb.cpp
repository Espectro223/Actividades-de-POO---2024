#include "admindb.h"
#include <QSqlError>
#include <QDebug>

AdminDB::AdminDB()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(":memory:");

    if (!db.open()) {
        qDebug() << "Error: connection with database failed";
    } else {
        qDebug() << "Database: connection ok";
        createTable();
        insertDefaultLine();
    }
}

AdminDB::~AdminDB()
{
    db.close();
}

void AdminDB::createTable()
{
    QSqlQuery query;
    query.exec("CREATE TABLE lineas (id INTEGER PRIMARY KEY AUTOINCREMENT, x_inicial INTEGER, y_inicial INTEGER, x_final INTEGER, y_final INTEGER)");
}

void AdminDB::insertDefaultLine()
{
    QSqlQuery query;
    query.prepare("INSERT INTO lineas (x_inicial, y_inicial, x_final, y_final) VALUES (0, 0, 8, 192)");
    query.exec();
}

QSqlQuery AdminDB::getLine() const
{
    QSqlQuery query;
    query.exec("SELECT * FROM lineas LIMIT 1");
    return query;
}
