#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        temp = arr[i];
        j = i -1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = temp;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
}
void bubble_sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
}
void selection_sort(int arr[],int n){
    int i,j,index_min,temp;
    for(i=0;i<n-1;i++){
            index_min = arr[i];
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[index_min]){
                index_min = j;
            }
        }
        if(index_min!=j){
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
}
int main()
{
    int arr[10]={3,44,38,5,47,15,36,26,27,2};
    int n = 10;
   // insertion_sort(arr,n);
//    cout<<"Bubble sort: "<<endl;
//    bubble_sort(arr,n);
    cout<<"Selection sort: "<<endl;
    selection_sort(arr,n);
    return 0;
}
