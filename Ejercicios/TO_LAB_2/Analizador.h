// Analizador.h
#ifndef ANALIZADOR_H
#define ANALIZADOR_H

#include <string>
#include <vector>

using namespace std;

class Analizador {
public:
    vector<std::string> obtenerOperadores(const std::string& operacion);
    vector<int> obtenerNumeros(const std::string& operacion);
};

#endif
