#include "Definitions.h"

class Paciente {
private:
    string numeroAsegurado;
    string nombre;
    string fechaNacimiento;
    string telefono;
    string direccion;

public:
    
    Paciente(string numAsegurado, string nom, string fechaNac, string tel, string dir)
        : numeroAsegurado(numAsegurado), nombre(nom), fechaNacimiento(fechaNac), telefono(tel), direccion(dir) {}

    string obtenerNumeroAsegurado() const {
        return numeroAsegurado;
    }

    string obtenerNombre() const {
        return nombre;
    }

    string obtenerFechaNacimiento() const {
        return fechaNacimiento;
    }

    string obtenerTelefono() const {
        return telefono;
    }

    string obtenerDireccion() const {
        return direccion;
    }

    void establecerNumeroAsegurado(string numAsegurado) {
        numeroAsegurado = numAsegurado;
    }

    void establecerNombre(string nom) {
        nombre = nom;
    }

    void establecerFechaNacimiento(string fechaNac) {
        fechaNacimiento = fechaNac;
    }

    void establecerTelefono(string tel) {
        telefono = tel;
    }

    void establecerDireccion(string dir) {
        direccion = dir;
    }

    void getDatosDelPaciente() {
        cout << "Información del Paciente:" << endl;
        cout << "Número de Asegurado: " << obtenerNumeroAsegurado() << endl;
        cout << "Nombre: " << obtenerNombre() << endl;
        cout << "Fecha de Nacimiento: " << obtenerFechaNacimiento() << endl;
        cout << "Teléfono: " << obtenerTelefono() << endl;
        cout << "Dirección: " << obtenerDireccion() << endl;
    }
};