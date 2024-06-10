#include "linea.h"

Linea::Linea(int x_inicial, int y_inicial, int x_final, int y_final)
    : x_inicial(x_inicial), y_inicial(y_inicial), x_final(x_final), y_final(y_final) {}

int Linea::getXInicial() const { return x_inicial; }
int Linea::getYInicial() const { return y_inicial; }
int Linea::getXFinal() const { return x_final; }
int Linea::getYFinal() const { return y_final; }

void Linea::setXInicial(int x_inicial) { this->x_inicial = x_inicial; }
void Linea::setYInicial(int y_inicial) { this->y_inicial = y_inicial; }
void Linea::setXFinal(int x_final) { this->x_final = x_final; }
void Linea::setYFinal(int y_final) { this->y_final = y_final; }
