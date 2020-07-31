#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2,a,b;
    double dis;
    cin>>x1>>y1>>x2>>y2;
    a = (x1-x2);
    b = (y1-y2);
    dis = sqrt( (a*a) + (b*b));
    cout<<"dis : "<<dis<<endl;
    return 0;
}
