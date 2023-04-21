#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;
using ll = long long;
using ld = long double;
typedef vector<int>vi;
typedef pair <int, int> pi;

int main() {
    int n; cin >> n;
    int aux = n;

    int ut = aux%10;
    aux = (aux-ut)/10;
    int save1 = aux;

    int aut = aux%10;
    aux = (aux-aut)/10;
    int save2 = (aux*10)+ut;

    cout << max(n, max(save1, save2));
}