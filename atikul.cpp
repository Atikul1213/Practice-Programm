#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,arr[1000],sum;
    cin>>t;
    while(t--){
            sum =0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum>=m)
            cout<<m<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}
