#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        long long upperLimit, count = 0;

        cin >> upperLimit;
        for (int digit = 1; digit <= 9; digit++) {
            long long currentNumber = digit;
            while (currentNumber <= upperLimit) {
                count++;
                currentNumber = currentNumber * 10 + digit;
            }
        }
        cout << count << endl;
    }
}
