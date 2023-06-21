#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    bool flag = false;
    for(int i=0; i<5; i++) {
        string hand; cin >> hand;
        if(s[0] == hand[0] || s[1] == hand[1]) {
            flag = true;
        }
        
    }
    if(flag) {
        cout << "YES";
    }else {
        cout << "NO";
    }
    return 0;
}