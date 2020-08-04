#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    x = 10;
    cout<<x<<endl;
    cout<<(int)&x<<endl;
    cout<<*(&x)<<endl;
    int *px;
    px = &x;
    cout<<(int)px<<endl;
    cout<<*px<<endl;
    int **pxx;
    (*pxx) = &(*(&x));
    cout<<**pxx<<endl;
    return 0;
}
