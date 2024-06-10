#ifndef ADMINDB_H
#define ADMINDB_H

#include <QSqlDatabase>
#include <QSqlQuery>

class AdminDB
{
public:
    AdminDB();
    ~AdminDB();
    QSqlQuery getLine() const;

private:
    QSqlDatabase db;
    void createTable();
    void insertDefaultLine();
};

#endif // ADMINDB_H
