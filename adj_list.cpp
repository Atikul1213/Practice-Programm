#include<bits/stdc++.h>
using namespace std;
int node,edge;
int main()
{
    vector<int>vec[5];
    freopen("file.txt","r",stdin);
    cin>>node>>edge;
    for(int i=0;i<node;i++){
        int n1,n2;
        cin>>n1>>n2;
        vec[n1].push_back(n2);
        vec[n2].push_back(n1);
    }
    for(int i=0;i<vec[1].size();i++){
        cout<<vec[1][i]<<'\t';
    }
    cout<<endl;
    return 0;
}
