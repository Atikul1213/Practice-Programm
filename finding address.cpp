#include<bits/stdc++.h>
using namespace std;
int abc(int a,int b){
    return a + b;
}
void abc(int a){
    cout<<a<<endl;
}
int main()
{
    int (*ptr)(int,int);
    ptr = abc;
    cout<<ptr<<endl;
    cout<<ptr(4,5)<<endl;

    void (*ptr1)(int);
    ptr1 = abc;
    abc(5);

    return 0;
}
