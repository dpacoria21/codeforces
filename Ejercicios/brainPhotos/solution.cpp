#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    // int arr[n][m];
    bool flag = true;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            char p; cin >> p;
            if(p == 'G' || p == 'B' || p=='W') {
                continue;
            }else {
                flag = false;
                break;
            }
        }
        if(flag==false){
            break;
        }
    }
    if(flag) {
        cout << "#Black&White";
    }else {
        cout << "#Color";
    }
    return 0;
}