#include<bits/stdc++.h>
using namespace std;
class base{
public:
    int a;
    int get(){ return a; }
};
class derived1 : public base{
public:
    int a;
    int getd(){ return a + get(); }
};
int main()
{
    derived1 ob;
    ob.base::a = 5;
    ob.a = 10;
    cout<<ob.getd()<<endl;
    return 0;
}
