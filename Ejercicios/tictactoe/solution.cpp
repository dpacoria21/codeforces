#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {

        char tab[3][3];
        char winner = '.';
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                cin >> tab[i][j];
            }
        }
        if(tab[0][0] == tab[0][1] && tab[0][1] == tab[0][2] && tab[0][0] != '.') {
            winner = tab[0][0];
        }
        if(tab[0][0] == tab[1][1] && tab[1][1] == tab[2][2] && tab[0][0] != '.') {
            winner = tab[0][0];
        }
        if(tab[1][0] == tab[1][1] && tab[1][1] == tab[1][2] && tab[1][0] != '.') {
            winner = tab[1][0];
        }
        if(tab[2][0] == tab[2][1] && tab[2][1] == tab[2][2] && tab[2][0] != '.') {
            winner = tab[2][0];
        }
        if(tab[0][2] == tab[1][1] && tab[1][1] == tab[2][0] && tab[2][0] != '.') {
            winner = tab[2][0];
        }
        if(tab[0][0] == tab[1][0] && tab[1][0] == tab[2][0] && tab[2][0] != '.') {
            winner = tab[2][0];
        }
        if(tab[0][1] == tab[1][1] && tab[1][1] == tab[2][1] && tab[2][1] != '.') {
            winner = tab[2][1];
        }
        if(tab[0][2] == tab[1][2] && tab[1][2] == tab[2][2] && tab[0][2] != '.') {
            winner = tab[0][2];
        }

        if(winner == '.') {
            cout << "DRAW\n";
        }else {
            cout << winner << "\n";
        }
    }
    return 0;
}