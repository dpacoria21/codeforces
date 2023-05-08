#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <map>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    int n; cin >> n;
    map <string, int > s;
    for(int i=0; i<n; i++) {
        string str; cin >> str;
        if(!s[str]) {
            s[str] = 1;
            cout << "OK" << "\n";
        }else {
            string aux = str + to_string(s[str]);
            s[str]++;
            cout << aux << "\n";
        }
    }
    return 0;
}