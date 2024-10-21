#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int total_rotations = 0;
    char current_position = 'a';

    for (char c : s) {
        int clockwise_rotations = abs(c - current_position);
        int counterclockwise_rotations = 26 - clockwise_rotations;

        total_rotations += min(clockwise_rotations, counterclockwise_rotations);

        current_position = c;
    }

    cout << total_rotations << endl;
    return 0;
}
