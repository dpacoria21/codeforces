#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef vector < pair <int, string> > xd;
typedef pair <int, int> pi;
// typedef pair <int, string> pi;

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        xd books;

        for(ll i=0; i<n; i++) {
            ll m;
            string s;
            cin >> m >> s;
            books.push_back(make_pair(m, s));
        }

        sort(books.begin(), books.end());

        bool sk1 = false, sk2 = false;
        ll count = 0;
        ll mini = INT_MAX;

        for(ll i=0; i<n; i++) {
            
            if(books[i].second.substr(0, 1) == "1" && books[i].second.substr(1, 1) == "1") {
                ll aux = books[i].first;
                mini = min(mini, aux);
            }else if(books[i].second.substr(0, 1) == "1" && sk1!=true) {
                count += books[i].first;
                sk1 = true;
            }else if(books[i].second.substr(1, 1) == "1" && sk2 !=true) {
                count += books[i].first;
                sk2 = true;
            }
            if(sk1 && sk2){
                mini = min(mini, count);
                count = 0;
                sk1 = false;
                sk2 = false;
            }
        }

        if(mini == INT_MAX) {
            cout << -1 << "\n";
        }else {
            cout << mini << "\n";
        }

    }
    return 0;
}