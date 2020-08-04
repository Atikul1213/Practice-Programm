#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist;
    list<int>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_front(20);
    mylist.push_back(-1);

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    mylist.reverse();
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    cout<<"Size : "<<mylist.size()<<endl;

    mylist.clear();
    cout<<"Size : "<<mylist.size()<<endl;

    list<int>mylist1(4,0);
    list<int>::iterator it1;
    for(it1=mylist1.begin();it1!=mylist1.end();it1++){
        cout<<*it1<<'\t';
    }
    cout<<endl;
    return 0;
}
