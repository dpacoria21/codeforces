#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string s; cin >> s;
    int res = 0;
    int index = 0;
    for(int i=0; i<s.size(); i++) {
        int aux = alpha.find(s[i]);
        int maximo = max(index, aux);
        int minimo = min(index, aux);
        if(maximo-minimo <= 26-maximo + minimo) {
            res+=maximo-minimo;
        }else {
            res+=26-maximo + minimo;
        }       
        index = aux;
    }
    cout << res;
    return 0;
}