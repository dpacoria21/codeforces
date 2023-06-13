#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string s; cin >> s;
    // sort(s.begin(), s.end());
    int res = 0;
    int index = 0;
    for(int i=0; i<s.size(); i++) {
        int aux = alpha.find(s[i]);
        int maximo = max(index, aux);
        int minimo = min(index, aux);
        if(maximo-minimo <= 26-maximo + minimo) {
            cout << maximo-minimo << "\n";
            res+=maximo-minimo;
        }else {
            cout << 26-maximo + minimo << "\n";
            res+=26-maximo + minimo;
        }
        
        index = aux;
    }
    cout << res;
    // for(int i=0; i<s.size(); i++) {
    //     int aux = alpha.find(s[i]);
    //     int auxM = max(index, aux);
    //     int auxMin =  min (index, aux);
    //     if(auxM-auxMin >= 26-auxM + auxMin%12) {
    //         res += 26-auxM + auxMin%12;
    //     }else {
    //         res += auxM-auxMin;
    //     }
    //     index = alpha.find(s[i]);
    // }
    // cout << res;
    return 0;
}