#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int points[n];
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    int best = points[0];
    int worst = points[0];
    int amazing_count = 0;


    for (int i = 1; i < n; i++) {
        if (points[i] > best) {
            amazing_count++;
            best = points[i];
        }
        else if (points[i] < worst) {
            amazing_count++;
            worst = points[i];
        }
    }

    cout << amazing_count << endl;
    return 0;
}
