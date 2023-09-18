#include "CitaMedica.h"
#include "Paciente.h"

int main() {

    Paciente paciente1("75124385", "Diego Ivan", "04/07/2002", "999888777", "123 Mariano Melgar");
    CitaMedica cita1("2023-09-20 10:00", "Consulta General", "75124385", "Dr. Aldo Gabriel", 60);

    paciente1.getDatosDelPaciente();
    cout << "\n";
    cita1.getDatosDeCitaMedica();

    return 0;
}