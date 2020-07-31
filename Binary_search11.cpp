#include<bits/stdc++.h>
using namespace std;
int Binary_search(int arr[],int n,int value){
    int left,right,mid;
    left = 0;
    right = n;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid]==value){
            return mid;
            break;
        }
        else if(arr[mid]>value){
            right = mid-1;
        }
        else if(arr[mid]<value){
            left = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[10]={1,3,5,9,10,14,18,20,34,40};
    int n,value;
    n = 10;
    cout<<"Enter the value that you want : ";
    cin>>value;
    cout<<"Binary search: "<<endl;
    cout<<Binary_search(arr,n,value)<<endl;
    return 0;
}
