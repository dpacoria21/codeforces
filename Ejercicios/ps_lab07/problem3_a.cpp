#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    try {
        char* str = new char[1000000000000]; 
        delete[] str; 
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: Memoria insuficiente para asignar la cadena de caracteres." << std::endl;
    }
    return 0;
}
