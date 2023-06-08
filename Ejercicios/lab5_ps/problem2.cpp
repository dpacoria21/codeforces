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

int main() {
    vector<equipoBaloncesto>balon;
    vector<equipoFutbol>fut;

    int eqBal, eqFut;
    cout << "Agregar numero de equipos de Baloncesto: "; cin >> eqBal;
    for(int i=0; i<eqBal; i++) {
        equipoBaloncesto eq1;
        cout << "Ingresar datos del equipo " << i+1 <<": \n";
        cin >> eq1.nombre;
        cin >> eq1.victorias;
        cin >> eq1.derrotas;
        cin >> eq1.perdidasDelBalon;
        cin >> eq1.rebotesRecogidos;
        cin >> eq1.nombreMejorAnotadorTriples;
        cin >> eq1.triplesDelMejorAnotadosDeTriples;
    }
    cout << "---------------x-------------";
    cout << "Agregar numero de equipos de Futbol: "; cin >> eqFut; 
    for(int i=0; i<eqFut; i++) {
        equipoFutbol eq1;
        cout << "Ingresar datos del equipo " << i+1 << ": \n";
        cin >> eq1.nombre;
        cin >> eq1.victorias;
        cin >> eq1.derrotas;
        cin >> eq1.empates;
        cin >> eq1.golesAnotados;
        cin >> eq1.nombreGoleador;
        cin >> eq1.golesDelGoleados;
    }

    return 0;
}