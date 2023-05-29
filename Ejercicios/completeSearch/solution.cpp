#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

vi subset = {};

void search(int k, int n) {
    if (k == n) {
        for(int i=0; i<subset.size(); i++) {
            cout << subset[i] << " ";
        }
        cout << "\n";
    }else {
        search(k+1, n);
        subset.push_back(k);
        search(k+1, n);
        subset.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    search(0, 3);
    return 0;
}