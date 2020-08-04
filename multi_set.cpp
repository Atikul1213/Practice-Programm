#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    multiset<int>::iterator it;
    s.insert(100);
    s.insert(100);
    s.insert(30);
    s.insert(40);
    for(it=s.begin();it!=s.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    return 0;
}
