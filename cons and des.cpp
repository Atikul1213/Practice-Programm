#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int height;
    int width;
public:
    rectangle();
    rectangle(int h,int w);
    ~rectangle();
    void set(int h,int w);
    int area();
};
static int cnt = 0;
void rectangle::set(int h,int w){
    height = h, width = w;
}
int rectangle::area(){
    return height*width;
}
rectangle::rectangle(){
    cout<<"Constructing........."<<endl;
    height = 1, width = 1;
}
rectangle::rectangle(int h,int w){
    height = h, width = w;
    cout<<"Constructing......."<<area()<<endl;
}
rectangle::~rectangle(){
    cout<<"Destroying........."<<area()<<endl;
}
int main()
{
    rectangle ob(4,5),ob1(1,3);
    return 0;
}
