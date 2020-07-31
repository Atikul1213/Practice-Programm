#include<bits/stdc++.h>
#define White 1
#define Gray 2
#define Black 3
using namespace std;
int adj[100][100];
int color[100];
int node,edge;
int Time = 1;
int stime[100];
int Ftime[100];
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
    stime[x] = Time;
    ++Time;
    for(int i=0;i<node;i++){
        if(adj[x][i]==1){
            if(color[i]==White){
                dfsVisit(i);
            }
        }
    }
    color[x] = Black;
    Ftime[x] = Time;
    ++Time;
}
int main()
{
    freopen("file.txt","r",stdin);
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int n1,n2;
        cin>>n1>>n2;
        adj[n1][n2] = 1;
      //  adj[n2][n1] = 1;
    }
    dfs();
    cout<<endl<<endl;
    for(int i=0;i<node;i++){
        cout<<"Node: "<<(char)('A'+i)<<"  "<<stime[i]<<"   "<<Ftime[i]<<endl;
    }
    return 0;
}
