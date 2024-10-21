#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,y,n,m,k,o,p;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
         m = (n - y);
         o = m/x;
         k = o*x;
         p = k+y;
        cout<<p<<endl;
    }
    return 0;
}

