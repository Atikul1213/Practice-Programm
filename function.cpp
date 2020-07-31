#include<bits/stdc++.h>
using namespace std;
int minimum(int n1,int n2){
    int small;
    if(n1 < n2)
        small = n1;
    else
        small = n2;
    return small;
}
int power(int x){
    return x*x;
}
int main()
{
    int a,b,t1,t2,c;
    cin>>a>>b>>c;
    t1 = minimum(a,b);
    t2 = minimum(t1,c);
    cout<<"Your smaller is: "<<t2<<endl;
    return 0;
}
