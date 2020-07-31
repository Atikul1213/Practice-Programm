#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3]={4,8,9};
    int *arr2 = (int*)malloc(sizeof(arr));
    *arr2 = 4;
    *(arr2+1)=8;
    *(arr2+2) = 10;
    cin>>arr2[1];
    return 0;
}
