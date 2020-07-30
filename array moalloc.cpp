#include<bits/stdc++.h>
#define Size 100000
using namespace std;
vector<int>prime;
bool flag[Size];
void sieve(){
    flag[1] = 1;
    for(int i=4;i<=Size;i+=2) flag[i] = 1;
    for(int i=3;i<=sqrt(Size);i+=2){
        if(flag[i]==0){
            for(int j=i*i;j<=Size;j+=i)
                flag[j] = 1;
        }
    }
    for(int i=1;i<Size;i++){
        if(flag[i]==0)
            prime.push_back(i);
    }
}
int main()
{
    int n;
    cin>>n;
    sieve();
    for(int i=0;i<prime.size();i++){
         if(n==i){
            cout<<"("<<prime[i]<<", "<<prime[i+1]<<")"<<endl;
            break;
         }
    }
    return 0;
}
