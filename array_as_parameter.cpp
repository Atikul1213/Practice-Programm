#include<bits/stdc++.h>
using namespace std;
void show(int array1[]){
     cout<<"in function: "<<array1[3]<<endl;
     array1[3] = 100;
     cout<<"In function: "<<array1[3]<<endl;
}
int main()
{
    int arr[5]={10,20,30,40,50};
    cout<<"before In main function arr[3] = "<<arr[3]<<endl;
    show(arr);
    cout<<"In main(): "<<arr[3]<<endl;
    return 0;
}
