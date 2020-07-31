#include<bits/stdc++.h>
#define Size 10004
using namespace std;
vector<int>vec[Size];
bool vis[Size];
int node,edge;
void dfsVisit(int n){
    vis[n] = true;
    for(int i=0;i<vec[n].size();i++){
        int x = vec[n][i];
        if(vis[x]==false){
            dfsVisit(x);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,l,x;
        cin>>n>>m>>l;
        for(int i=0;i<n+1;i++){
            vis[i] = false;
            vec[i].clear();
        }
        for(int i=0;i<m;i++){
            int n1,n2;
            cin>>n1>>n2;
            vec[n1].push_back(n2);
        }
        for(int i=0;i<l;i++){
            cin>>x;
            dfsVisit(x);
        }
        int cnt=0;
        for(int i=0;i<n+1;i++){
            if(vis[i])
                cnt++;
        }
        cout<<"Total count: "<<cnt<<endl;
    }
    return 0;
}
