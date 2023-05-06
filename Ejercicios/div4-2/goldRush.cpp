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


bool solve(int a, int b) {
    if (a == b) {
        return true;
    }else if(a%3 != 0 || a<b){
        return false;
    }

    return solve((a/3)*2, b) || solve((a/3),b);

}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        bool res = solve(n, m);
        if(!res) {
            cout << "NO" << "\n";
        }else {
            cout << "YES" << "\n";
        }
    }
    return 0;
}