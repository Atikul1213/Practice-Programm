#include<bits/stdc++.h>
using namespace std;
int m,n,o,p;
void abc(int a,int b,int *sum,int  *sub,int *mult,int *div){
    *sum = a + b;
    *sub = a - b;
    *mult = a * b;
    *div = a / b;
}
int main()
{
    int sum,sub,div,mult;
    int a,b;
    a = 6, b = 2;
    abc(a,b,&sum,&sub,&mult,&div);
   // sum = m;  sub = n; mult = o; div = p;
    cout<<sum<<'\t'<<sub<<'\t'<<mult<<'\t'<<div<<endl;
    return 0;
}
