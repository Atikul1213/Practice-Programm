#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n,int value){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==value){
            return i;
            break;
        }
    }
    i = -1;
    return i;
}
int  main()
{
    int arr[6]={60,1,88,10,11,100};
    cout<<linear_search(arr,6,10)<<endl;
    return 0;
}
