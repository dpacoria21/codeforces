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
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool flag = false;
        while(n>=2020) {
            if(n%2021 == 0 || n%2020 == 0){
                flag = true;
                break;
            }
            n-=2021;
        }
        if(flag) {
            cout << "YES" << "\n";
        }else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}