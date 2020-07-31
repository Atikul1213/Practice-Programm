#include<bits/stdc++.h>
#define size1 10
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr = &arr[0];
    for(int i=0;i<5;i++){
        cout<<(int)(ptr+i)<<'\t'<<*(ptr+i)<<endl;
    }
    cout<<endl;

    ptr = arr;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<'\t';
    }

    const int size = 10;
    int arr1[size];
    for(int i=0;i<size;i++){
        ///cin>>arr1[i];
    }
    return 0;
}

