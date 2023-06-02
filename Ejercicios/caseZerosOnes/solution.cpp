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
    int n; cin >> n;
    int num0=0, num1=0;
    string s; cin >> s;
    for(int i=0; i<s.size(); i++) {
        s[i] == '0' ? num0++ : num1++;
    }
    if(num0 > num1) {
        cout << num0-num1 << "\n";
    }else{
        cout << num1-num0 << "\n";
    }
    return 0;
}