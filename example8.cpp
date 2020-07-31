#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,len,width,height,cas=1;
    cin>>t;
    while(t--){
        cin>>len>>width>>height;
        if(len<=20 && width<=20&&height<=20)
            cout<<"Case "<<cas++<<": good"<<endl;
        else
            cout<<"Case "<<cas++<<": bad"<<endl;
    }
    return 0;
}
