#include <iostream>
#include "Procesador.h"

using namespace std;

int main() {
    Procesador procesador;
    string operacion;

    cout << "Ingrese una operación matemática (por ejemplo, '1+2+3+4+5+6'): ";
    getline(cin, operacion);

    procesador.procesarOperacion(operacion);

    return 0;
}
