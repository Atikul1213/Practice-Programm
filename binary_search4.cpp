#include<bits/stdc++.h>
using namespace std;
void Binary_search(int arr[],int n,int value){
    int start,end,mid;
    start = 0;
    end = n;
    do{
      mid = (start+end)/2;
      cout<<"Start: "<<start<<" End: "<<end<<"  mid: "<<mid<<" value: "<<value<<endl;
      if(arr[mid]==value){
        cout<<"Found at : "<<mid+1<<endl;
        break;
      }
      else
        start = mid + 1;
    }while(start<=end);
    if(start>end)
        cout<<"Not found."<<endl;
}
int main()
{
    int arr[13]={12,23,30,32,38,42,50,60,65,70,85,90,100};
    int choice,size = 13;
    cout<<"Enter the value that you search : " ;
    cin>>choice;
    Binary_search(arr,size,choice);
    return 0;
}
