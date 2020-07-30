#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double A;
    A=( (b*b+c*c-a*a)/(2*b*c));
    cout<<A<<endl;
    cout<<acos(A)<<endl;
    return 0;
}
