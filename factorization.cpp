#include<bits/stdc++.h>
#define Lim 100000
using namespace std;
bool flag[Lim];
vector<int>prime;
int List[100],Size;
void sieve(int n){
    for(int i=4;i<=n;i+=2) flag[i] = true;
    for(int i=3;i*i<=n;i++){
        if(flag[i]==false){
            for(int j=i*i;j<=n;j+=i)
                flag[j] = true;
        }
    }
    for(int i=2;i<=n;i++){
        if(flag[i]==false)
            prime.push_back(i);
    }
}
void Prime_factorization(int n){
    sieve(sqrt(n));
    Size=0;
    memset(List,0,sizeof(List));
    for(int i=0;prime[i]<=n;i++){
        if(n%prime[i]==0){
            while(n%prime[i]==0){
                List[Size++] = prime[i];
                n/= prime[i];
            }
    }
        if(n>1)
            List[Size] = n;
        }
}
void print(int n){
 Prime_factorization(n);
        cout<<n<<" = ";
        for(int i=0;i<Size;i++){
                if(i!=0)    cout<<" x ";
            cout<<List[i];
        }
}
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int n,n1;
    while(scanf("%d",&n)){
            if(n==0) break;
    if(n<0){
         n1 = n*-1;
         if(isPrime(n1))
        cout<<n<<" = "<<n<<endl;
    else print(n1);
    cout<<endl;

    }
    else{
    if(isPrime(n))
        cout<<n<<" = "<<n<<endl;
    else print(n);
    cout<<endl;
    }
    }
    return 0;
}
