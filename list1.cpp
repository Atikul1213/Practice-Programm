#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    list<int>::iterator it;
    mylist.push_back(5);
    mylist.push_front(33);
    mylist.push_back(8);
    mylist.push_back(10);
    mylist.push_front(45);
    mylist.push_back(7);

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    mylist.reverse();
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    cout<<mylist.size()<<endl;
    mylist.clear();
    cout<<mylist.size()<<endl;
    vector<int>vec;
    vec.clear();
    return 0;
}
/**
reverse()
*/
