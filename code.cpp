#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3000],n,value,ck=1,dif=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        arr[i]  =  value;
    }
    for(int i=0;i<n;i++){
        dif = arr[i+1] - arr[i];
        cout<<dif<<'\t';
        if(dif<0) ck = 0;
        break;
    }
    cout<<endl;
    if(ck==1)
        cout<<"Jolly"<<endl;
    else
        cout<<"Not jolly"<<endl;
    return 0;
}
