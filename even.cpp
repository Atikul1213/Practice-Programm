#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n&1)
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;
    if(n/(1<<2))
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    cout<<(1<<2)<<endl;
    return 0;
}
