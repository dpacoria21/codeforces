#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    int arr[t];
    for(int i=0; i<t; i++) {
        cin >> arr[i];
    }
    int save[t];
    for(int i=0; i<t; i++) {
        save[i] = arr[i];
    }
    int valores[3] = {0, 0, 0};
    sort(arr, arr+t);
    int index = 0;

    for(int i=0; i<t; i++) {
        if(arr[i] == arr[i+1]) {
            valores[index]++;
        }else if(arr[i] != arr[i+1]){
            valores[index]++;
            index++;
        }
    }

    sort(valores, valores+3);

    if(valores[0] == 0) {
        cout << 0;
    }else {
        cout << valores[0] << endl;
        for(int i=0; i<valores[0]; i++) {

            bool a1 = true, a2=true, a3=true;
            for(int j=0; j<t; j++) {
                if(save[j] == 1 && a1) {
                    cout << j+1 << " ";
                    a1 = false;
                    save[j] = -1;
                }else if(save[j] == 2 && a2) {
                    cout << j+1 << " ";
                    a2 = false;
                    save[j] = -1;
                }else if(save[j] == 3 && a3) {
                    cout << j+1 << " ";
                    a3 = false;
                    save[j] = -1;
                }
            }
            cout << endl;

        }
    }

    // Solucion mas corta utilizando mas arrays y variables
    /* int t; cin >> t;
    int a;
    int arr1[t], arr2[t], arr3[t];
    int a1=0, a2=0, a3=0;

    for(int i=1; i<=t; i++) {
        cin >> a;
        if(a == 1){
            arr1[a1] = i;
            a1++;
        }else if(a == 2) {
            arr2[a2] = i;
            a2++;
        }else if(a == 3) {
            arr3[a3] = i;
            a3++;
        }
    }

    int cant = min(a1, min(a2, a3));

    if(cant == 0) {
        cout << 0;
    }else {
        cout << cant << endl;
        for(int i=0; i<cant; i++) {
            cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;
        }
    } */

    return 0;
}