#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a,b,i,j,cnt,temp,t;
    cin>>t;
    while(t--){
            cnt=0;
    cin>>x>>y>>a>>b;
    for(i=x,j=y;;i+=a,j-=b){
        if(j<i){
            cout<<-1<<endl;
            break;
        }
        else if(i==j){
                cout<<cnt<<endl;
            break;
        }
        else
         cnt++;
    }
    }
    return 0;
}
