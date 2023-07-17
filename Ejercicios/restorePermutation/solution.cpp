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
    while(t--){
        map<int, int>nums;
        int n; cin >> n;
        for(int i=0; i<n*2; i++) {
            int aux; cin >> aux;
            if(nums[aux] == 0) {
                nums[aux] = 1;
                cout << aux << " ";
            }
        }
        cout << "\n";
        
    }
    return 0;
}