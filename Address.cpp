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
    cout<<(int)&px<<endl;
    cout<<*px<<endl;
    *px = 20;
    cout<<*px<<endl;
    cout<<x<<endl;

    float x1 = 200;
    float *pxx = &x1;
    cout<<(int)&pxx<<endl;
    cout<<(int)&x1<<endl;

    return 0;
}
