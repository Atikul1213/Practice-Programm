#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int num;
    cin>>num;
    cout<<"Your factorial is: "<<factorial(num)<<endl;
    return 0;
}
