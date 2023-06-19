#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

struct Tdato{
    int b;
    char s[100];
};

int main() {
    int x, n, a[10]={1,2,3,4,5,6,7,8,9,0};
    double f;
    char nombre[]="Ejercicios ficheros binarios";

    Tdato p;
    p.b = 125;
    for(int i=0; i<10; i++) {
        p.s[i] = nombre[i];
    }

    x = 10;
    f = 10.5;
    ofstream f2;
    ifstream f1;

    f2.open("salida.dat", ios::out | ios::binary);
    f2.write(reinterpret_cast<char *>(&p), sizeof(Tdato));
    f2.close();

    f1.open("salida.dat", ios::in | ios::binary);    
    int y;
    int arr[5];
    char letters[10];
    int i = 0;
    Tdato pRead;

    f1.read(reinterpret_cast<char *>(&pRead), sizeof(Tdato));

    cout << pRead.b << " " << pRead.s << " ";
    
    f1.close();
    
    return 0;
}