#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
bool flag[1000000];
void sieve(int n){
    flag[1] = true;
    for(int i=4;i<=n;i+=2) flag[i] = true;
    for(int i=3;i*i<=n;i+=2){
        if(flag[i]==0){
            for(int j=i*i;j<=n;j+=i)
                flag[i]== true;
        }
    }
    for(int i=1;i<=n;i++){
        if(flag[i]==0)
            vec.push_back(i);
    }
}
int Summation(int n){
    int sum = 0;
    while(n!=0){
        sum = sum  + n % 10;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int a,b,c,d,e,cnt=0;
    cin>>a>>b;
    sieve(b);
    for(int i=a;i<=b;i++){
        c = sieve(i);
        d = Summation(i);
        e = sieve(d);
    if(c==1 && e==1) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
