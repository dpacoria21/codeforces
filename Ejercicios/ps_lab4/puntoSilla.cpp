
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int m, n; cin >> m >> n;
    int arr[m][n];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
    int posi=0, posj=0;
    bool havePS = false;

    for(int i=0; i<m; i++) {
        int minFila = INT_MAX;
        for(int j=0; j<n; j++) {
            minFila = min(minFila, arr[i][j]);
        }
        for(int j=0; j<n; j++) {
            if(minFila == arr[i][j]) {
                int maxColum = INT_MIN;
                for(int k=0; k<m; k++) {
                    maxColum = max(maxColum, arr[k][j]);
                }
                if(minFila == maxColum) {
                    havePS = true;
                    posi = i;
                    posj = j;
                    break;
                }
            }
        }
        if(havePS) {
            break;
        }
    }

    if(havePS) {
        cout << "Tiene Punto de Silla en la posición: " <<"("<< posi <<","<< posj<<")";
    }else {
        cout << "No tiene punto de Silla";
    }

    return 0;
}