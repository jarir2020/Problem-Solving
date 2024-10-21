#include<bits\stdc++.h>
using namespace std;

int main() {

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    int l = s.size();
    int w=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='1')
            w=w+a;
        else if(s[i]=='2')
            w=w+b;
        else if(s[i]=='3')
            w=w+c;
        else if(s[i]=='4')
            w=w+d;
    }
    cout<<w<<endl;
    return 0;
}
