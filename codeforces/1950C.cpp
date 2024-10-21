#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,d1,d2,p,q;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        d1 = s[0] - '0';
        d2 = s[1] - '0';
        q = d1*10+d2;
        if(q<12 && q!=0){
            cout<<s<<" "<<"AM"<<endl;
        }
        else if(q==12)
        {
            cout<<12<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
        }
        else if(q==0)
        {
            cout<<12<<":"<<s[3]<<s[4]<<" "<<"AM"<<endl;
        }
        else
        {
            p = q-12;
            if(p<10){
            cout<<0<<p<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
            }
            else
            {
            cout<<p<<":"<<s[3]<<s[4]<<" "<<"PM"<<endl;
            }
        }
    }
    return 0;
}


