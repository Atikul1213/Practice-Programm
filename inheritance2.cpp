#include<bits/stdc++.h>
using namespace std;
class Student{
private:
    int roll;
    int mark;
public:
    void set(int r,int m){ mark= m; roll = r; }
    void print(){ cout<<"roll : "<<roll<<" mark: "<<mark<<endl; }

};
class Result : private Student{
public:
    void all(){ set(4,5); print(); }
};
int main()
{
    Result ob;
    ob.all();
    return 0;
}
