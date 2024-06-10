#include "Lienzo.h"

Lienzo::Lienzo(QWidget *parent)
    : QWidget(parent), dibujando(false), grosorActual(3), colorActual(Qt::black) {
    miLabel = new MiLabel(this);
    miLabel->setText("Clear");
    miLabel->move(width() - 60, height() - 30); // Ajustar según sea necesario
    connect(miLabel, SIGNAL(clicked()), this, SLOT(borrarDibujo()));
}

void Lienzo::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    QPen pen(colorActual, grosorActual, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    painter.setPen(pen);

    for (const QPoint &punto : puntos) {
        painter.drawPoint(punto);
    }
}

void Lienzo::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_A) {
        dibujando = true;
    } else if (event->key() == Qt::Key_D) {
        dibujando = false;
    } else if (event->key() >= Qt::Key_1 && event->key() <= Qt::Key_5) {
        grosorActual = event->key() - Qt::Key_0;
    } else if (event->key() == Qt::Key_R) {
        colorActual = Qt::red;
    } else if (event->key() == Qt::Key_B) {
        colorActual = Qt::blue;
    } else if (event->key() == Qt::Key_G) {
        colorActual = Qt::green;
    }
}

void Lienzo::mouseMoveEvent(QMouseEvent *event) {
    if (dibujando) {
        puntos.append(event->pos());
        update();
    }
}

void Lienzo::borrarDibujo() {
    puntos.clear();
    update();
}
