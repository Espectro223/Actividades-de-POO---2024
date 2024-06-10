#ifndef LINEA_H
#define LINEA_H

class Linea
{
public:
    Linea(int x_inicial, int y_inicial, int x_final, int y_final);

    int getXInicial() const;
    int getYInicial() const;
    int getXFinal() const;
    int getYFinal() const;

    void setXInicial(int x_inicial);
    void setYInicial(int y_inicial);
    void setXFinal(int x_final);
    void setYFinal(int y_final);

private:
    int x_inicial;
    int y_inicial;
    int x_final;
    int y_final;
};

#endif // LINEA_H
