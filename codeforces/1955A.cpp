#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        if(2*a<b)
        {
            cout<<n*a<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<(n/2)*b<<endl;
            }
            else
            {
                cout<<(n/2)*b+a<<endl;
            }
        }
    }

    return 0;
}

