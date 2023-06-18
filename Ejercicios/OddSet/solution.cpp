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
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int numP = 0, numI = 0;
        for(int i=0; i<n*2; i++) {
            int aux; cin >> aux;
            if(aux%2==0) {
                numP++;
            }else {
                numI++;
            }
        }
        if(numP==numI) {
            cout << "Yes" <<"\n";
        }else {
            cout << "No" << "\n";
        }
    }
    return 0;
}