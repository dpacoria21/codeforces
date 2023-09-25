// Analizador.cpp
#include "Analizador.h"
#include <sstream>
#include <vector>
#include <string>
#include <cctype>
#include <iostream>
using namespace std;

vector<string> Analizador::obtenerOperadores(const string& operacion) {
    vector<string> operadores;
    for (char caracter : operacion) {
        if (caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/') {
            operadores.push_back(string(1, caracter));
        }
    }
    return operadores;
}

vector<int> Analizador::obtenerNumeros(const string& operacion) {
    vector<int> numeros;
    istringstream iss(operacion);
    string token;
    char operador = '+'; // Inicializamos el operador con '+' por defecto
    while (getline(iss, token, '+')) {
        istringstream numStream(token);
        int numero;
        while (numStream >> numero) {
            cout << operador << "\n";
            if (operador == '+') {
                numeros.push_back(numero);
            } else if (operador == '-') {
                numeros.push_back(-numero);
            } else if (operador == '*') {
                if (!numeros.empty()) {
                    numeros.back() *= numero;
                } else {
                    cerr << "Operación no válida: " << operacion << endl;
                    exit(1);
                }
            } else if (operador == '/') {
                if (numero == 0) {
                    cerr << "División por cero no permitida." << endl;
                    exit(1);
                }
                if (!numeros.empty()) {
                    numeros.back() /= numero;
                } else {
                    cerr << "Operación no válida: " << operacion << endl;
                    exit(1);
                }
            }
        }
        // Identificamos el siguiente operador
        size_t pos = operacion.find(token) + token.length();
        if (pos < operacion.length()) {
            operador = operacion[pos];
        }
    }
    
    return numeros;
}
