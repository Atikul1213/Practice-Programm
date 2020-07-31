#include<bits/stdc++.h>
using namespace std;
void abc(int arr[]){
    arr[0] = 100;
    cout<<"In function: "<<arr[0]<<endl;
}
void abc_a(int arr[],int a){
    a = 10;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"In main(): "<<arr[3]<<endl;
    abc(arr);
    int a = 5;
    cout<<"In main() function: "<<arr[0]<<endl;
    abc_a(arr,a);
    cout<<"In main() function: "<<a<<endl;
    return 0;
}
