#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<double>mylist;
    list<double>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_back(20);
    mylist.push_front(-1);

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    return 0;
}
/**
push_back()
push_front()
iterator()
*/
