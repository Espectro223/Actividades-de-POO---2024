#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> expresiones_idiomaticas;
    expresiones_idiomaticas.push_back("No dejes para mañana lo que puedes hacer hoy");
    expresiones_idiomaticas.push_back("Meti la pata");
    expresiones_idiomaticas.push_back("A caballo regalado no se le miran los dientes");
    expresiones_idiomaticas.push_back("Hoy por ti mañana por mi");
    expresiones_idiomaticas.push_back("Pablito clavo un clavito");

    sort(expresiones_idiomaticas.begin(), expresiones_idiomaticas.end());

    cout << "Expresiones idiomáticas ordenadas alfabéticamente:" << endl;
    for (const string& expresion : expresiones_idiomaticas) {
        cout << expresion << endl;
    }

    return 0;
}
