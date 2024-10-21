#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int arr[3] = {a, b, c};
        sort(arr, arr + 3);
        a = arr[0];
        b = arr[1];
        c = arr[2];
        int needed_coins = 2 * c - b - a;

        if (n < needed_coins) {
            cout << "NO" << endl;
        } else {
            if ((n - needed_coins) % 3 == 0) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
