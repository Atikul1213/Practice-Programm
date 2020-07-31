#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,waste,arr[100000];
    cin>>t;
    while(t--){
            waste=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    for(int i=0;i<n;i++){
        if(arr[i]>m){
                m += m;
            waste = waste +  (m-arr[i]);
        }
        else
           waste += (m-arr[i]);
    }
    cout<<waste<<endl;
    }
    return 0;
}
