#include<bits/stdc++.h>
using namespace std;
class info{
    int id;
    int mark;
public:
    void getid(){ cin>>id; cout<<id<<endl; }
    void getmark(){ cin>>mark; cout<<mark<<endl; }
};
class result : private info{
public:
    void print(){ getmark(); }
};

class student : private info{
public:
    void print(){ getid(); }
};
int main()
{
    student ob;
    ob.print();
    result r;
    r.print();
    return 0;
}
