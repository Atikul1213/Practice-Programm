#include<bits/stdc++.h>
using namespace std;
void linear_search(int arr[],int Size){
    int item,i;
    cout<<"Enter the item that you search: ";
    cin>>item;
    for(i=0;i<Size;i++){
        if(arr[i]==item){
            cout<<"Found at position: "<<i+1<<endl;
            break;
        }
    }
    if(i==Size){
        cout<<"Not found."<<endl;
    }
}
int main()
{
    int arr[5]={9,3,5,2,4};
    linear_search(arr,5);
    return 0;
}
