#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    try {
        int* arr = new int[1000000000000]; 
        delete[] arr; 
    } catch (const std::bad_alloc& e) {
        std::cerr << "Error: Memoria insuficiente para asignar al array de numeros." << std::endl;
    }
    return 0;
}