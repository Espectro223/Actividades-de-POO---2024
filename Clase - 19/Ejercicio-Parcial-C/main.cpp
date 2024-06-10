#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include "Manager.h"
#include "AdminDB.h"

// Function to create the database and the table 'usuarios'
void createDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("base.sqlite");

    if (!db.open()) {
        qDebug() << "Error: Could not open database.";
        return;
    }

    QSqlQuery query;
    if (!query.exec("CREATE TABLE IF NOT EXISTS usuarios (id INTEGER PRIMARY KEY, usuario TEXT, clave TEXT)")) {
        qDebug() << "Error: Failed to create table -" << query.lastError();
    }

    db.close();
}

// Function to add a user to the database
void addUser(const QString& username, const QString& password) {
    if (AdminDB::getInstance().addUser(username, password)) {
        qDebug() << "User added successfully.";
    } else {
        qDebug() << "Failed to add user.";
    }
}

int main(int argc, char *argv[]) {
    // Step 1: Create the database and table if they do not exist
    createDatabase();

    // Step 2: Add a user (for development/testing purposes)
    //addUser("admin", "1234");

    // Step 3: Start the Qt application
    QApplication app(argc, argv);
    Manager::getInstance().showLoginWindow();
    // Manager::getInstance().showAddUserWindow();
    return app.exec();
}
