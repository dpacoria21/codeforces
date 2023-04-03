#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    ll n;
    cin >> n;
    int a1 = 4;
    while(n!=0 && a1 < 12) {
        if(n-a1 % 2 == 0) {
            cout << a1 << " " << a1;
            break;
        }else {
            bool flag = false;
            int count = 0;
            for(int i=3; i<=(n-a1); i++) {
                if((n-a1)%i == 0) {
                    count++;
                }
                if(count > 1) {
                    flag = !flag;
                    break;
                }
            }
            if(flag) {
                cout << a1 << " " << n-a1;
                break;
            }
            a1 += 2;
        }
    }
    return 0;
}