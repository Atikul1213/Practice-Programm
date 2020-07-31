#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll  GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int main()
{
    ll  sum;
    int n;
    while(scanf("%d",&n)!=EOF){
            sum = 0;
        if(n==0)
            return 0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<=n;j++){
                sum += __gcd(i,j);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
