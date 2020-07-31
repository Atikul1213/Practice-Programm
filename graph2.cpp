#include<bits/stdc++.h>
using namespace std;
int node,edge;
int adj[100][100];
int main()
{
    freopen("file.txt","r",stdin);
    freopen("file2.txt","w",stdout);
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int n1,n2;
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
    int ch;
    cin>>ch;
    for(int i=0;i<node;i++){
        if(adj[ch][i]==1)
            cout<<i<<'\t';
    }
    cout<<endl;
    return 0;
}
