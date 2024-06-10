#include "Login.h"
#include "AdminDB.h"
#include <QCryptographicHash>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QDebug>

Login::Login() {}

Login::~Login() {}

Login& Login::getInstance() {
    static Login instance;
    return instance;
}

QString Login::hashPassword(const QString& password) {
    return QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Md5).toHex());
}

bool Login::validateUser(const QString& username, const QString& password) {
    QString hashedPassword = hashPassword(password);
    QSqlQuery query(AdminDB::getInstance().getDatabase());

    query.prepare("SELECT * FROM usuarios WHERE usuario = :username AND clave = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", hashedPassword);

    if (!query.exec()) {
        qDebug() << "Error: Failed to execute query -" << query.lastError();
        return false;
    }

    return query.next();
}
