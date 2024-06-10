#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <QWidget>
#include <QVector>
#include "instrumento.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Formulario; }
QT_END_NAMESPACE

class Formulario : public QWidget {
    Q_OBJECT

public:
    explicit Formulario(QWidget *parent = nullptr);
    ~Formulario();

private slots:
    void on_tipoInstrumentoComboBox_currentIndexChanged(int index);
    void on_agregarInstrumentoButton_clicked();
    void on_verStockButton_clicked();
    void on_afinarButton_clicked();

private:
    Ui::Formulario *ui;
    QVector<Instrumento*> instrumentos;
};

#endif // FORMULARIO_H
