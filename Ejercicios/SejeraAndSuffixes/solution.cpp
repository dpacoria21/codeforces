#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n+1];
    int setArr[n+1];
    set<int>set;
    for(int i=1; i<=n;i++) {
        cin >> arr[i];
    }
    for(int i=n; i>0; i--) {
        set.insert(arr[i]);
        setArr[i] = set.size();
    }
    while(m--) {
        int a; cin >> a;
        cout << setArr[a] << "\n";
    }

    return 0;
}