#include<bits/stdc++.h>
#define White 1
#define Gray 2
#define Black 3
using namespace std;
int node,edge;
int adj[100][100];
int STime[100];
int FTime[100];
int Time=1;
int color[100];
void dfsVisit(int x);
void dfs(){
    for(int i=0;i<node;i++){
        color[i] = White;
    }
    for(int i=0;i<node;i++){
        if(color[i]==White){
            dfsVisit(i);
        }
    }
}
void dfsVisit(int x){
    color[x] = Gray;
    STime[x] = Time++;
    for(int i=0;i<node;i++){
        if(adj[x][i]==1){
            if(color[i]==White){
                dfsVisit(i);
            }
        }
    }
    color[x] = Black;
    FTime[x]=Time++;
}
int main()
{
    freopen("file.txt","r",stdin);
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int n1,n2;
        cin>>n1>>n2;
        adj[n1][n2] = 1;
    }
    dfs();
    for(int i=0;i<node;i++){
        cout<<"Node: "<<(char)('A'+i)<<"\t"<<"Stime:  "<<STime[i];
        cout<<"  ftime: "<<FTime[i]<<endl;
    }
    return 0;
}
