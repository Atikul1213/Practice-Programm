#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
   /** arr[0]=10;
    arr[1]=20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;*/
    for(int i=0;i<5;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
    return 0;
}
