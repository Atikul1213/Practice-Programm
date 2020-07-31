#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10004],taka;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        cin>>taka;
        for(int i=0;i<n-1;i++){
            if(arr[i]+arr[i+1]==taka)
                cout<<"Peter should buy books whose prices are "<<arr[i]<<" and "<<arr[i+1]<<"."<<endl<<endl;
        }
    }
    return 0;
}
