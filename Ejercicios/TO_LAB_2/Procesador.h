// Procesador.h (sin cambios)
#ifndef PROCESADOR_H
#define PROCESADOR_H

#include <string>
#include "Analizador.h"
#include "Calculadora.h"

class Procesador {
public:
    Procesador();
    void procesarOperacion(const std::string& operacion);
private:
    Analizador analizador;
    Calculadora calculadora;
};

#endif
