#include <iostream>
#include <thread>
#include <vector>

// Function to print numbers from 'start' to 'end' (inclusive)
void printNumbers(int start, int end) {
    for (int i = start; i <= end; ++i) {
        std::cout << i << " ";
    }
}

int main() {
    // Number of threads (processes) to create
    const int numThreads = 4;

    // Vector to store thread objects
    std::vector<std::thread> threads;

    // Define the ranges for each thread
    int ranges[numThreads][2] = {
        {1, 2500},
        {2501, 5000},
        {5001, 7500},
        {7501, 10000}
    };

    // Create threads and assign them their respective tasks
    for (int i = 0; i < numThreads; ++i) {
        // For the last thread, adjust the end point to avoid overlap
        int end = (i == numThreads - 1) ? ranges[i][1] : ranges[i][1] - 1;

        // Create a thread and pass the printNumbers function with its respective range
        threads.emplace_back(printNumbers, ranges[i][0], end);
    }

    // Join all threads to wait for their completion
    for (auto& thread : threads) {
        thread.join();
    }

    return 0;
}
