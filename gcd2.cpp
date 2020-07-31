#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    int ans=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            ans = i;
        }
    }
    return ans;
}
int gcd1(int a,int b){
    return b ==0 ? a : gcd(b,a%b);
}
int main()
{
    cout<<gcd(24,60)<<endl;

    return 0;
}
