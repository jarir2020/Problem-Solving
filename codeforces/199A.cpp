#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<(int)(n%10)+(int)(n/10)<<endl;
    }
    return 0;
}
