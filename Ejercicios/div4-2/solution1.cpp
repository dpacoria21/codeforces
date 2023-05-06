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
        string s; cin >> s;
        int count = 0;
        string c = "codeforces";
        for(int i=0; i<s.size(); i++) {
            if(c[i] != s[i]) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}