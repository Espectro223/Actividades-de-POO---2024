#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Manager.h"
#include "Login.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow) {
    ui->setupUi(this);
}

LoginWindow::~LoginWindow() {
    delete ui;
}

void LoginWindow::on_loginButton_clicked() {
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();

    if (Login::getInstance().validateUser(username, password)) {
        Manager::getInstance().showMainWindow();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
    }
}
