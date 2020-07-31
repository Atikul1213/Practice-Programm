#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int cell[100][100];
int d[100][100],vis[100][100];
int row,cel;
void bfs(int sx,int sy){
    memset(vis,0,sizeof vis);
    vis[sx][sy] = 1;
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii top = q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int tx = top.uu + fx[k];
            int ty = top.vv + fy[k];
            if(tx>=0 && tx<row && ty>=0 && ty<col &&cell[tx][ty]!=-1&&vis[tx][ty]==0){
                vis[tx][ty] = 1;
                d[tx][ty]=d[top.uu][top.vv]+1;
                q.push(pii(tx,ty));
            }
        }
    }
}
int main()
{

    return 0;
}
