#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int roll;
    int mark;
};
class Result : protected Student{
public:
    void set(int r,int m){ roll = r; mark = m; }
    void show(){
         cout<<"Roll : "<<roll<<"  mark: "<<mark<<endl;
    }
};
int main()
{
    Student ob;
    ob.roll = 10;
    ob.mark = 20;
    cout<<ob.roll<<'\t'<<ob.mark<<endl;
    Result o1;
    o1.roll  = 3;
    o1.set(5,6);
    o1.show();
    return 0;
}
