#include<bits/stdc++.h>
using namespace std;
int cnt;
int Divisor(int n){
    cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(i*i==n) cnt+=1;
        else if(n%i==0)
            cnt+=2;
    }
    return cnt;
}
int main()
{
    int t,n,Max,temp;
    cin>>t;
    while(t--){
            Max = 0;
        cin>>n;
      for(int i=1;i<=n;i++){
         if(Max<=Divisor(i)){
                Max = Divisor(i);
            temp = i;
         }
      }
      cout<<temp<<endl;
    }
    return 0;
}
