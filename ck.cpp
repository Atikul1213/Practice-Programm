#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cnt=1;
ll Reverse(ll n){
    ll sum = 0,rem;
    while(n!=0){
            rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }
    return sum;
}
ll Repeat(ll n){
    ll temp;
    temp = n;
    temp = temp + Reverse(n);
    if(temp==Reverse(temp)){
            cout<<cnt;
        return temp;
    }
    else{
            cnt++;
    return Repeat(temp);
    }
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
    cout<<" "<<Repeat(n)<<endl;
    cnt=1;
    }
    return 0;
}
