#include<bits/stdc++.h>
using namespace std;
int main()
{
//    multimap<string,int>m;
//    multimap<string,int>::iterator it;
//    m.insert(make_pair("dipto",43));
//    m.insert(make_pair("dipto",41));
//    m.insert(make_pair("dipto",44));
//    m.insert(make_pair("arnob",100));
//    for(it=m.begin();it!=m.end();it++){
//        cout<<it->first<<'\t'<<it->second<<endl;
//    }

    multiset<int>s;
    multiset<int>::iterator it;
    s.insert(100);
    s.insert(100);
    s.insert(100);
    s.insert(23);
    s.insert(43);
    s.insert(-1);
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    return 0;
}
