#include<bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(n==1)
        {
            if(a[0]==0)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
        else{
            set<int>lengths;
            int len = 0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==0)
                {
                    len++;
                }
                else if(a[i]==1)
                {
                    lengths.insert(len);
                    len = 0;
                }
            }
            cout<<*lengths.rbegin()<<endl;
    }
    }
    return 0;
}
