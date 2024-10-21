#include<bits\stdc++.h>
using namespace std;

int main() {

    int T;
    cin>>T;
    while(T--){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    if(a[0]==a[1]){
        cout<<a[2]<<endl;
    }

    if(a[1]==a[2]){
        cout<<a[0]<<endl;
    }

    }
    return 0;
}
