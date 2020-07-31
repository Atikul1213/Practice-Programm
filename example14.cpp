#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100]={4,3,2},n=3;
//    cin>>n;
//    for(int  i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    for(int i=0;i<n;i++)
//        cout<<arr[i]<<'\t';
//    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<endl;
    return 0;
}
