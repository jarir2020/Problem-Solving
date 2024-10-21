#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
    int n;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else if(n%2==0)
        cout<<n/2<<endl;
    else
        cout<<int(n/2)+1<<endl;
    }
    return 0;
}
