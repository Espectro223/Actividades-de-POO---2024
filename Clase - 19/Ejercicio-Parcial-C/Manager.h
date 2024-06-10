#ifndef MANAGER_H
#define MANAGER_H

#include <QObject>
#include <QMainWindow>

class Manager : public QObject {
    Q_OBJECT

public:
    static Manager& getInstance();
    void showLoginWindow();
    void showMainWindow();
    void showAddUserWindow();

private:
    Manager();
    ~Manager();
    Manager(const Manager&) = delete;
    Manager& operator=(const Manager&) = delete;

    QMainWindow* loginWindow;
    QMainWindow* mainWindow;
    QMainWindow* addUserWindow;
};

#endif // MANAGER_H
