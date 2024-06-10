#ifndef TECLADO_H
#define TECLADO_H

#include "instrumento.h"

class Teclado : public Instrumento {
public:
    Teclado(const QString &marca, double precio, int cantidad_de_teclas)
        : Instrumento(marca, precio), cantidad_de_teclas(cantidad_de_teclas) {}
    void afinar() override {
        qDebug() << "Afinando teclado";
    }
    int getCantidadDeTeclas() const { return cantidad_de_teclas; }

private:
    int cantidad_de_teclas;
};

#endif // TECLADO_H
