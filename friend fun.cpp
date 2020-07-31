#include<bits/stdc++.h>
using namespace std;
class Rectangle;
class cost{
    int costRate;
public:
    void setValue(int c){
        costRate = c;
    }
    int TotalCost(Rectangle ob);
    int area(Rectangle A);
};

class Rectangle{
    int height;
    int width;
public:
    void set(int h,int w){
        height = h, width = w;
    }
    int area(){
        return height*width;
    }
    friend int cost::TotalCost(Rectangle A);
    friend int cost::area(Rectangle A);
   // friend class cost;
};
void print(Rectangle obj){
    cout<<obj.area()<<endl;
}
Rectangle Scan(){
    Rectangle ob;
    int h,w;
    cin>>h>>w;
    ob.set(h,w);
    return ob;
}

int cost::TotalCost(Rectangle ob){
    return costRate*ob.height*ob.width;
}
int main()
{
    Rectangle ob;
    ob = Scan();
    print(ob);
    cost c;
    c.setValue(10);
    cout<<c.TotalCost(ob)<<endl;
    return 0;
}
