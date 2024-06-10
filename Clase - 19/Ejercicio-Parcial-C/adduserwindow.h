#ifndef ADDUSERWINDOW_H
#define ADDUSERWINDOW_H

#include <QMainWindow>

namespace Ui {
class AddUserWindow;
}

class AddUserWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit AddUserWindow(QWidget *parent = nullptr);
    ~AddUserWindow();

private slots:
    void on_addUserButton_clicked();

private:
    Ui::AddUserWindow *ui;
};

#endif // ADDUSERWINDOW_H
