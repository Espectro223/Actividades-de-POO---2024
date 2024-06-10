#include "adduserwindow.h"
#include "ui_adduserwindow.h"
#include "AdminDB.h"
#include <QMessageBox>

AddUserWindow::AddUserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddUserWindow) {
    ui->setupUi(this);
}

AddUserWindow::~AddUserWindow() {
    delete ui;
}

void AddUserWindow::on_addUserButton_clicked() {
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();

    if (AdminDB::getInstance().addUser(username, password)) {
        QMessageBox::information(this, "Success", "User added successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to add user.");
    }
}
