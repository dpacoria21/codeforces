#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int q; cin >> q;
    while(q--) {
        int aux = n-1;
        int m; cin >> m;
        int k = 0;
        int middle = 0;
        while(k<=aux){
            middle = (aux+k)/2;
            if(m < arr[middle] ) {
                aux = middle-1;
            }else{
                k = middle+1;
            }
        }
        cout << k << "\n";
    }
    return 0;
}