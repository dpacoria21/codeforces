#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    int t; cin >> t;
    while(t--) {
        int aux; cin >> aux;
        int ind = aux%10;
        int count = 0;
        while( aux != 0 ){
            int x = aux%10;
            aux = (aux-x)/10;
            count++;
        }

        cout << (10*(ind-1))+(count*(count+1)/2) << "\n";
    }
    return 0;
}