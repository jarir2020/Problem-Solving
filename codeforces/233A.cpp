#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    if(n%2==1)
        cout<<-1<<endl;
    else
    {
    cout<<2;
    for(i=2;i<=n;i++)
        if(i%2==0)
            cout<<" "<<i-1;
        else
            cout<<" "<<i+1;
    }
    cout<<endl;
    return 0;
}


