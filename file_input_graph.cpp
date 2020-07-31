#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int main()
{
    int node,edge;
    freopen("file.txt","r",stdin);
    cin>>node>>edge;
    int n1,n2;
    for(int i=0;i<edge;i++){
        cin>>n1>>n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }
    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            cout<<adj[i][j]<<'\t';
        }
        cout<<endl;
    }

    return 0;
}
