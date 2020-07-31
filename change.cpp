#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,total,t;
    double a,b;
    cin>>t;
    while(t--){
    cin>>x>>y>>z;
    a = (double)z / (x+y);
    b = a *y;
    a = a * x;
    total = a + (a-b);
    if(total<0)
        cout<<0<<endl;
    else
    cout<<total<<endl;
    }
    return 0;
}
