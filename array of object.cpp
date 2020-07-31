#include<bits/stdc++.h>
using namespace std;
class rectangle{
    int height;
    int width;
public:
    void set(int h,int w){
        height = h, width = w;
    }
    int area(){ return height*width; }
    rectangle(int h,int w){ height = h, width = w; }
    rectangle(){ height = 2, width = 4; }
};
int main()
{
    rectangle ob[5]={
        rectangle(1,2),
        rectangle(3,4),
        rectangle(4,5),
        rectangle(5,6),
        rectangle(7,8)
    };
//    ob[0].set(1,2);
//    ob[1].set(2,2);
//    ob[2].set(3,2);
//    ob[3].set(4,2);
//    ob[4].set(5,2);
    for(int i=0;i<5;i++){
        cout<<"Area = "<<ob[i].area()<<endl;
    }
    return 0;
}
