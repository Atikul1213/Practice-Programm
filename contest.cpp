#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,l,r,temp,temp1,GCD,LCM,ck,j;
    cin>>t;
    while(t--){
        cin>>l>>r;
        ck = 0,j=l+1;
    for(ll i=l;i<=r;i++){
        temp = i;
        while(j<=r){
        temp1 = j;
        GCD = __gcd(temp,temp1);
        LCM = (temp*temp1)/GCD;
        if(LCM>=l && LCM<=r){
            cout<<temp<<" "<<temp1<<endl;
            ck = 1;
            break;
        }
        j++;
        if(ck==1) break;
        }
        if(ck==1)
            break;
    }

    if(ck==0)
        cout<<-1<<" "<<-1<<endl;

    }
    return 0;
}
