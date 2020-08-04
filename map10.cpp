#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;
    mp["dipto"] = 43;
    mp["arnob"] = 33;
    mp["shainur"] = 12;
    mp.insert(make_pair("Ismail",40));
    mp.insert(make_pair("Sadikul",23));
    mp.insert(make_pair("Atikul",45));
    mp.insert(make_pair("Sadika",78));
    cout<<mp["Atikul"]<<endl;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<'\t'<<it->second<<endl;
    }
    return 0;
}
