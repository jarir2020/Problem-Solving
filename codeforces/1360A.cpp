#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int side = max(max(a, b), 2 * min(a, b));
        cout << side * side << endl;
    }
    return 0;
}
