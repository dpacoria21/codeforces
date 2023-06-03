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
        int arr[4];
        for(int i=0; i<4; i++) {
            cin >> arr[i];
        }
        int w1 = max(arr[0], arr[1]);
        int w2 = max(arr[2], arr[3]);
        sort(arr, arr+4);
        if(max(w1, w2) == arr[3] && min(w1,w2) == arr[2]) {
            cout << "YES" << "\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}