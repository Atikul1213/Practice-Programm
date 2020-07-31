#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
    int i,j,temp;
    for(int i=0;i<n;i++){
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
int main()
{
    int arr[10]={9,3,88,1,23,54,29,90,28,42};
    int n = 10;
    bubble_sort(arr,n);
    return 0;
}
