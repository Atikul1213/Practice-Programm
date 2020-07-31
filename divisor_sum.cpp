#include<bits/stdc++.h>
using namespace std;
int divisor_sum(int n){
    int cnt = 1;
    if(n<2) return 0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cnt +=i;
            if(i*i!=n)
                cnt +=(n/i);
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<divisor_sum(n)<<endl;
    return 0;
}

