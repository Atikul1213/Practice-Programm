#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    int i,j,item;
    for(i=1;i<n;i++){
        item = arr[i];
        j = i -1;
        while(j>=0 && arr[j]>item){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = item;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
}
int main()
{
    int arr[10]={3,44,38,5,47,15,36,26,27,2};
    int n = 10;
    insertion_sort(arr,n);
    return 0;
}
