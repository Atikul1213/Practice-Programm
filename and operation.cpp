#include<bits/stdc++.h>
using namespace std;
int n;
int sol(int index,vector<int>& ar,vector<int>&flag){
    if(index==-1)
        return 0;
    int ans = 0;
    int total = 0;
    for(int i=0;i<n;i++){
        if(flag[i]==0){
            if(ar[i]&(1<<index)){
                total++;
            }
        }
    }
    if(total>=2){
        ans += (1<<index);
        for(int i=0;i<n;i++){
            if((ar[i] & (1<<index))==0){
                flag[i] = 1;
            }
        }
    }
    return ans + sol(index-1,ar,flag);
}
int main()
{
    cin>>n;
    vector<int>ar(n);
    vector<int>flag(n);
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<sol(30,ar,flag)<<endl;
    return 0;
}
