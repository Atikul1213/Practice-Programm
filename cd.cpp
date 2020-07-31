#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,value,cnt;
    vector<int>Jack;
    vector<int>Jill;
    while(scanf("%d%d",&n,&m)!=EOF){
            cnt=0;
        if(n==0 && m==0) break;
        for(int i=0;i<n;i++){
            cin>>value;
            Jack.push_back(value);
        }
        for(int i=0;i<m;i++){
            cin>>value;
            Jill.push_back(value);
        }
        for(int i=0;i<Jack.size();i++)
            if(Jack[i]==Jill[i]) cnt++;
        cout<<cnt<<endl;
        Jack.clear(); Jill.clear();
    }
    return 0;
}
