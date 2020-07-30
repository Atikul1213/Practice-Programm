#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *px = &x;
    *px = 20;
    int *(*pxx) = &(*px);
    cout<<*(*pxx)<<endl;
    return 0;
}
