
using namespace std;

struct Nodo {
    double value;
    Nodo* next;
    ~Nodo() {
        cout << "Se destruyo el nodo" << "\n";
    }
};


