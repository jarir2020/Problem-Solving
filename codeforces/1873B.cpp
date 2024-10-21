#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
	while (t--) {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        a[0]+=1;
        int mul=a[0];
        for(i=1;i<n;i++)
            mul = mul * a[i];
        cout<<mul<<endl;
	}
    return 0;
}

