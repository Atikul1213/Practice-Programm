#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,z,total,a,b,rem;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        a = (z/(x+y));
        rem = z % (x+y);
        y = a * y;
        x = a * x;
        cout<<x+(x-y)+rem<<endl;
    }
    return 0;
}
