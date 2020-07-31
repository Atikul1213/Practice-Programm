#include<bits/stdc++.h>
using namespace std;
class rectangle{
public:
    int height;
    int width;
    int area();
};
int main()
{
    rectangle ob;
    ob.height = 4;
    ob.width = 2;
    cout<<"Area = "<<ob.area()<<endl;
    return 0;
}
inline int rectangle::area(){
    return height*width;
}
