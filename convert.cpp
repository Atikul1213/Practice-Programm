#include<bits/stdc++.h>
#define ll long long
#define Lim 1000006
using namespace std;
bool flag[Lim];
vector<int>prime;
int List[1000],Size;
void sieve(ll n){
    n = n / 2;
    for(int i=4;i<=n;i+=2) flag[i] = true;
    for(int i=3;i*i<=n;i+=2){
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
void Prime_Factorization(int n){
    for(int i=0;prime[i]<=n;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                n/=prime[i];
                List[Size++] = prime[i];
            }
        }
            if(n>1)
            List[Size] = n;
    }
}
int main()
{
    ll n;
    cin>>n;
    sieve(n);
    Prime_Factorization(n);
        cout<<List[Size-1];

    return 0;
}
