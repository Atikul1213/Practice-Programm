#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,value,rem=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>value;
        cout<<(value+rem)/k<<endl;
        rem = value % k;
    }
    return 0;
}
