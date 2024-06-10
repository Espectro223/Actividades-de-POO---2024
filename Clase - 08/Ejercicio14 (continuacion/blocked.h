#ifndef BLOCKED_H
#define BLOCKED_H

#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QTimer>

class Blocked : public QWidget {
    Q_OBJECT
private:
    QLabel* lBloqueado;
    QPushButton* pbSalir;
    QGridLayout* layout;

public:
    Blocked();

private slots:
    void finalizar_Programa();
};

#endif // BLOCKED_H
