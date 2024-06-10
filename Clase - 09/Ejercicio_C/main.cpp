#include <QApplication>
#include "barra.h"

int main (int argc, char** argv) {
    QApplication a(argc, argv);
    Barra barra;

    barra.show();

    return a.exec();
}
