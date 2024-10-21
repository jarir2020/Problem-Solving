#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Check if all odd-indexed elements (1-based indexing) have the same parity
        bool odd_parity_same = true;
        for (int i = 1; i < n; i += 2) // Odd-indexed elements (1-based: a[1], a[3], ...)
        {
            if (a[i] % 2 != a[1] % 2)
            {
                odd_parity_same = false;
                break;
            }
        }

        // Check if all even-indexed elements (1-based indexing) have the same parity
        bool even_parity_same = true;
        for (int i = 0; i < n; i += 2) // Even-indexed elements (1-based: a[0], a[2], ...)
        {
            if (a[i] % 2 != a[0] % 2)
            {
                even_parity_same = false;
                break;
            }
        }

        if (odd_parity_same && even_parity_same)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
