#include<bits/stdc++.h>
using namespace std;
int* getValue(){
    int x;
    x = 20;
    return &x;
}
int main()
{
    int *px;
    px = getValue();
    cout<<*px<<endl;
    int y;
    return 0;
}
