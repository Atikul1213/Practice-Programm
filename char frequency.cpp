#include<bits/stdc++.h>
using namespace std;
int cnt[200];
bool is_prime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int cas=1,t,ck;
    char str[63];
    cin>>t;
    while(t--){
        ck = 1;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        cnt[(str[i])]++;
    }
    cout<<"Case "<<cas++<<": ";
    for(int i=48;i<123;i++){
        if(cnt[i]>0){
            if(is_prime(cnt[i])){
                ck = 0;
                cout<<(char)i;
            }
        }
    }
    if(ck == 1)
        cout<<"empty";
    cout<<endl;
    memset(cnt,0,sizeof(cnt));
    }
    return 0;
}
