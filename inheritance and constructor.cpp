#include<bits/stdc++.h>
using namespace std;
class base1{
public:
    int a;
    base1(int x) { x = a; }
};
class base2{
public:
    int c;
    base2(int z){ c = z; }
};
class derived : public base1,public base2{
public:
    int b;
    derived(int y): base1(5),base2(6){
        b = y;
    }
};
int main()
{
    derived ob(5,6,7);
    cout<<ob.a<<endl;
    cout<<ob.b<<endl;
    cout<<ob.c<<endl;
    return 0;
}
