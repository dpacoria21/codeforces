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
    int n; cin >> n;
    ll count = 0;
    for(int i=0; i < n; i++) {
        ll aux;
        cin >> aux;
        if(aux%2==0 || aux == 1) {
            if(aux == 2) count++;
            continue;
        }else {
            int flag = true;
            for(int j=3; j<aux;j+=2) {
                if(aux%j==0) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}