#include<bits/stdc++.h>
#define White 0
#define Gray 1
#define Black 2
#define Lim 10003
using namespace std;
int adj[Lim][Lim];
int color[Lim];
int n,m,l,cnt;
void dfsVisit(int x){
    cnt++;
    color[x] = Gray;
    for(int i=0;i<=n;i++){
        if(adj[x][i]==1){
            if(color[i]==White){
                dfsVisit(i);
            }
        }
    }
    color[x] = Black;
}
void dfs(int x){
    for(int i=0;i<=n;i++) color[i] = White;
     dfsVisit(x);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>l;
        for(int i=0;i<m;i++){
            int n1,n2;
            cin>>n1>>n2;
            adj[n1][n2] = 1;
        }
    for(int i=0;i<l;i++){
        int value;
        cin>>value;
        dfs(value);
    cout<<cnt<<endl;
    cnt=0;
    }
    }
    return 0;
}
