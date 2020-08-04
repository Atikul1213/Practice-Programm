#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<float>mylist;
    list<float>::iterator it;
    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_back(20);
    mylist.push_front(2);
    mylist.push_front(1);
    mylist.push_back(40);
    mylist.push_back(40);
    mylist.push_back(40);

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}
