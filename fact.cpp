#include<bits/stdc++.h>
#define ll long long int
#define Lim 1000000
using namespace std;
bool flag[Lim];
vector<ll>prime;
ll List[10000],Size;
void sieve(int n){
    n = n/2;
    for(int i=4;i<=n;i+=2) flag[i] = true;
    for(int i=3;i*i<=n;i++){
        if(flag[i]==false){
            for(int j=i*i;j<=n;j+=i)
                flag[j] = true;
        }
    }
    for(int i=2;i<=n;i++){
        if(flag[i]==false)
            prime.push_back(i);
    }
}

void Prime_factorization(ll n){
    sieve(n);
    Size=0;
    List[Size++] = 1;
    for(ll i=0;prime[i]*prime[i]<=n+1;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                List[Size++] = prime[i];
                n/= prime[i];
            }
    }
        if(n>1){
            List[Size] = n;
        }
        }
}
int main()
{
    ll n;
    scanf("%lld",&n);
    Prime_factorization(n);
    cout<<"Size = "<<Size<<endl;
    for(int i=0;i<=Size;i++)
        cout<<List[i]<<'\t';
        cout<<endl;
    cout<<"Size = "<<List[Size]<<endl<<endl;
    return 0;
}
