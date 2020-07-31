#include<bits/stdc++.h>
#define Max 100000
using namespace std;
vector<int>edge[Max];
vector<int>cost[Max];
int main()
{
    int numNode,numEdge;
    cin>>numNode>>numEdge;
    for(int i=1;i<=numEdge;i++){
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
        cost[x].push_back(1);
        cout[y].push_back(1);
    }
    return 0;
}
