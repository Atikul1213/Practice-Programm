#include<bits/stdc++.h>/// Exception handling
using namespace std;
class exept{
    int id;
    string name;
public:
    exept(int i,string n){
        id = i, name = n;
    }
    void print(){
        cout<<"Error id: "<<id<<" - "<<name<<endl;
    }
};
void positive(int a){
    cout<<a<<endl;
    try{
        if(a<1)
            throw exept(1,"Not a positive");
    }
    catch (exept e){
        e.print();
    }
}
int main()
{
        positive(4);
        positive(-44);
        positive(33);
    return 0;
}
