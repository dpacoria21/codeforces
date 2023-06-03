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
    int n; cin >> n;
    map<string, int>equipo;
    int maxi = 0;
    while(n--) {
        string s; cin >> s;
        if(equipo[s] == 0) {
            equipo[s] = 1;
            maxi = max(maxi, equipo[s]);
        }else {
            equipo[s]++;
            maxi = max(maxi, equipo[s]);
        }

        
    }
    map<string, int>::iterator aux = equipo.begin();
    while(aux != equipo.end()) {
        if(aux->second == maxi) {
            cout << aux->first;
        }
        ++aux;
    }
    
}