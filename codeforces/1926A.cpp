#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ac=0, bc=0;
        for(int i=0;i<5;i++)
        {
            if(s[i]=='A')
                ac++;
            else
                bc++;
        }
        if(ac>bc)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
    return 0;
}
