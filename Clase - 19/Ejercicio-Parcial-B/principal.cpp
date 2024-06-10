#include "principal.h"
#include "ui_principal.h"
#include <QPainter>
#include <QSqlQuery>
#include <QSqlRecord>

Principal::Principal(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Principal)
    , adminDB(new AdminDB())
    , linea(nullptr)
{
    ui->setupUi(this);

    // Cargar datos de la base de datos
    QSqlQuery query = adminDB->getLine();
    if (query.next()) {
        int x_inicial = query.value("x_inicial").toInt();
        int y_inicial = query.value("y_inicial").toInt();
        int x_final = query.value("x_final").toInt();
        int y_final = query.value("y_final").toInt();
        linea = new Linea(x_inicial, y_inicial, x_final, y_final);
    }

    // Conectar el botón actualizar a la función actualizarLinea
    /*connect(ui->pushButtonActualizar, &QPushButton::clicked, this, [this]() {
        int x_inicial = ui->lineEditXInicial->text().toInt();
        int y_inicial = ui->lineEditYInicial->text().toInt();
        int x_final = ui->lineEditXFinal->text().toInt();
        int y_final = ui->lineEditYFinal->text().toInt();
        actualizarLinea(x_inicial, y_inicial, x_final, y_final);
    });*/
}

Principal::~Principal()
{
    delete ui;
    delete adminDB;
    delete linea;
}

void Principal::actualizarLinea(int x_inicial, int y_inicial, int x_final, int y_final)
{
    if (linea) {
        linea->setXInicial(x_inicial);
        linea->setYInicial(y_inicial);
        linea->setXFinal(x_final);
        linea->setYFinal(y_final);
        update(); // Redibuja la ventana
    }
}

void Principal::paintEvent(QPaintEvent *event)
{
    if (linea) {
        QPainter painter(this);
        painter.drawLine(linea->getXInicial(), linea->getYInicial(), linea->getXFinal(), linea->getYFinal());
    }
}
