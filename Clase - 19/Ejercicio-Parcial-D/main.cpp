#include <QApplication>
#include "Lienzo.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Lienzo lienzo;
    lienzo.resize(800, 600);
    lienzo.show();

    return app.exec();
}
