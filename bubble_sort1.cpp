#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={8,3,1,6,2};
    int temp;
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        for(int i=0;i<5;i++){
            cout<<arr[i]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}
