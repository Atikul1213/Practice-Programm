#include<bits/stdc++.h>
using namespace std;
class myclass{
    int *ptr;
public:
    myclass(){ ptr = new int(0); cout<<"Cons..."<<*ptr<<endl; }
    ~myclass(){ cout<<"dis...."<<*ptr<<endl;  delete ptr; }
    void set(int x) { *ptr = x;  }
    void get(){ cout<<*ptr<<endl; }
    myclass(myclass & ob){
        ptr = new int(1);
        cout<<"Cons...."<<*ptr<<endl;
    }
};

int main()
{
    myclass ob;
    ob.get();
    myclass ob1 = ob;
    ob.get();
    ob1.get();
    ob1.set(4);
    ob.get();
    ob1.get();
    return 0;
}
