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
        int arr[n];
        int mini=INT_MAX, maxi=INT_MIN;
        int miniIndex=0, maxiIndex=0;

        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i] < mini) {
                mini = arr[i];
                miniIndex = i;
            }
            if(arr[i] > maxi) {
                maxi = arr[i];
                maxiIndex = i;
            }
        }

        miniIndex++;
        maxiIndex++;
    
        int c1 = max(miniIndex, maxiIndex);
        int c2 = min(miniIndex, maxiIndex)+n-max(miniIndex, maxiIndex)+1;
        int c3 = n-max(miniIndex, maxiIndex)+1 + n-min(maxiIndex, miniIndex)+1;
        int c4 = n-min(miniIndex, maxiIndex)+1;
        int c5 = max(miniIndex, maxiIndex)+n-min(miniIndex, maxiIndex)+1;
        cout << min(c1, min(c2, min(c3, c4))) << "\n";

    }
    return 0;
}