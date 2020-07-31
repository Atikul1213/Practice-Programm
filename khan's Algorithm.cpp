#include<bits/stdc++.h>
#define ll long long
using namespace std;
int node,edge;
vector<vector<int> >adj;
vector<int>indegree;
void topological_Sort_Khan(){
    queue<int>q;
    for(int i=0;i<node;i++)
        if(indegree[i]==0)
            q.push(i);
}
int main()
{

    return 0;
}
