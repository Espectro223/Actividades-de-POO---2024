#include "Manager.h"
#include "Login.h"
#include "loginwindow.h"
#include "mainwindow.h"
#include "adduserwindow.h"

Manager::Manager() {
    loginWindow = new LoginWindow();
    mainWindow = new MainWindow();
    addUserWindow = new AddUserWindow();
}

Manager::~Manager() {
    delete loginWindow;
    delete mainWindow;
    delete addUserWindow;
}

Manager& Manager::getInstance() {
    static Manager instance;
    return instance;
}

void Manager::showLoginWindow() {
    loginWindow->show();
}

void Manager::showMainWindow() {
    loginWindow->close();
    mainWindow->show();
}

void Manager::showAddUserWindow() {
    addUserWindow->show();
}
