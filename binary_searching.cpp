#include<bits/stdc++.h>
#define Size 10
using namespace std;
int main()
{
    int arr[Size]={2,5,8,9,19,41,45,57,98,123};
    int start,End,mid,location,comperation=0,item,i;
    item = 98;
    start = 0;
    End = Size;
    while(start<=End){
        comperation++;
        mid = (start+End)/2;
        if(arr[mid]==item){
            location = mid;
            break;
        }
        else if(arr[mid]<item){
            start = mid + 1;
        }
        else
            End = mid - 1;
    }
    cout<<"Given, a sorted array of 10 element: "<<endl<<endl;
    for(i=0;i<Size;i++){
        cout<<arr[i]<<'\t';
    }
    cout<<"\n..........."<<endl;
    if(location==-1){
        cout<<item<<" not found in the array."<<endl;
        cout<<"Total number of comperation: "<<comperation<<endl;
    }
    else{
        cout<<item<<" found at position : "<<location<<endl;
        cout<<"Total comperation: "<<comperation<<endl;
    }
    return 0;
}
