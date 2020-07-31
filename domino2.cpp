#include<bits/stdc++.h>
#define White 1
#define Gray 2
#define Black 3
#define Size 100
using namespace std;
int adj[Size][Size];
int color[Size];
int n,m,l;
void dfsVisit(int x);
void dfs(){
    for(int i=0;i<=n;i++){
        color[i] = White;
    }
    for(int i=0;i<=n;i++){
        if(color[i]==White){
            dfsVisit(i);
        }
    }
}
void dfsVisit(int x){
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
int main()
{
    int cnt=0;
    cin>>n>>m>>l;
    for(int i=0;i<m;i++){
        int n1,n2;
        cin>>n1>>n2;
        adj[n1][n2] = 1;
    }
    dfs();
    for(int i=0;i<=n;i++){
        if(adj[l][i]==1)
            cout<<i<<'\t';
            if(adj[i][l]==1)
                cout<<i<<'\t';
    }
    cout<<endl;
    return 0;
}
