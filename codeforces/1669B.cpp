#include <bits/stdc++.h>
using namespace std;


int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);
        int flag =0;
        int found = -1;
        for(i=1;i<n-1;i++)
        {
            if(a[i-1]==a[i] && a[i]==a[i+1])
            {
                flag=1;
                found = a[i];
                break;
            }

        }
        cout<<found<<endl;
    }

    return 0;
}

