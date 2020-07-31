#include<bits/stdc++.h>
#define ll long long
using namespace std;
bitset<100000007>bs;
vector<ll>prime;
void sieve(long long upper_bound){
    bs.set();
    bs[0]=bs[1] = 0;
    prime.push_back(2);
    for(ll i=3;i<=upper_bound+1;i+=2){
        if(bs[i]){
            for(ll j=i*i;j<=upper_bound;j+=i){
                bs[j] = 0;
                prime.push_back(i);
            }
        }
    }
}
void primeFactorize(ll n){
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n /= prime[i];
                cout<<"   "<<prime[i]<<endl;
            }
        }
    }
    if(n>1)
        cout<<"  "<<n<<endl;
}
int main()
{
    sieve(1000007);
    ll x;
    while(scanf("%lld",&x)!=-1){
        if(x<0)
            x *= (-1);
        primeFactorize(x);
        cout<<endl;
    }
    return 0;
}
