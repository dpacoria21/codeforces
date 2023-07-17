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
    int arr[12];
    int sum = 0;
    for(int i=0; i<12; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }

    if(n==0) {
        cout << 0;
    }else if(sum < n){
        cout << -1;
    }else {
        sort(arr, arr+12);
        int res = 0;
        int acum = 0;
        for(int i=11; i>=0; i--) {
            acum+=arr[i];
            res++;
            if(acum>=n) {
                break;
            }
        }
        cout << res;
        return 0;
    }

}