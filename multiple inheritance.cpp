#include<bits/stdc++.h>
using namespace std;
class myclass{
    int id;
public:
    void sid(){ cin>>id; cout<<id<<endl; }
};
class Result{
    int roll;
public:
    void sroll(){ cin>>roll; cout<<roll<<endl;  }
};
class student : private myclass,private Result{
public:
    void print() { sid(); sroll(); }
};
int main()
{
    student ob;
    ob.print();
    return 0;
}
