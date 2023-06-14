#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        deque<int>deq;
        for(int i=1; i<=n; i++) {
            deq.push_back(pow(2,i));
        }
        if(deq.size()==2) {
            cout << deq.back() - deq.front()<< "\n";
        }else {
            int sumM = deq.back();
            deq.pop_back();
            for(int i=0; i< n/2 -1; i++) {
                sumM += deq.front();
                deq.pop_front();
            }
            int sumMin = 0;
            for(int i=0; i<n/2; i++) {
                sumMin += deq.front();
                deq.pop_front();
            }
            cout << sumM - sumMin << "\n";
        }
    }
    return 0;
}