#include "Paciente.h"
#include "CitaMedica.h"

int main() {

    Paciente p1;
    p1.nombre = "Diego";
    p1.numeroAsegurado = "75124385";
    p1.fechaNacimiento = "07/04/2002";
    p1.telefono = "999555777";
    p1.direccion = "Av. Mariano Melgar 353";
    p1.getPaciente();

    cout << "\n";

    CitaMedica c1;
    c1.duracion = 60;
    c1.fechaHora = "20/09/2023";
    c1.medicoAsignado = "Aldo Gabriel Castro";
    c1.numeroAsegurado = "75124385";
    c1.tipoAtencion = "Consulta General";
    c1.getCitaMedica();

    return 0;
}