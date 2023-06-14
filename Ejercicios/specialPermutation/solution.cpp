#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        if(n%2==0) {
            for(int i=0; i<n; i++) {
                cout << n-i << " ";
            }
        }else {
            for(int i=0; i<n; i++) {
                if(i==n/2) {
                    cout << n-i-1 << " ";
                }else if(i==n/2+1) {
                    cout << n-i+1 << " ";
                }else {
                    cout << n-i << " ";
                }
            }
        }
        cout << "\n";
    }
    return 0;
}