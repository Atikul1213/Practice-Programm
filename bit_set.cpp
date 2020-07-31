#include<bits/stdc++.h>
#define Size 8
using namespace std;
int main()
{
    bool arr[Size];
    bitset<Size>b(string("1010"));
    cout<<b<<endl;
    b.flip();
    cout<<b<<endl;
    b.flip();
    cout<<b<<endl;
    cout<<b[0]<<endl;
    cout<<b[1]<<endl;
    b[0] = 1;
    cout<<b[0]<<endl;
    cout<<b.size()<<endl;
    cout<<b.count()<<endl;
    cout<<b.size()-b.count()<<endl;
    if(b.any())
        cout<<"true"<<endl;
    else
        cout<<"false."<<endl;
    if(b.none())
        cout<<"true."<<endl;
    else
        cout<<"false."<<endl;
    b.set(1);
    cout<<b<<endl;
    b.reset(0);
    cout<<b<<endl;

    b.set();
    cout<<b<<endl;
    b.reset();
    cout<<b<<endl;

    return 0;
}
