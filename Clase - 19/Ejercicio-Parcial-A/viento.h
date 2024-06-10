#ifndef VIENTO_H
#define VIENTO_H

#include "instrumento.h"

class Viento : public Instrumento {
public:
    Viento(const QString &marca, double precio, const QString &metal_usado)
        : Instrumento(marca, precio), metal_usado(metal_usado) {}
    void afinar() override {
        qDebug() << "Afinando instrumento de viento";
    }
    QString getMetalUsado() const { return metal_usado; }

private:
    QString metal_usado;
};

#endif // VIENTO_H
