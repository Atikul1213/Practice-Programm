#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int left,int mid,int right){
    int i,j;
    int index_a,index_l,index_r;
    int size_left ,size_right;
    size_left = mid - left + 1;
    size_right = right - mid;
    int L[size_left],R[size_right];
    for(i=0;i<size_left;i++){
        L[i] = arr[left+i];
    }
    for(i=0;i<=size_left;i++){
        for(j=0;j<size_left-i;j++){
            if(L[j+1]>L[j]){
                int temp;
                temp = L[j];
                L[j] = L[j+1];
                L[j+1] = temp;
            }
        }
        for(i=0;i<=size_left;i++){
            cout<<L[i]<<'\t';
        }
        cout<<endl;
    }
    for(i=0;i<size_right;i++){
        R[i] = arr[right+i];
    }
    for(i=0;i<size_right;i++){
        for(j=0;j<size_right-i;j++){
            if(R[j+1]>R[j]){
                int temp;
                temp = R[j];
                R[j] = R[j+1];
                R[j+1] = temp;
            }
        }
        for(i=0;i<size_right;i++){
            cout<<R[i]<<'\t';
        }
        cout<<endl;
    }
}
void merge_sort(int arr[],int left,int right){
    if(left>=right){
        return;
    }
    int mid = left + (right-left)/2;
    merge_sort(arr,left,mid);
    merge_sort(arr,mid+1,right);
     merge(arr,left,mid,right);
     for(int i=0;i<8;i++){
        cout<<arr[i]<<'\t';
     }
     cout<<endl;
}
int main()
{
    int i,n = 8;
    int A[]={1,5,6,3,5,8,7,2,9};
    merge_sort(A,0,n);
//    for(i=0;i<=n;i++){
//        cout<<A[i]<<'\t';
//    }
//    cout<<endl;
    return 0;
}
