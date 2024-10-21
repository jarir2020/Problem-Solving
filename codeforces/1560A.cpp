#include<bits/stdc++.h>
using namespace std;

int generate_13x(int n) {
    int count = 0;
    int i = 1;

    while(true) {
        if(i % 3 != 0 && i % 10 != 3) {
            count++;
        }
        if(count == n) {
            return i;
        }
        i++;
    }
}


int main()
{
    int n,T;
    cin>>T;
    while(T--)
    {
        cin>>n;
        cout << generate_13x(n) << endl;
    }
    return 0;
}
