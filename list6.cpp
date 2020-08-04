#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<float>mylist;
    list<float>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_front(20);
    mylist.push_back(-1);
    cout<<mylist.size()<<endl;
    mylist.push_back(4);
    mylist.push_front(33);
    cout<<mylist.size()<<endl;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;

    it = mylist.begin();
    it++;
    cout<<*it<<endl;
    mylist.insert(it,7);
   // it = find(mylist.begin(),mylist.end(),6);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;

    it = find(mylist.begin(),mylist.end(),-1);
    mylist.insert(it,99);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    return 0;
}
