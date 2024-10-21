#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,d1,d2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        d1 = abs(a-1);
        d2 = abs(b-c)+abs(c-1);
        if(d1<d2)
            cout<<1<<endl;
        else if(d1>d2)
            cout<<2<<endl;
        else
            cout<<3<<endl;
    }
    return 0;
}
