#include<bits/stdc++.h>
using namespace std;
bool flag[10000];
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
        if(flag[i]==0)
            vec.push_back(i);
    }
}
int main()
{
    int n,a,b;
    while(scanf("%d",&n)!=EOF){
        sieve(n);
        for(int i=(vec.size()-1),j=0;i>=0;i--,j++){
                a = vec[i]; b = vec[j];
            if((a+b)==n){
                cout<<n<<" = "<<a<<" + "<<b<<endl;
                break;
            }
        }
        vec.clear();
    }
    return 0;
}
