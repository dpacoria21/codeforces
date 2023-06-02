#include <bits/stdc++.h>


using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int n; cin >> n;
    vector<int>pascal = {1, 1};
    vector<int>rodal = pascal;
    for(int i=0; i<n-1; i++) {
        cout << " ";
    }
    cout << "1" << "\n";
    n--;
    for(int i=1; i<=n; i++) {
        for(int j=0; j < (n-i); j++) {
            cout << " ";
        }
        for(int j=0; j<pascal.size(); j++) {
            cout << pascal[j] << " ";
        }
        cout << "\n";
        vector<int>aux;
        for(int j=0; j<pascal.size()-1; j++) {
            int sum = pascal[j] + pascal[j+1];
            aux.push_back( sum );
        }
        pascal.clear();
        pascal.push_back(1);
        for(int j=0; j<aux.size(); j++) {
            pascal.push_back(aux[j]);
        }
        pascal.push_back(1);
    }
    return 0;
}