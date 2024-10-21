#include<bits\stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        const char* y = "yes";

        transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });

        if(strcmp(str.c_str(), y) == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
