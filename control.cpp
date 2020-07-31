#include<bits/stdc++.h>
using namespace std;
int Sequence(unsigned int n){
    int cnt=0;
    do{
        if(n%2==0){
                cnt++;
            n = n /2;
        }
        else{
                cnt++;
            n = 3*n+1;
        }
    }while(n!=1);
   return cnt;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Count: "<<Count(n)<<endl;
    return 0;
}
