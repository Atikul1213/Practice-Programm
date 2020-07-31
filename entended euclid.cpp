#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ex_euclid(ll a,ll b,ll &x,ll &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    ll xx,yy;
    ll g = ex_euclid(b,a%b,xx,yy);
    x = yy;
    y = xx - yy*(a/b);
    return g;
}
int main()
{
    ll a,b,x,y;
    cin>>a>>b;
    ll gcd = ex_euclid(a,b,x,y);
    cout<<x<<" "<<y<<" "<<gcd<<endl;
    return 0;
}

