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
        int count = 0;
        while(n>1) {
            if(n%6 == 0) {
                n /= 6;
                count++;
                continue;
            }else if(n%3 == 0 && n%2!=0) {
                n *= 2;
                n /= 6;
                count+=2;
                continue;
            }else {
                break;
            }
        }
        if(n==1) {
            cout << count << "\n";
        }else {
            cout << -1 << "\n";
        }
        
    }
    return 0;
}