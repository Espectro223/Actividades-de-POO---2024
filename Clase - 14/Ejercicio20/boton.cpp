#include "boton.h"

Boton::Boton(QWidget *parent)
    : QWidget{parent}
{

}

void Boton::setColor(Color col)
{
    color = col;
    this->repaint();
}

void Boton::paintEvent(QPaintEvent *)
{

    QPainter painter(this);

    QColor colorToUse;
    if (color == Color::ROJO) {
        colorToUse = Qt::red;
    } else if (color == Color::AZUL) {
        colorToUse = Qt::blue;
    } else if (color == Color::MAGENTA) {
        colorToUse = Qt::magenta;
    } else {
        colorToUse = Qt::darkGreen;
    }

    colorToUse.setAlpha(128);

    painter.fillRect(0, 0, this->width(), this->height(), colorToUse);
}


void Boton::mousePressEvent(QMouseEvent *)
{
    emit signal_click();
}
