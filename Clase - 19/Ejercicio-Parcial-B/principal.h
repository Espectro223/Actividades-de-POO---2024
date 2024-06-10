#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QWidget>
#include "admindb.h"
#include "linea.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QWidget
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

    // Nuevo método para actualizar la línea
    void actualizarLinea(int x_inicial, int y_inicial, int x_final, int y_final);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Ui::Principal *ui;
    AdminDB *adminDB;
    Linea *linea;
};

#endif // PRINCIPAL_H
