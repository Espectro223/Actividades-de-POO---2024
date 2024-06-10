#ifndef ADMINDB_H
#define ADMINDB_H

#include <QSqlDatabase>
#include <QString>

class AdminDB {
public:
    static AdminDB& getInstance();
    QSqlDatabase getDatabase();
    bool addUser(const QString& username, const QString& password);

private:
    AdminDB();
    ~AdminDB();
    AdminDB(const AdminDB&) = delete;
    AdminDB& operator=(const AdminDB&) = delete;

    QSqlDatabase db;
};

#endif // ADMINDB_H
