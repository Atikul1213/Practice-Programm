#include<bits/stdc++.h>
using namespace std;
int countDivisor(int n){
    int divisor = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            divisor++;
    }
    return divisor;
}
int countDivisor1(int n){
    int divisor = 0;
    for(int i=1;i*i<=n;i++){
        if(i*i==n)
            divisor++;
        else if(n%i==0)
            divisor +=2;

    }
    return divisor;
}
vector<int>primes;
int countDivisor2(int n){
    int divisor = 1;
    for(int i=0;i<primes.size();i++){
        if(n%primes[i]==0){
            int cnt = 1;
            while(n%primes[i]==0){
                n /= primes[i];
                cnt++;
            }
            divisor *= cnt;
        }
    }
    return divisor;
}
int divisorSum(int n){
    int total = 1;
    for(int i=0;i<primes.size();i++){
        if(n%prime[i]==0){
            int cnt = 1;
            while(n%primes[i]==0){
                n /= primes[i];
                cnt++;
            }
            total *= (pow(primes[i],cnt)-1) / (primes[i]-1);
        }
    }
    return total;
}
int main()
{
    cout<<countDivisor1(18)<<endl;
    return 0;
}
