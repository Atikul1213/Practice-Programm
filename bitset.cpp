#include<bits/stdc++.h>
#define Size 8
using namespace std;
int main()
{
    bool arr[Size];
    bitset<Size>b(string("110001"));
//    cout<<b<<endl;
//    b.set();
//    cout<<b<<endl;
//    b.reset();
//    cout<<b<<endl;
    cout<<b[1]<<endl;
    cout<<b.size()<<endl;
    cout<<b.count()<<endl;
    cout<<b.size()-b.count()<<endl;
    if(b.any())
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

    if(b.none())
        cout<<"true."<<endl;
    else
        cout<<"false"<<endl;
    //b[1] =1;

    b.set(3);
    b.set(2);
    b.set(1);
    b.reset(1);
    cout<<b<<endl;
    return 0;
}
