#include "Definitions.h"

struct CitaMedica {
    string fechaHora;
    string tipoAtencion;
    string numeroAsegurado;
    string medicoAsignado;
    int duracion;
    void getDuracion() {
        cout << "Duración de la cita médica: " <<duracion << "\n";
    }
    void getMedicoAsignado() {
        cout << "Medico Asignado: " << medicoAsignado << "\n";
    }
    void getTipoAtencion() {
        cout << "Tipo de Atencion: " << tipoAtencion << "\n";
    }
    void getNumeroAsegurado(){ 
        cout << "Numero asegurado: " << numeroAsegurado << "\n";
    }
    void getCitaMedica() {
        cout << "Datos de la cita medica: " << "\n";
        getTipoAtencion();
        getDuracion();
        getMedicoAsignado();
        getNumeroAsegurado();
    }
};