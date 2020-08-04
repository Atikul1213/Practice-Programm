#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string,int>m;
    multimap<string,int>::iterator it;
    m.insert(make_pair("ismail",43));
    m.insert(make_pair("ismail",41));
    m.insert(make_pair("ismail",40));
    m.insert(make_pair("atikul",33));
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<'\t'<<it->second<<endl;
    }
    return 0;
}
