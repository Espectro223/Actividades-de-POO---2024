#ifndef GUITARRA_H
#define GUITARRA_H

#include "instrumento.h"

class Guitarra : public Instrumento {
public:
    Guitarra(const QString &marca, double precio, int cantidad_de_cuerdas)
        : Instrumento(marca, precio), cantidad_de_cuerdas(cantidad_de_cuerdas) {}
    void afinar() override {
        qDebug() << "Afinando guitarra";
    }
    int getCantidadDeCuerdas() const { return cantidad_de_cuerdas; }

private:
    int cantidad_de_cuerdas;
};

#endif // GUITARRA_H
