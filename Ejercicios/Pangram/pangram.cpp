#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>
#include <set>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    
    int n;
    string word;
    cin >> n;
    cin >> word;
    // Forma realizada con bucles y sort para que los repetidos
    // se pongan en orden y los podamos descartar
    for(int i=0; i<n; i++) {
        word[i] = tolower(word[i]);
    }
    sort(word.begin(), word.end());
    ll count = 0;
    for(int i=0; i<n; i++) {
        if(word[i] != word[i+1]) {
            count++;
        }
    }
    if(count == 26) {
        cout << "YES";
    }else {
        cout << "NO";
    }

    // forma realizada con Set

    /* set<char> conjunto; */
    /*  for(int i=0; i<n; i++) {
        conjunto.insert(tolower(word[i]));
    }

    if(conjunto.size() >= 26) {
        cout << "YES";
    }else {
        cout << "NO";
    } */

    return 0;
}
