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
    int n, t;
    cin >> n >> t;
    bool flag = false;
    int index = 1;
    for(int i=1; i<n; i++) {
        int aux; cin >> aux;
        if(i == index && (i+aux)<t) {
            index = (i+aux);
        }else if(i == index && i+aux == t) {
            flag = true;
            break;
        }else if(i==index && i+aux > t) {
            break;
        }
    }
    if(flag == true) {
        cout << "YES";
    }else {
        cout << "NO";
    }
    // if(yo+1 == t) {
    //     cout << "YES";
    // }else {
    //     int index = 1+yo;
    //     for(int i=2; i<n; i++) {
    //         int aux; cin >> aux;
    //         if(i == index && (i+aux)<t) {
    //             index = (i+aux);
    //         }else if(i == index && i+aux == t) {
    //             flag = true;
    //             break;
    //         }else if(i==index && i+aux > t) {
    //             break;
    //         }
    //     }
    //     if(flag == true) {
    //         cout << "YES";
    //     }else {
    //         cout << "NO";
    //     }
    // }
    return 0;
}