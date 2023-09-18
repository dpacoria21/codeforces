#include "Definitions.h"

class CitaMedica {
private:
    string fechaHora;
    string tipoAtencion;
    string numeroAsegurado;
    string medicoAsignado;
    int duracion;

public:

    CitaMedica(string fechaHora, string tipoAtencion, string numeroAsegurado, string medicoAsignado, int duracion)
        : fechaHora(fechaHora), tipoAtencion(tipoAtencion), numeroAsegurado(numeroAsegurado), medicoAsignado(medicoAsignado), duracion(duracion) {}


    string obtenerFechaHora() const {
        return fechaHora;
    }

    string obtenerTipoAtencion() const {
        return tipoAtencion;
    }

    string obtenerNumeroAsegurado() const {
        return numeroAsegurado;
    }

    string obtenerMedicoAsignado() const {
        return medicoAsignado;
    }

    int obtenerDuracion() const {
        return duracion;
    }

    // Métodos set
    void establecerFechaHora(string fechaHora) {
        this->fechaHora = fechaHora;
    }

    void establecerTipoAtencion(string tipoAtencion) {
        this->tipoAtencion = tipoAtencion;
    }

    void establecerNumeroAsegurado(string numeroAsegurado) {
        this->numeroAsegurado = numeroAsegurado;
    }

    void establecerMedicoAsignado(string medicoAsignado) {
        this->medicoAsignado = medicoAsignado;
    }

    void establecerDuracion(int duracion) {
        this->duracion = duracion;
    }

    void getDatosDeCitaMedica() {
        cout << "Información de la Cita Médica:" << endl;
        cout << "Fecha y Hora: " << obtenerFechaHora() << endl;
        cout << "Tipo de Atención: " << obtenerTipoAtencion() << endl;
        cout << "Médico Asignado: " << obtenerMedicoAsignado() << endl;
        cout << "Duración (minutos): " << obtenerDuracion() << endl;
    }
};