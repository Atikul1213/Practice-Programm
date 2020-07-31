#include<bits/stdc++.h>
using namespace std;
int Linear_search(int arr[],int n,int value){
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    int arr[5]={5,9,3,8,4};
    cout<<Linear_search(arr,5,8)+1<<endl;
    return 0;
}
