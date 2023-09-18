#include "Definitions.h"

struct Paciente {
    string numeroAsegurado;
    string nombre;
    string fechaNacimiento;
    string telefono;
    string direccion;
    void getDirecion() {
        cout << direccion << "\n";
    }
    void getNombre() {
        cout << nombre << "\n";
    }
    void getNumeroAsegurado() {
        cout << numeroAsegurado << "\n";
    }
    void getPaciente() {
        cout << "Datos del Paciente: " << "\n";
        cout << nombre << "\n";
        cout << numeroAsegurado << "\n";
        cout << fechaNacimiento << "\n";
        cout << telefono << "\n";
        cout << direccion << "\n";
    }
};