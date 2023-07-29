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
    int arr[n+1];
    int arrSum[n+1];
    ll sum = 0;
    for(int i=1; i<=n; i++) {
        cin >> arr[i];
        sum+=arr[i];
        arrSum[i] = sum;
    }
    int m; cin >> m;
    for(int i=1; i<=m; i++) {
        int aux; cin >> aux;
        ll l = 1, r = n, mid;
        bool flag = true;
        while(l<r) {
            mid = (l+r)/2;

            if(aux >= arrSum[mid]-arr[mid]+1 && aux<=arrSum[mid]) {
                cout << mid << "\n";
                flag = false;
                break;
            }

            if(aux<arrSum[mid]) {
                r = mid-1;
            }else if(aux>arrSum[mid]) {
                l = mid+1;
            }
        }
        if(flag) {
            cout << r << "\n";
        }
    }
    return 0;
}