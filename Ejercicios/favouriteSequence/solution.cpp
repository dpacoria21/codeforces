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
        deque<int> deq;
        int n; cin >> n;
        for(int i=0; i<n; i++) {
            int aux; cin >> aux;
            deq.push_back(aux);
        }
        for(int i=0; i<n/2; i++) {
            cout << deq.front() << " "<< deq.back() << " ";
            deq.pop_back();
            deq.pop_front();
        }
        if(n%2!=0) {
            cout<< deq.front();
        }
        cout << "\n";
    }
    return 0;
}