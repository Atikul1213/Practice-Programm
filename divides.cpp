#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 100, cnt =0;
    while(x!=0){
        x = x/2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
