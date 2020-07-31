#include<bits/stdc++.h>
#define Limit 1000000
using namespace std;
bool flag[Limit];
vector<int>vec;
void sieve(int n){
    flag[1] = 1;
    for(int i=4;i<=n;i+=2) flag[i] = 1;
    for(int i=3;i<=sqrt(n);i+=2){
        if(flag[i]==0){
            for(int j=i*i;j<=n;j+=i){
                flag[j] = 1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(flag[i]==0){
           vec.push_back(i);
        cout<<i<<'\t';
        }
    }
}
int main()
{
    sieve(1000);
    return 0;
}
