#include<bits/stdc++.h>
#define ll long long
#define Size 10000007
using namespace std;
vector<int>prime;
vector<int>vec;
bool flag[Size];
void sieve(){
    flag[1] = true;
    for(ll i=4;i<=Size;i+=2) flag[i] = true;
    for(ll i=3;i*i<=Size;i+=2){
        if(flag[i]==false){
            for(ll j=i*i;j<=Size;j+=i){
                flag[j] = true;
            }
        }
    }
    for(int i=1;i<=Size;i++){
        if(flag[i]==false){
            prime.push_back(i);
        }
    }
}
void prime_Factor(ll n){
    sieve();
    for(ll i=0;prime[i]<=n;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                    cout<<prime[i]<<'\t';
                    n/=prime[i];
            }
        }
    }
}
int main()
{
    ll n;
    cin>>n;
    prime_Factor(n);
    return 0;
}
