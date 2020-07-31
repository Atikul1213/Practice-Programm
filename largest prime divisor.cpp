#include<bits/stdc++.h>
#define ll long long
#define Size 10000007
using namespace std;
bitset<Size>bs;
vector<ll>prime;
ll cnt,big;
void sieve(int n){
    bs.set();
    bs[0] = bs[1] = false;
    prime.push_back(2);
    for(ll i=3;i<=n;i+=2){
        if(bs[i]){
            for(ll j=i*i;j<=n;j+=i)
                bs[j] = false;
            prime.push_back(i);
        }
    }
}

void prime_factorize(ll n){
    big = 0,cnt =0;
    for(int i=0;prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0){
            big = prime[i];
            while(n%prime[i]==0){
                    cnt++;
                n/=prime[i];
            }
        }
    }
    if(n>1){
        cnt++;
        big = n;
    }
}
int main()
{
    ll n;
    sieve(Size);
    while(scanf("%lld",&n)){
        if(n==0) break;
        if(n<0) n*=-1;
        prime_factorize(n);
        if(cnt==1) cout<<"-1"<<endl;
       else cout<<big<<endl;
    }
    return 0;
}
