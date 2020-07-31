#include<bits/stdc++.h>
using namespace std;
class rectangle{
public:
    int height;
    int width;
    void set(int h,int w){
        height = h, width = w;
    }
    int area(){ return height*width; }
    void show();
};
void rectangle::show(){
    cout<<"This is the class introduction class"<<endl;
    cout<<"Thank you for watching...."<<endl;
    cout<<"Have a nice day..........."<<endl;
}
int main()
{
    rectangle ob;
    ob.set(10,5);
    ob.show();
    cout<<"Area = "<<ob.area()<<endl;
    return 0;
}
