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
    string s = "Timur";
    string name = "murTi";
    int t; cin >> t;
    while(t--) {
        string name = "Timur";
        string s;
        int n;
        cin >> n >> s;
        if(name.size() == s.size()) {
            int flag = true;
            for(int i=0; i<name.size(); i++){
                if(!(s.find(name[i])+1)) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout << "YES\n";
            }else {
                cout << "NO\n";
            }
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}