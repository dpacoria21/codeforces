#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin>>t;
    string b;
    while(t--) {
        cin >> b;
        string res = "";
        int chars = b.size()/2;
        for(int i=0; i<chars*2; i+=2) {
            string p1 = b.substr(i, 2);
            if(p1[0] == res[res.size()-1]) {
                res += p1[1];
            }else {
                res += p1;
            }
        }
        if(b.size() % 2 != 0) {
            cout << res+b[b.size()-1] << endl;
        }else {
            cout << res << endl;
        }
    }

    
    return 0;
}