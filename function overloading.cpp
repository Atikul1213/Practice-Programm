#include<bits/stdc++.h>
using namespace std;
int add(int a,int b){
    return a + b;
}
int add(int a,int b,int c){
    return a + b + c;
}
float add(float a,float b){
    return (a+b)*2;
}
double add(double a,double b){
    return (a + b)*3;
}

int main()
{
    cout<<add(3,4)<<endl;
    cout<<add(1,2,3)<<endl;
    cout<<add(1.2, 3.4)<<endl;
    float a = 1.3, b = 4.3;
    cout<<add(a,b)<<endl;
    return 0;
}
