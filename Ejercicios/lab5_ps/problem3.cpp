#include <bits/stdc++.h>

struct fec {
    int day;
    int year;
    int month;
} fecha1, fecha2;
using ll = long long;
using ld = long double;
using namespace std;

int calculateDays (fec a, fec b) {
    int totalDays = 0;
    if(abs(a.year-b.year) == 0) {
        int mayor = max(a.month, b.month);
        int menor = min(a.month, b.month);
        totalDays = (mayor-menor)*30 + abs(a.day - b.day);
    }else {
        if(a.year > b.year) {
            int difYear = a.year-b.year;
            int firstPart = ((12*difYear)-b.month)*30+(30-b.day);
            int secondPart = a.month*30-(30-a.day);
            totalDays = firstPart + secondPart;
        }else {
            int difYear = b.year-a.year;
            int firstPart = ((12*difYear)-a.month)*30+(30-a.day);
            int secondPart = b.month*30-(30-b.day);
            totalDays = firstPart + secondPart;
        }
    }
    return totalDays;
}

fec readFecha() {
    fec aux;
    cout << "Intoduce el año [xxxx]: ";
    cin >> aux.year;
    cout << "Intoduce el mes [1-12]: ";
    cin >> aux.month;
    cout << "Intoduce el dia: [1-30]: ";
    cin >> aux.day;
    return aux;
}

int main() {
    cout << "Introduce la fecha 1 \n";
    fecha1 = readFecha();

    cout << "\n";

    cout << "Introduce la fecha 2 \n";
    fecha2 = readFecha();

    cout << "\n";

    cout << "Los dias de diferencia son: " <<calculateDays(fecha1, fecha2);
    return 0;
}

