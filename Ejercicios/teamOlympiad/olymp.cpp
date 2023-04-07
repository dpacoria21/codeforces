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
    return 0;
}