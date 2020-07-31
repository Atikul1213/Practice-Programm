#include<bits/stdc++.h>
using namespace std;
int add(int a,int b){
    static int n=0;
    n++;
    cout<<"n = "<<n<<endl;
    extern int c;
    c = 100;
    return a+b;
}
int c;
int main()
{
    add(1,2);
    add(3,3);
    add(4,5);
    add(5,5);
    return 0;
}
