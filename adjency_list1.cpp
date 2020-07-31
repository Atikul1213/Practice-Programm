#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec[5];
    int node,edge;
    freopen("file.txt","r",stdin);
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        int n1,n2;
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }
    for(int i=0;i<vec[3].size();i++){
        cout<<vec[0][i]<<'\t';
    }
    return 0;
}

