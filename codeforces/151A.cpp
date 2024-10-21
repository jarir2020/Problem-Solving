#include<iostream>
using namespace std;

int min3(int a, int b, int c)
{
    int x=0;
    while(a && b && c)
    {
        a--;
        b--;
        c--;
        x++;
    }
    return x;
}

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int r1, r2, r3;
    r1 = (l*k)/nl;
    r2 = (c*d);
    r3 = p/np;

    //cout<<r1<<" "<<r2<<" "<<r3<<endl; // Debugging Statement
    // cout<<n*k<<endl; // Debugging Statement

    int r = (min3(r1,r2,r3))/n;

    cout<<r<<endl;

    return 0;
}
