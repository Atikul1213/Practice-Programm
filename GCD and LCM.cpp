#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    int ans = 1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0)
            ans = i;
    }
    return ans;
}
int GCD1(int a,int b){
    if(b==0)
        return a;
    return GCD1(b,a%b);
}
int LCM(int a,int b){
    for(int i=1;;i++){
        if(i%a==0 && i%b==0)
            return i;
    }
}
int LCM_1(int a,int b){
    return (a*b)/GCD(a,b);
}
int main()
{
    cout<<GCD1(20,40)<<endl;
    cout<<__gcd(20,40)<<endl;
    cout<<GCD(20,40)<<endl;
    cout<<__gcd(20,40)<<endl;
    cout<<__gcd(60,24)<<endl;
    cout<<LCM(60,24)<<endl;
    cout<<LCM_1(60,24)<<endl;

    return 0;
}
