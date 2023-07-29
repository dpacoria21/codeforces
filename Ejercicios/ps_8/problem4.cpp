#include <iostream>
#include <csignal>
using namespace std;

void signalHandler(int signal) {
    if (signal == SIGABRT) {
        cout << "Hola" << endl;
    }
}

int main() {
    signal(SIGABRT, signalHandler);
    abort();

    return 0;
}
