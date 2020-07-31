#include<bits/stdc++.h>
#define Lim 10000
using namespace std;
int temp[Lim];
void merge(int arr[],int start,int end){
    if(start==end) return;
    int mid = (start+end)/2;
    merge(arr,start,mid);
    merge(arr,mid+1,end);
    int i = start,j = mid+1,k=0;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]) temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    for(;i<=mid;i++) temp[k++] = arr[i];
    for(;j<=end;j++) temp[k++] = arr[j];
    for(int i=start,k=0;i<=end;i++,k++) arr[i]=temp[k];
}
void counting_sort(int arr[],int n){
    int cnt = 0;
}
int main()
{
    int arr[6] = { -3,10,6,-1,7,-2};
    int max;
    max = arr[0];
    for(int i=0;i<6;i++){
        if(max>arr[i])
            max = arr[i];
    }
    cout<<max<<endl;
    for(int i=0;i<6;i++) arr[i] +=abs(max);
    for(int i=0;i<6;i++) cout<<arr[i]<<'\t';
    cout<<endl;
    merge(arr,0,6);
    for(int i=0;i<6;i++) cout<<arr[i]<<'\t';
    cout<<endl;
    for(int i=0;i<6;i++) arr[i] = arr[i]-abs(max);
     for(int i=0;i<6;i++) cout<<arr[i]<<'\t';
    return 0;
}
