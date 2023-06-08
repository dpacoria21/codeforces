#include <iostream>

using namespace std;

double AreaCuadrilateros(double lado_a, double lado_b){
    if(lado_a <= 0 || lado_b <= 0) return 0.0;
    return lado_a * lado_b;
};
double AreaTriangulos (double lado_a, double lado_b) {
    if(lado_a <= 0 || lado_b <= 0) return 0.0;
    return (lado_a * lado_b)/2;
};

int main() {
    double a, b; int figura;
    cout << "Que figura quiere analizar\n1.Cuadrado\n2.Rectangulo\n3.Triangulo\n";
    cin >> figura;
    switch (figura){
    case 1:
        cout << "Introduzca el lado: ";
        cin >> a;
        if(AreaCuadrilateros(a, a) == 0){
            cout <<"Ojo el area es negativa\n";
        }else {
            cout <<"El area del cuadrado es: "<< AreaCuadrilateros(a, a);
        }

        break;
    case 2:
        cout << "Introduzca el lado a y b: ";
        cin >> a >> b;
        if(AreaCuadrilateros(a, b) == 0){
            cout <<"Ojo el area es negativa\n";
        }else {
            cout <<"El area del rectangulo es: "<< AreaCuadrilateros(a, b);
        }
        break;
    case 3:
        cout << "Introduzca la base y la altura: ";
        cin >> a >> b;
        if(AreaTriangulos(a, b) == 0){
            cout <<"Ojo el area es negativa\n";
        }else {
            cout <<"El area del triangulo es: "<< AreaTriangulos(a, b);
        }
        break;
    default:
        cout << "Figura equivocada\n";
        break;
    }
    return 0;
}
