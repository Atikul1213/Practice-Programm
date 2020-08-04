#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main()
{
    int n,rem,t,i;
    cin>>t;
    while(t--){
            arr[10]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<10)
            arr[i] += 1;
        else{
            int temp=i;
            while(temp!=0){
                rem = temp % 10;
                arr[rem] += 1;
                temp = temp / 10;
            }
        }
    }
    for(i=0;i<9;i++){
        cout<<arr[i]<<" ";
        arr[i] = 0;
    }
    cout<<arr[9]<<endl;
    arr[9] = 0;
    }
    return 0;
}
