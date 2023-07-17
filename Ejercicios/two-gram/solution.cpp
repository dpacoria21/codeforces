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
    string s; cin >> s;
    map<string, int>grams;
    for(int i=0; i<s.size()-1; i++) {
        if(grams[s.substr(i,2)] == 0) {
            grams[s.substr(i,2)] = 1;
        }else {
            grams[s.substr(i,2)]++;
        }
    }
    map<string, int>::iterator it = grams.begin();
    string gram = "";
    int maxi = -1;
    while(it != grams.end()) {
        if(maxi <= it->second) {
            gram = it->first;
            maxi = it->second;
        }
        ++it;
    }
    cout << gram;
    return 0;
}