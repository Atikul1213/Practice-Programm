#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,amp,fre,temp,i;
    cin>>t;
    while(t--){
        cin>>amp>>fre;
        for(i=1;i<=fre;i++){
            for(int j=1;j<=amp;j++){
                for(int k=1;k<=j;k++){
                    cout<<j;
                }
                cout<<endl;
            }
            for(int j=amp-1;j>=1;j--){
                for(int k=1;k<=j;k++)
                    cout<<j;
                cout<<endl;
            }
            cout<<endl;
        }
        if(t>0)
            cout<<endl;
    }
    return 0;
}

