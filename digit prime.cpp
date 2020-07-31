#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool Prime(int n){
    if(n<2) return false;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int Summation(int n){
    int sum =0;
    while(n!=0){
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int t,t1,t2,cnt;
    ll a,b;
    scanf("%d",&t);
    while(t--){
            cnt=0;
        scanf("%d%d",&t1,&t2);
        for(ll i=t1;i<=t2;i++){
            a = Prime(i);
            b = Summation(i);
            b = Prime(b);
            if(a==1 && b==1) cnt++;
        }
    printf("%d\n",cnt);
    }
    return 0;
}
