#include<bits/stdc++.h>
using namespace std;
const int numCoins = 3;
const int INF = 100000009;
const int sum = 10;
int coins[numCoins] = {1,3,4};
int value[sum+1];
int ready[sum+1];
/// solution of the sum

int sol(int sum){
    if(sum<0)
        return INF;
    if(sum==0)
        return 0;
        if(ready[sum])
            return value[sum];
    int best = INF;
    for(int i=0;i<numCoins;i++){
        best = min(best,sol(sum-coins[i])+1);
    }
    ready[sum] = 1;
    value[sum] = best;
    return value[sum];
}
int main()
{
    cout<<sol(sum)<<endl;
    return 0;
}
