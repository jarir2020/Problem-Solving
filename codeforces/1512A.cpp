#include<bits\stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int a[s+1];
        for(int i=1;i<s+1;i++)
        {
            cin>>a[i];
        }

        int result = 0;
        for(int i=1;i<s+1;i++)
        {
            result^=a[i];
            if(result==1)
            {
                cout<<i<<endl;
                break;
            }
        }

    }
    return 0;
}
