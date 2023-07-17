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
    int lastZero = 0;
    vector<int>arr;
    vector<int>zeros;
    for(int i=0; i<n; i++) {
        int aux; cin >> aux;
        arr.push_back(aux);
    }
    int sum = 0;
    int maxi = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == 1) {
            sum = 0;
            zeros.push_back(0);
        }else {
            sum++;
            zeros.push_back(sum);
        }
        maxi = max(maxi, sum);
    }
    cout << maxi << "\n";
    return 0;
}