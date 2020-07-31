#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,rem;
    cin>>a>>b;
    while(b!=0){
        rem = a % b;
        a = b;
        b = rem;
    }
    cout<<a<<endl;
    return 0;
}
