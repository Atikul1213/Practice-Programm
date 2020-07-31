#include<bits/stdc++.h>
#define Size 8
using namespace std;
int main()
{
    bitset<4>b(string("0011"));
    cout<<b<<endl;

    b = b <<1;
    cout<<b<<endl;
    b = b >>2;
    cout<<b<<endl;
    bitset<4>a(string("0101"));
    cout<<(a==b)<<endl;
    cout<<(a^b)<<endl;
    return 0;
}
