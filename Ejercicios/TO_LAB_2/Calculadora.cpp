// Calculadora.cpp
#include "Calculadora.h"
#include <stdexcept>
using namespace std;

int Calculadora::sumar(const vector<int>& numeros) {
    int resultado = 0;
    for (int numero : numeros) {
        resultado += numero;
    }
    return resultado;
}

int Calculadora::restar(const vector<int>& numeros) {
    int resultado = numeros[0];
    for (size_t i = 1; i < numeros.size(); ++i) {
        resultado -= numeros[i];
    }
    return resultado;
}

int Calculadora::multiplicar(const vector<int>& numeros) {
    int resultado = 1;
    for (int numero : numeros) {
        resultado *= numero;
    }
    return resultado;
}

int Calculadora::dividir(const vector<int>& numeros) {
    if (numeros.size() < 2) {
        throw runtime_error("Se requieren al menos dos números para la división.");
    }
    
    int resultado = numeros[0];
    for (size_t i = 1; i < numeros.size(); ++i) {
        if (numeros[i] == 0) {
            throw runtime_error("División por cero no permitida.");
        }
        resultado /= numeros[i];
    }
    return resultado;
}
