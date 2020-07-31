#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
    rectangle(int h,int w);
    ~rectangle();
};
void rectangle::set(int h,int w){
    height = h, width = w;
}
int rectangle::area(){
    return height*width;
}
rectangle::rectangle(int h,int w){
    height = h, width = w;
    cout<<"Constructor....."<<area()<<endl;
}
rectangle::~rectangle(){
    height = 0;
    width = 0;
    cout<<"Destructor......."<<area()<<endl;
}
int main()
{
    rectangle ob(3,4),ob1(3,5);
//    cout<<ob1.area()<<endl;
//    cout<<ob.area()<<endl;
    return 0;
}
