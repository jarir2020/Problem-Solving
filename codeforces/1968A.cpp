#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int x,i,t;
    cin>>t;
    while(t--){
    cin>>x;
    int y = 1;
    int maxim = gcd(x,y)+y;
    for(i=2;i<x;i++)
    {
        if(gcd(x,i)+i>maxim)
        {
            maxim = gcd(x,i)+i;
            y = i;
        }
    }
    cout<<y<<endl;
    }
    return 0;
}

