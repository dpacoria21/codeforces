#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin>>n;
        int arr[n+2];
        for(int i=1; i<=n; i++) {
            arr[i]=i;
        }
        if(n%2==0) {
            for(int i=1; i<=n; i+=2){
                cout << i+1 <<" "<<i<<" ";
            }
        }else {
            for(int i=1; i<n; i+=2){
                arr[i] = i+1;
                arr[i+1] = i;
            }
            arr[n] = arr[n-1];
            arr[n-1] = n;
            for(int i=1; i<=n; i++) {
                cout << arr[i] <<" ";
            }
        }
    }
    return 0;
}
