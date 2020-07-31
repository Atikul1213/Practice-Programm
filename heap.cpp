#include<bits/stdc++.h>
using namespace std;
struct myStruct{
    int i;
    char ch;
    char ch1;
    char ch2;
    char ch3;
    char ch4;
    //double d;
};
int* change(){
    int *px;
    px = (int *)malloc(sizeof(int));
    *px = 10;
    return px;
}
int main()
{
    struct myStruct s;
    cout<<sizeof(s)<<endl;
    return 0;
}
