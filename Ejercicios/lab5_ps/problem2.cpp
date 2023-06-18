#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

struct equipoFutbol {
    string nombre;
    int victorias;
    int derrotas;
    int empates;
    int golesAnotados;
    string nombreGoleador;
    int golesDelGoleados;
};
struct equipoBaloncesto {
    string nombre;
    int victorias;
    int derrotas;
    int perdidasDelBalon;
    int rebotesRecogidos;
    string nombreMejorAnotadorTriples;
    int triplesDelMejorAnotadosDeTriples;
};

void mostrarMejoresAnotadoresDeTriples(vector<equipoBaloncesto>baloncesto) {
    int maxi = 0;
    for(int i=0; i<baloncesto.size(); i++) {
        cout << "Equipo: " <<baloncesto[i].nombre << "\n";
        cout << "Mejor Anotador de Triples: " << baloncesto[i].nombreMejorAnotadorTriples <<"\n";
    }
};

void maximoGoleadorDeLaLiga(vector<equipoFutbol>futbol) {
    int index = 0;
    equipoFutbol maxi = futbol[0];
    for(int i=1; i<futbol.size(); i++) {
        if(maxi.golesDelGoleados < futbol[i].golesDelGoleados) {
            maxi = futbol[i];
        }
    }
    cout << "El maximo goleador de la liga de futbol es: " << maxi.nombreGoleador <<" con " << maxi.golesDelGoleados << " anotados\n";
};

void mostrarEquipoGanadorFutbol(vector<equipoFutbol>ft) {
    int index = 0;
    equipoFutbol maxi = ft[0];
    for(int i=1; i<ft.size(); i++) {
        if((maxi.victorias*3 + maxi.empates) < (ft[i].victorias*3 + ft[i].empates)) {
            maxi = ft[i];
        }
    }
    cout << "El equipo ganador de la liga es: " << maxi.nombre << " con un total de "<< maxi.victorias*3 + maxi.empates << " puntos\n";
};

void mostrarEquipoGanadorBaloncesto(vector<equipoBaloncesto>bc) {
    int index = 0;
    equipoBaloncesto maxi = bc[0];
    for(int i=1; i<bc.size(); i++) {
        if((maxi.victorias*3) < (bc[i].victorias*3)) {
            maxi = bc[i];
        }
    }
    cout << "El equipo ganador de la liga es: " << maxi.nombre << " con un total de "<< maxi.victorias*3 << " puntos\n";
};

int main() {
    vector<equipoBaloncesto>balon;
    vector<equipoFutbol>fut;

    int eqBal, eqFut;
    cout << "Agregar numero de equipos de Baloncesto: "; cin >> eqBal;
    for(int i=0; i<eqBal; i++) {
        equipoBaloncesto eq1;
        cout << "Ingresar datos del equipo " << i+1 <<": \n";
        cout << "Ingresar nombre del equipo " << i+1 << ": ";
        cin >> eq1.nombre;
        cout << "Ingresar numero de victorias del equipo " << i+1 << ": ";
        cin >> eq1.victorias;
        cout << "Ingresar numero de derrotas del equipo " << i+1 << ": ";
        cin >> eq1.derrotas;
        cout << "Ingresar numero de veces que se perdio el balon del equipo " << i+1 << ": ";
        cin >> eq1.perdidasDelBalon;
        cout << "Ingresar numero de rebotes recogidos del equipo " << i+1 << ": ";
        cin >> eq1.rebotesRecogidos;
        cout << "Ingresar nombre del mejor anotador de triples del equipo " << i+1 << ": ";
        cin >> eq1.nombreMejorAnotadorTriples;
        cout << "Ingresar numero de triples anotados por el mejor anotador de triples del equipo " << i+1 << ": ";
        cin >> eq1.triplesDelMejorAnotadosDeTriples;
        balon.push_back(eq1);
    }
    cout << "---------------x-------------";
    cout << "Agregar numero de equipos de Futbol: "; cin >> eqFut; 
    for(int i=0; i<eqFut; i++) {
        equipoFutbol eq1;
        cout << "Ingresar datos del equipo " << i+1 << ": \n";
        cout << "Ingresar nombre del equipo " << i+1 << ": ";
        cin >> eq1.nombre;
        cout << "Ingresar numero de victorias del equipo " << i+1 << ": ";
        cin >> eq1.victorias;
        cout << "Ingresar numero de derrotas del equipo " << i+1 << ": ";
        cin >> eq1.derrotas;
        cout << "Ingresar numero de empates del equipo " << i+1 << ": ";
        cin >> eq1.empates;
        cout << "Ingresar numero de goles anotados del equipo " << i+1 << ": ";
        cin >> eq1.golesAnotados;
        cout << "Ingresar nombre del goleador del equipo " << i+1 << ": ";
        cin >> eq1.nombreGoleador;
        cout << "Ingresar numero de goles anotados por el goleador del equipo " << i+1 << ": ";
        cin >> eq1.golesDelGoleados;
        fut.push_back(eq1);
    }
    int option = 0;
    cout << "\n";
    do{
        cout << "1. Listar los mejores anotadores de triples de cada equipo de Baloncesto\n";
        cout << "2. Mostrar maximo goleador de la liga de futbol\n";
        cout << "3. Mostrar equipo ganador de la liga de futbol\n";
        cout << "4. Mostrar equipo ganador de la liga de baloncesto\n";
        cout << "5. Salir del programa\n";
        cout << "Ingrese una opcion: "; cin >> option;
        cout << "\n";

        switch (option){
            case 1:
                mostrarMejoresAnotadoresDeTriples(balon);
                break;
            case 2:
                maximoGoleadorDeLaLiga(fut);
                break;
            case 3:
                mostrarEquipoGanadorFutbol(fut);
                break;
            case 4:
                mostrarEquipoGanadorBaloncesto(balon);
                break;
            case 5:
                break;
        
            default:
                break;
        }

    }while(option != 5);

    cout << "Gracias por usar nuestro programa!!!";

    return 0;
}