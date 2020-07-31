#include<bits/stdc++.h>
#define White 1
#define Gray 2
#define Black 3
using namespace std;
int adj[100][100];
int color[100];
int parent[100];
int dis[100];
int node,edge;
void bfs(int startingNode){
    for(int i=0;i<node;i++){
        color[i] = White;
        dis[i] = INT_MIN;
        parent[i] = -1;
    }
    dis[startingNode] = 0;
    parent[startingNode] = -1;
    queue<int>q;
    q.push(startingNode);
    while(!q.empty()){
        int x;
        x = q.front();
        q.pop();
        color[x] = Gray;
        cout<<x<<"   ";
        for(int i=0;i<node;i++){
            if(adj[x][i]==1){
                if(color[i]==White){
                      dis[i] = dis[x] + 1;
                    parent[i] = x;
                    q.push(i);
                }
            }
        }
        color[x] = Black;
    }
}
int main()
{
    freopen("BFS10.txt","r",stdin);
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int n1,n2;
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }
    bfs(0);
    cout<<endl;
    cout<<parent[5]<<endl;
    return 0;
}
