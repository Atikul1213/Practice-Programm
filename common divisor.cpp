#include<bits/stdc++.h>
using namespace std;
int cnt;
int Divisor(int n){
    cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(i*i==n) cnt+=1;
        else if(n%i==0) cnt+=2;
    }
    return cnt;
}
int main()
{
    int a,b,temp,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        temp = __gcd(a,b);
        cout<<Divisor(temp)<<endl;
    }
    return 0;
}
