#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        char x[n];
        for(int i=0;i<n;i++)
            cin>>x[i];

        char y[n];
        for(int i=0;i<n;i++)
            cin>>y[i];

        int flag =0;
        for(int i=0;i<n;i++)
        {
            if(x[i]==y[i] || (x[i]=='G' && y[i]=='B')  || (x[i]=='B' && y[i]=='G'))
            {
                flag=1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

