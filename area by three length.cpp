#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    double s,area;
    cin>>a>>b>>c;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area = "<<area<<endl;
    return 0;
}
