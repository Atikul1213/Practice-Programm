#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
};

void rectangle::set(int h,int w){
    height = h, width = w;
}

int rectangle::area(){
    return height*width;
}

int main()
{
    rectangle ob,ob1;
    ob.set(2,3);
    ob1.set(5,6);
    cout<<"Area = "<<ob.area()<<endl;
    cout<<"Area = "<<ob1.area()<<endl;

    ob1 = ob;
    cout<<"Area = "<<ob.area()<<endl;
    cout<<"Area = "<<ob1.area()<<endl;
    return 0;
}
