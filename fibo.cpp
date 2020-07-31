#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll Fibonacci(int n){
    ll fibo[10000],i;
    fibo[0] = 0, fibo[1] = 1;
    for(i=2;i<=n;i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo[i-1];
}
int main()
{
    int n,mod;
    while(scanf("%d%d",&n,&mod)!=EOF){
            mod = 1<<mod;
    cout<<"Fibonacci: "<<Fibonacci(n)<<endl;
    cout<<Fibonacci(n)%mod<<endl;
    }
    return 0;
}
