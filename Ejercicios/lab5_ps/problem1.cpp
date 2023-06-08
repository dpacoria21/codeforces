#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

struct Persona {
    string nombre;
    string apellido;
    int edad;
};

string showPerson(Persona p) {
    string s = "";
    s+= "\nSu nombre es: " + p.nombre + "\n";
    s+= "Su apellido es: " + p.apellido + "\n";
    s+= "Su edad es: " + to_string(p.edad) + "\n";
    return s;
}

int main() {

    Persona p1;
    cout << "Ingrese nombre: "; cin >> p1.nombre;
    cout << "Ingrese apellido: "; cin >> p1.apellido;
    cout << "Ingrese edad: "; cin >> p1.edad; 

    cout << showPerson(p1);

    return 0;
}