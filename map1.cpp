#include<bits/stdc++.h>
#define Lim 10000
using namespace std;
int main()
{
    int n,w,Y[Lim],x;
    cin>>n>>w;
    for(int i=0;i<n;i++){
        cin>>x>>Y[i];
    }
    sort(Y,Y+n);
    int lo = Y[0], hi = Y[0] + w,i=0,mov = 1;
    while(i<n){
        if(lo <= Y[i] && Y[i] <= hi) i++;
        else{
            mov++;
            lo = Y[i];
            hi = Y[i] + w;
        }
    }
    cout<<mov<<endl;
    return 0;
}
