#include<bits/stdc++.h>
using namespace std;
int arr[10]={2,3,5,7,11,13,17};
vector<int>prime(arr,arr+7);
int countDivisor(int n){
    int divisor = 1;
    for(int i=0;i<prime.size();i++){
        if(n%prime[i]==0){
            int cnt = 1;
            while(n%prime[i]==0){
                 n /= prime[i];
                 cnt++;
            }
            divisor *= cnt;
        }
    }
    return divisor;
}
int main()
{
    cout<<countDivisor(18)<<endl;
    return 0;
}
