#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    
     int t; cin>>t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector< pair<int, int> >a;
        vector< pair<int, int> >b;
        map<int, int>m;
        for(int i=0; i<n; i++){
            int aux; cin >> aux;
            a.push_back(make_pair(aux, i));
        }
        for(int i=0; i<n; i++){
            int aux; cin >> aux;
            b.push_back(make_pair(aux, i));
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i=0; i<n; i++){
            a[i].first = b[i].first;
            m[a[i].second] = b[i].first;
        }
        for(int i=0; i<n; i++){
            cout << m[i] << " ";
        }
        cout << "\n";
        
    }

    return 0;
}