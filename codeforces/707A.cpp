#include<bits\stdc++.h>
using namespace std;

int main()
{

    int n,m,decision=0;
    cin>>n>>m;

    char a[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            if(a[i][j]=='C' || a[i][j]=='Y' || a[i][j]=='M')
            {
                decision=1;
            }
        }
    }

        // Output the result based on decision
    if (decision == 1) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }

    return 0;
}
