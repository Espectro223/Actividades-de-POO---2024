#include "formulario.h"
#include "ui_formulario.h"
#include "guitarra.h"
#include "viento.h"
#include "teclado.h"

Formulario::Formulario(QWidget *parent)
    : QWidget(parent), ui(new Ui::Formulario) {
    ui->setupUi(this);
}

Formulario::~Formulario() {
    delete ui;
}

void Formulario::on_tipoInstrumentoComboBox_currentIndexChanged(int index) {
    ui->marcaLineEdit->clear();
    ui->precioLineEdit->clear();
    ui->cantidadCuerdasLineEdit->clear();
    ui->cantidadTeclasLineEdit->clear();
    ui->metalUsadoLineEdit->clear();

    ui->cantidadCuerdasLineEdit->setEnabled(index == 0);  // Guitarra
    ui->cantidadTeclasLineEdit->setEnabled(index == 2);   // Teclado
    ui->metalUsadoLineEdit->setEnabled(index == 1);       // Viento
}

void Formulario::on_agregarInstrumentoButton_clicked() {
    QString marca = ui->marcaLineEdit->text();
    double precio = ui->precioLineEdit->text().toDouble();

    switch (ui->tipoInstrumentoComboBox->currentIndex()) {
    case 0: {  // Guitarra
        int cantidad_cuerdas = ui->cantidadCuerdasLineEdit->text().toInt();
        instrumentos.append(new Guitarra(marca, precio, cantidad_cuerdas));
        break;
    }
    case 1: {  // Viento
        QString metal_usado = ui->metalUsadoLineEdit->text();
        instrumentos.append(new Viento(marca, precio, metal_usado));
        break;
    }
    case 2: {  // Teclado
        int cantidad_teclas = ui->cantidadTeclasLineEdit->text().toInt();
        instrumentos.append(new Teclado(marca, precio, cantidad_teclas));
        break;
    }
    }
}

void Formulario::on_verStockButton_clicked() {
    for (auto instrumento : instrumentos) {
        qDebug() << "Marca:" << instrumento->getMarca()
                 << ", Precio:" << instrumento->getPrecio();
        if (auto guitarra = dynamic_cast<Guitarra*>(instrumento)) {
            qDebug() << "Cantidad de cuerdas:" << guitarra->getCantidadDeCuerdas();
        } else if (auto viento = dynamic_cast<Viento*>(instrumento)) {
            qDebug() << "Metal usado:" << viento->getMetalUsado();
        } else if (auto teclado = dynamic_cast<Teclado*>(instrumento)) {
            qDebug() << "Cantidad de teclas:" << teclado->getCantidadDeTeclas();
        }
    }
}


void Formulario::on_afinarButton_clicked() {
    for (auto instrumento : instrumentos) {
        instrumento->afinar();
    }
}
