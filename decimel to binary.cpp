#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,binary=0,i=1;
    cin>>n;
    while(n!=0){
        rem = n % 2;
        binary = binary + rem*i;
        i = i*10;
    }
    cout<<binary<<endl;
    return 0;
}
