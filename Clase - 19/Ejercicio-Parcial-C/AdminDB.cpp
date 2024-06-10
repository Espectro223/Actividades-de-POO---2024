#include "AdminDB.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QCryptographicHash>
#include <QDebug>

AdminDB::AdminDB() {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("base.sqlite");

    if (!db.open()) {
        qDebug() << "Error: Could not open database." << db.lastError();
    }
}

AdminDB::~AdminDB() {
    db.close();
}

AdminDB& AdminDB::getInstance() {
    static AdminDB instance;
    return instance;
}

QSqlDatabase AdminDB::getDatabase() {
    return db;
}

bool AdminDB::addUser(const QString& username, const QString& password) {
    QSqlQuery query(db);
    QString hashedPassword = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Md5).toHex());

    query.prepare("INSERT INTO usuarios (usuario, clave) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", hashedPassword);

    if (!query.exec()) {
        qDebug() << "Error: Failed to insert user -" << query.lastError();
        return false;
    }

    return true;
}
