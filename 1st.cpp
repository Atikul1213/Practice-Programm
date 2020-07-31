#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,sum=0,i,j;
    cin>>n1>>n2;
    for(i=n1;i<=n2;i++){
        for(j=2;j<=i;j++){
            if(i%j==0)
                break;
            else{
                 sum = sum + i;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
