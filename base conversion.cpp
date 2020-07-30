#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll Convert(int base,int n){
    ll dec = 0,rem,i=0;
    while(n!=0){
        rem = n % base;
        dec = dec + rem*pow(10,i);
        i++;
        n = n / base;
    }
    return dec;
}
int main()
{
    cout<<Convert(22,3)<<endl;
    return 0;
}
