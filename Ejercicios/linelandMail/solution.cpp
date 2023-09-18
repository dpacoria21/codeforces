#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    ll arr[n+1];
    for(int i=1; i<=n; i++) {
        cin >> arr[i];
    }
    for(int i=1; i<=n; i++) {
        if(i==1) {
            cout << abs(arr[i]-arr[i+1]) << " " << abs(arr[i]-arr[n]) << "\n";
        }else if(i==n) {
            cout << abs(arr[i]-arr[i-1]) << " " << abs(arr[n]-arr[1]) << "\n";
        }else {
            int aux = min(abs(arr[i]-arr[i-1]), abs(arr[i]-arr[i+1]));
            int aux2 = max(abs(arr[i]-arr[1]), abs(arr[i]-arr[n]));
            cout << aux << " " << aux2 << "\n";
        }
    }
    return 0;
}