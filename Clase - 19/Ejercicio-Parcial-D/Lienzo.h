#ifndef LIENZO_H
#define LIENZO_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QPainter>

class MiLabel : public QLabel {
    Q_OBJECT

public:
    explicit MiLabel(QWidget *parent = nullptr) : QLabel(parent) {}

signals:
    void clicked();

protected:
    void mousePressEvent(QMouseEvent *event) override {
        emit clicked();
    }
};

class Lienzo : public QWidget {
    Q_OBJECT

public:
    explicit Lienzo(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    bool dibujando;
    QList<QPoint> puntos;
    int grosorActual;
    QColor colorActual;
    MiLabel *miLabel;

private slots:
    void borrarDibujo();
};

#endif // LIENZO_H
