// Calculadora.h (sin cambios)
#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <vector>
#include <string>

class Calculadora {
public:
    int sumar(const std::vector<int>& numeros);
    int restar(const std::vector<int>& numeros);
    int multiplicar(const std::vector<int>& numeros);
    int dividir(const std::vector<int>& numeros);
};

#endif
