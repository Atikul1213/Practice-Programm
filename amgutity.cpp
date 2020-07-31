#include<bits/stdc++.h>
using namespace std;
int abc(int a,int b=0){
    return a+b;
}
int abc(int a){
    return a;
}
int main()
{
    cout<<abc(4,4)<<endl;
///    cout<<abc(3)<<endl; This is causes by ambigious

    return 0;
}
