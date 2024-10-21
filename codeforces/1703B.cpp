#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n,i;
        cin>>n;
        char a[n];
        set<char> x;
        for(i=0;i<n;i++){
            cin>>a[i];
            x.insert(a[i]);
        }

        int result = 2*x.size()+(n-x.size());
        cout<<result<<endl;
    }
    return 0;
}

