#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string res = "Cant                Descripcion                P. Unitario             Total\n";
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int cant;
        string des;
        int pUni;
        cin >> cant;
        cin >> des;
        cin >> pUni;
        res += to_string(cant) + "        " + des + "      " + to_string(cant*pUni) + "\n";
    }
    cout << res;
    return 0;
}