// Procesador.cpp
#include "Procesador.h"
#include <iostream>
using namespace std;

Procesador::Procesador() {}

void Procesador::procesarOperacion(const string& operacion) {
    vector<string> operadores = analizador.obtenerOperadores(operacion);
    vector<int> numeros = analizador.obtenerNumeros(operacion);

    if (numeros.size() != operadores.size() + 1 || operadores.size() > 6) {
        cerr << "Operación no válida." << endl;
        return;
    }
    // for(auto num: numeros) {
    //     cout << num << "\n";
    // }
    // for(auto op: operadores) {
    //     cout << op << "\n";
    // }
    int resultado = numeros[0];

    for (size_t i = 0; i < operadores.size(); ++i) {
        if (operadores[i] == "+") {
            resultado += numeros[i + 1];
        } else if (operadores[i] == "-") {
            resultado += numeros[i + 1];
            cout << resultado << "\n";
        } else if (operadores[i] == "*") {
            resultado *= numeros[i + 1];
        } else if (operadores[i] == "/") {
            if (numeros[i + 1] == 0) {
                cerr << "División por cero no permitida." << endl;
                return;
            }
            resultado /= numeros[i + 1];
        } else {
            cerr << "Operador no válido: " << operadores[i] << endl;
            return;
        }
    }

    cout << "Resultado: " << resultado << endl;
}
