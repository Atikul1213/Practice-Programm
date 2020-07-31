#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,value,sum,cas=1;
    while(scanf("%d",&n)!=EOF){
            sum = 1;
        for(int i=1;i<=n;i++){
            cin>>value;
            if(value>0){
                sum = sum * value;
            }
        }
    cout<<"Case #"<<cas++<<": The maximum product is "<<sum<<"."<<endl;
    }
    return 0;
}
