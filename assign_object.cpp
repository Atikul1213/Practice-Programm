#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
};
inline void rectangle::set(int h,int w){
    height = h;
    width = w;
}
inline int rectangle::area(){
    return height*width;
}
int main()
{
    rectangle ob1,ob2;
    ob1.set(5,15);
    ob2.set(5,10);
    cout<<"Area = "<<ob1.area()<<endl;
    cout<<"Area = "<<ob2.area()<<endl;
    ob1 = ob2;
    cout<<endl<<endl;
    cout<<"Area = "<<ob1.area()<<endl;
    cout<<"Area = "<<ob2.area()<<endl;
    return 0;
}
