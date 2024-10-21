#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
            int n;

            cin >> n;

            deque<char> q;

            for (int i = 0; i < n; i++) {
                char ch;
                cin >> ch;
                q.push_back(ch);
            }

            while (!q.empty() && q.front() == 'W') {
                q.pop_front();
            }

            while (!q.empty() && q.back() == 'W') {
                q.pop_back();
            }

            cout << q.size() << endl;
    }

    return 0;
}
