#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int height;
    int width;
public:
    void set(int h,int w);
    int area();
private:
    string name;
    double result;
    int sid;
};
void rectangle::set(int h,int w){
    height = h, width = w;
}
inline int rectangle::area(){
    return width*height;
}
int main()
{
    rectangle ob;
    ob.set(2l,4);
    cout<<ob.area()<<endl;
    return 0;
}
