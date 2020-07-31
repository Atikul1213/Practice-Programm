#include<bits/stdc++.h> /// private public protected
using namespace std;
class rectangle{
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
private:
    int a;
public:
    int b;
};
int main()
{
    rectangle ob;
    ob.set(4,5);
    cout<<"Area = "<<ob.area()<<endl;
    return 0;
}
void rectangle::set(int h,int w){
    height = h, width = w;
}
inline int rectangle::area(){
    return height*width;
}
