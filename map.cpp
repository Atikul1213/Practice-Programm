#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int>::iterator it;
    m["dipto"] = 43;
    m["arnob"] = 42;
    m["nabil"] = 41;
    m.insert(make_pair("atikul",49));
    m.insert(make_pair("sadika",99));
    m.insert(make_pair("ismail",23));
    m.insert(make_pair("sadikul",54));
    cout<<m["atikul"]<<endl;
    m.insert(make_pair("tajimul",33));
    cout<<m["ismail"]<<endl;

    m["ismail"] = 100;
    cout<<m["ismail"]<<endl;
    it = m.begin();
    cout<<it->first<<endl;
    cout<<it->second<<endl;
    it++;
    cout<<it->first<<'\t'<<it->second<<endl;
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<'\t'<<it->second<<endl;
    }
    return 0;
}
