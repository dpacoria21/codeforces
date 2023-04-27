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
    string s; cin >> s;
    int count = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == (char)toupper(s[i])) {
            count ++;
        }
    }

    if( (count == s.size()-1 && s[0] == (char)tolower(s[0])) ) {
        cout << (char)toupper(s[0]);
        for(int i=1; i<s.size(); i++) {
            cout << (char)tolower(s[i]);
        }
    }else if (count == s.size() ){
        for(int i=0; i<s.size(); i++) {
            cout << (char)tolower(s[i]);
        }
    }else {
        cout << s;
    }

    return 0;
}