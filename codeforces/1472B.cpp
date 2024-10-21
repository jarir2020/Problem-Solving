#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;
    while (t--) {
        int n,oc=0,tc=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int sum = 0;
        for(i=0;i<n;i++)
        {
            sum += a[i];
            if(a[i]==1)
            {
                oc++;
            }
            else
            {
                tc++;
            }
        }
        if(oc>=2 && sum%2==0)
            cout<<"YES"<<endl;
        else if(oc==0 && n%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}

