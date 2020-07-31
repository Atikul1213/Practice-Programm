#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<12.34<<endl;
    cout.setf(ios::showpoint);
    cout<<12.345<<endl;

    cout.setf(ios::scientific);
    cout<<12.345<<endl;
    cout.setf(ios::uppercase);
    cout<<12.345<<endl;
    cout<<"hello"<<endl;

    cout.setf(ios::showpos);
    cout<<12.345<<endl;
    return 0;
}
