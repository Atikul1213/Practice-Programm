#include<bits/stdc++.h>
using namespace std;
int *change(){
    int *px;
    px = (int *)malloc(sizeof(int));
    *px = 10;
    return px;
}
struct myStruct{
    int i;
    char c;
    double d;
};
int main()
{
    int arr[10];
    cout<<sizeof(arr)<<endl;
    int *px;
    px = (int *)malloc(sizeof(int));
    char *pc;
    pc = (char *)malloc(sizeof(char));
    cout<<sizeof(myStruct)<<endl;
    return 0;
}
