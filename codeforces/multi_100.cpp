#include <iostream>
#include <thread>
using namespace std;
const int NUM_THREADS = 4;
const int NUM_PRINTS = 10000;

void printNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        cout << i << " ";
    }
}

int main() {
    thread threads[NUM_THREADS];

    // Divide the range of numbers equally among threads
    int increment = NUM_PRINTS / NUM_THREADS;
    for (int i = 0; i < NUM_THREADS; ++i) {
        int start = i * increment + 1;
        int end = (i + 1) * increment;
        threads[i] = thread(printNumbers, start, end);
    }

    // Wait for all threads to finish
    for (int i = 0; i < NUM_THREADS; ++i) {
        threads[i].join();
    }

    return 0;
}
