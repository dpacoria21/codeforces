#include <iostream>
#include <string>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

int countOccurrences(const string& text, const string& target) {
    int count = 0;
    size_t pos = 0;

    while ((pos = text.find(target, pos)) != string::npos) {
        count++;
        pos += target.length();
    }

    return count;
}

mutex mtx;

void processChunk(const string& chunk, const string& target) {
    int count = countOccurrences(chunk, target);

    mtx.lock();
    cout << "Hilo " << this_thread::get_id() << ": " << count << " ocurrencias de \"" << target << "\" encontradas." << endl;
    mtx.unlock();
}

int main() {
    string texto = "Este es un texto de ejemplo que contiene una cadena repetida. La cadena repetida es esta.\nTexto anidado\nTexto anidado\nTexto anidado";
    string searchWord = "anidado";

    const int numThreads = 4;
    const int chunkSize = texto.length() / numThreads;

    vector<thread> threads;

    for (int i = 0; i < numThreads; ++i) {
        int start = i * chunkSize;
        int end = (i == numThreads - 1) ? texto.length() : (i + 1) * chunkSize;

        threads.push_back(thread(processChunk, texto.substr(start, end - start), searchWord));
    }


    for (auto& thread : threads) {
        thread.join();
    }

    return 0;
}