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
    vi permutation;
    int n = 3;
    for(int i=0; i<n; i++) {
        permutation.push_back(i);
    }
    do{
        for(int i=0; i<n; i++) {
            cout << permutation[i] << " ";
        }
        cout << "\n";
    }while(next_permutation(permutation.begin(), permutation.end()));
    return 0;
}