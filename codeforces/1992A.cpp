#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,d1,d2;
    cin>>t;
    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        for(int i=0;i<5;i++)
        {
            a[0]+=1;
            sort(a,a+3);
        }
        cout<<a[0]*a[1]*a[2]<<endl;

    }
    return 0;
}

