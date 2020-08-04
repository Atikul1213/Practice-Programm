#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string,int>m;
    multimap<string,int>::iterator it;
    m.insert(make_pair("isamil",40));
    m.insert(make_pair("sadika",41));
    m.insert(make_pair("ismail",43));
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<'\t'<<it->second<<endl;
    }
    return 0;
}
