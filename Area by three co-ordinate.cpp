#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    double area;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    area = 0.5*((x1*(y2-y3)) - (y1*(x2-x3))+(x2*y3-x3*y2));
    cout<<"Your area is: "<<area<<endl;
    return 0;
}
