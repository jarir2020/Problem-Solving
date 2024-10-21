#include<bits\stdc++.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    int mini = a[0];
    int maxi = a[n-1];
    int S=0;
    for(int i=0;i<n;i++)
    {
        S = S+ (maxi - a[i]);
    }

    cout<<S<<endl;

    return 0;
}

