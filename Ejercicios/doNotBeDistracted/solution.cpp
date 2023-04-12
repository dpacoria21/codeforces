#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n ; cin >> n;
        string s; cin >> s;
        int dif = 0;
        bool flag = true;
        for(int i=0; i<s.size() && flag; i++) {
            for(int j=i+1; j<s.size(); j++) {
                if(s[i] == s[j]){
                    if(abs(i-j) != 1) {
                        flag = !flag;
                    }
                    break;
                }
            }
        }
        if(!flag) {
            cout << "NO" << endl;
        }else {
            cout << "YES" << endl;
        }
    }
    return 0;
}