#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long total_sum = 0;

        while (n > 0) {
            total_sum += n;
            n /= 2;
        }

        cout << total_sum << endl;
    }

    return 0;
}

