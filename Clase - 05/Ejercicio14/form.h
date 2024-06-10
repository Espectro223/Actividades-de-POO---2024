#ifndef FORM_H
#define FORM_H

#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

class Form : public QWidget {
    Q_OBJECT
    private:
        QLabel* lLegajo, *lNombre, *lApellido;
        QLineEdit* leLegajo, *leNombre, *leApellido;
        QPushButton* pbSalir;
        QGridLayout* layout;

    public:
        Form();

    private slots:
        void finalizar_Programa();
};

#endif // FORM_H
