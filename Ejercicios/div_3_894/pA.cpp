#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        set<char> arr[m];
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                char a; cin >> a;
                arr[j].insert(a);
            }
        }
        deque<char>name;
        name.push_back('v');
        name.push_back('i');
        name.push_back('k');
        name.push_back('a');
        for(int i=0; i<m; i++) {
            if(arr[i].count(name.front())) {
                name.pop_front();
            }
        }

        if(name.size() == 0) {
            cout << "YES\n";
        }else {
            cout << "NO\n";
        }
    }
    return 0;
}