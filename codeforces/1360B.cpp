#include<bits\stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n],i,d;

        for(i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);

        d = a[1] - a[0];
        for(i=2;i<n;i++)
        {
            if(a[i]-a[i-1]<d)
                d = a[i]-a[i-1];
        }

        cout<<d<<endl;

    }
    return 0;
}

