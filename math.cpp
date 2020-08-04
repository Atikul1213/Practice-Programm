#include<bits/stdc++.h>
using namespace std;
int main()
{
    double  para = 1,res;
    res = asin(para)*180/acos(-1);
    cout<<res<<endl;
    para = 30;
    res = sin(para*acos(-1)/180);
    cout<<res<<endl;
    cout<<acos(cos(1.99))<<endl;
    cout<<exp(0)<<endl;
    cout<<log(1)<<endl;
    cout<<log(2)<<endl;
    cout<<log(4)<<endl;
    cout<<log10(100)<<endl;
    cout<<log10(100000)<<endl;
    cout<<pow(4,2)<<endl;
    cout<<pow(11,2)<<endl;
    cout<<sqrt(19)<<endl;
    cout<<sqrt(16)<<endl;
    cout<<fmod(19.4,4)<<endl;
    cout<<fabs(-33)<<endl;
    cout<<fabs(-4.44)<<endl;
    cout<<floor(3.4)<<endl;
    cout<<floor(3.9)<<endl;
    cout<<ceil(1.2)<<endl;
    cout<<ceil(3.9)<<endl;
    return 0;
}
