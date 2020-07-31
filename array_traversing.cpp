#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    for(int i=1;i<=10;i++){
        arr[i] = i;
    }
    for(int i=1;i<=10;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
    for(int i=10;i>=1;i--){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;

    int ck = 0,n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=10;i++){
        if(arr[i]==n){
            ck = 1;
            break;
        }
    }
    if(ck==1){
        cout<<"found."<<endl;
    }
    else
        cout<<"not found."<<endl;
    return 0;
}
