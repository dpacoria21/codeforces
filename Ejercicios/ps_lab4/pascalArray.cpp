#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    ld arrAux[n-2];
    ld arrPascal[n];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            cout << " ";
        }
        if(i==0) {
            cout << "1\n";
        }else if(i==1) {
            cout << "1 1\n";
            arrAux[0] = arrAux[1] = 1;
        }else {
            for(int j=0; j<i; j++) {
                arrPascal[j] = arrAux[j] + arrAux[j+1];
            }
            arrAux[0] = 1;
            for(int j=1;j<i; j++) {
                arrAux[j] = arrPascal[j-1];
                arrAux[j+1] = 1;
            }
            cout << "1 ";
            for(int j=0; j<i-1;j++) {
                cout << arrPascal[j] << " ";
            }
            cout << "1\n";
        }
    }    
    return 0;
}