#include<bits/stdc++.h>
#define M 100000
using namespace std;
vector<int>prime;
int phi(int n){
    int ret = n;
    for(int i=0;i<prime.size();i++){
        if(n%prime[i]==0){
            ret -=ret/prime[i];
        }
    }
    return ret;
}

int phi1(int n){
    int ret = n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            ret -= ret/i;
        }
    }
    if(n>1)
        ret -=ret/n;
    return ret;
}

int phi2[M];
void calculationPhi(){
    for(int i=1;i<M;i++){
        phi2[i] = i;
    }
    for(int p = 2;p<M;p++){
        if(phi2[p]==p){
            for(int k=p;k<M;k+=p){
                phi2[k] -= phi2[k]/p;
            }
        }
    }
}
int main()
{
    cout<<phi1(120)<<endl;
    return 0;
}
