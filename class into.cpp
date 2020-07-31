#include<bits/stdc++.h>
using namespace std;
class rectangle{
public:
    int height;
    int width;
    void set(int h,int w){
        height = h,width = w;
    }
    int area(){ return height*width;}
};
int main()
{
    rectangle ob;
    ob.height = 4;
    ob.width = 5;
    cout<<ob.height*ob.width<<endl;
    cout<<ob.width*ob.height<<endl;
    ob.set(10,20);
    cout<<"Area = "<<ob.area()<<endl;
    return 0;
}
