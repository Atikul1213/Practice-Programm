#include<bits/stdc++.h>
using namespace std;
list<int>l;
list<int>::iterator it;
void print(){
    for(it=l.begin();it!=l.end();it++)
        cout<<*it<<'\t';
    cout<<endl;
}
int main()
{
    l.push_back(3);
    l.push_back(2);
    l.push_back(1);
    l.push_back(7);
    l.push_back(6);
    l.push_back(5);
    l.push_back(4);
    l.push_back(7);
    print();
    l.sort();
    print();
    l.remove(3);
    print();
    l.reverse();
    print();
    l.reverse();
    print();
    l.unique();
    print();

    it = l.begin();
    it++;
    l.insert(it,10);
    print();

    return 0;
}
