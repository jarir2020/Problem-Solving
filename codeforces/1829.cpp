#include<iostream>
using namespace std;

int main()
{
    string x = "codeforces";
    string y;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>y;
        int d =0;
        for(int i=0;i<10;i++){
            if(x[i]!=y[i]){
                d++;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}
