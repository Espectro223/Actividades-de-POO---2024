#include <QApplication>
#include <QWidget>
#include "formulario.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Formulario formulario;
    formulario.show();

    return app.exec();
}
