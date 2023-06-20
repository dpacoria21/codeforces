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
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        stack<char>open;
        for(int i=0; i<n; i++) {
            char aux; cin >> aux;
            if(aux == '(') {
                open.push('(');
            }else if(aux==')' && open.size()!=0 && open.top()=='(') {
                open.pop();
            }else {
                open.push(')');
            }
        }
        cout << open.size()/2 << "\n";
    }
    return 0;
}