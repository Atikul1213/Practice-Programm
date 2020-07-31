#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void Divisor(ll fact[],ll n){
    ll i,j=0;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            fact[j++] = i;
            if(i!=sqrt(n))
                fact[j++] = n / i;
        }
    }
    sort(fact,fact+j);
    for(i=0;i<j;i++)
        cout<<fact[i]<<"\t";
}
int main()
{
    ll n,arr[1000];
    cin>>n;
    Divisor(arr,n);
    return 0;
}
