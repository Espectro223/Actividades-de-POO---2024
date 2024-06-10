#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H

#include <QString>
#include <QDebug>

class Instrumento {
public:
    Instrumento(const QString &marca, double precio)
        : marca(marca), precio(precio) {}
    virtual ~Instrumento() = default;
    virtual void afinar() = 0;

    QString getMarca() const { return marca; }
    double getPrecio() const { return precio; }

protected:
    QString marca;
    double precio;
};

#endif // INSTRUMENTO_H
