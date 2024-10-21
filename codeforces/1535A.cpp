#include<bits\stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a[4],i,sum=0;

        for(i=0;i<4;i++){
            cin>>a[i];
        }

                if(a[0]>a[1]){
                    sum+=a[0];
                }
                else{
                    sum+=a[1];
                }


                if(a[2]>a[3]){
                    sum+=a[2];
                }
                else{
                    sum+=a[3];
            }

        sort(a,a+4);

        if(sum==a[2]+a[3])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
 
