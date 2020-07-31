#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,taka,arr[100],Min=INT_MIN,dif;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>taka;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum = arr[i] + arr[j];
            if(sum==taka){
                dif = abs(arr[j]-arr[i]);
                if(Min > dif){
                    Min = dif;
                }
            }
        }
    }
    return 0;
}
