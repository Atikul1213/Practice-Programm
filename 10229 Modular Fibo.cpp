#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll Fibonacci(ll n){
   ll fibo[100],i;
   fibo[0] = 0, fibo[1] =1;
   for(i=2;i<=n;i++){
    fibo[i] = fibo[i-1] + fibo[i-2];
   }
   return fibo[i-1];
}
int main()
{
    int n,mod;
    long long m;
    while(scanf("%d%d",&n,&mod)!=EOF){
    m = 1<<mod;
    cout<<Fibonacci(n)%m<<endl;
    }
    return 0;
}

