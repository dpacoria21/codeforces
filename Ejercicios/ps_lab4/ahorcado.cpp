#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

bool isFind(string s, char c) {
    for(int i=0; i<s.size(); i++) {
        if(s[i] == c){ 
            return true;
        }
    }
    return false;
}

bool isComplete(string s) {
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '_') {
            return false;
        }
    }
    return true;
}

string fitWord(string s, char c, string res) {
    string aux = "";
    for(int i=0; i<s.size(); i++) {
        if(s[i] == c) {
            res[i] = c;
        }
    }
    return res;
}

string drawAhorcado(int n) {
    string draw = "____________________\n";
    switch(n) {
        case 1:
            draw += "              |\n              |\n              o\n              \n              \n";
            break;
        case 2:
            draw += "              |\n              |\n              o\n              /|\n              \n";
            break;
        case 3:
            draw += "              |\n              |\n              o\n              /|\\\n                 \n";
            break;
        case 4:
            draw += "              |\n              |\n              o\n              /|\\\n              /  \n";
            break;
        case 5:
            draw += "              |\n              |\n              o\n              /|\\\n              /\\ \n";
            break;
    }
    draw += "____________________\n\n";
    return draw;
}

int main() {
    srand(time(NULL));
    string words[5] = {"tomate", "avenger", "soldado", "ornitorrinco", "javascript"};

    string word = words[rand()%5];
    string luckyWord = "";
    int intento = 1;
    for(int i=0; i<word.size(); i++) {
        luckyWord+="_";
    }
    do{
        cout << "Adivina la palabra ";
        cout << luckyWord;
        cout << "\n";

        char c;
        
        cout << "Ingrese una letra: ";
        cin >> c;
        c = tolower(c);
        if(isFind(word, c)) {
            luckyWord = fitWord(word, c, luckyWord);
            cout <<"\n";
            cout << "La letra elegida está dentro de la palabra \n";
            cout << "letras adivinadas: " << luckyWord << "\n\n";
        }else {
            cout << "No se encontro ninguna coincidencia\n";
            cout << "\n";
            cout << drawAhorcado(intento);
            cout << "Le quedan " << 5-intento << " intentos\n";
            cout << "\n";
            intento++;
        }
    }while(isComplete(luckyWord) == 0 && intento != 6);

    if(isComplete(luckyWord)) {
        cout << "Felicidades eres el ganador!!!";
    }else {
        cout << "Perdiste el juego, suerte a la proxima!!!";
    }
    cout << "\n";
    system("pause");
    return 0;
}