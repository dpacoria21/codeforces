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
    string s;
    string res = "";
    while(t--) {
        cin >> s;
        for(int i=0; i<s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        if(s == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}