#include<bits/stdc++.h>
using namespace std;
int sol(int n){
    if(n<2)
        return 0;
    int cnt = 1;
    for(int i=1;i*i<=n;i++){
        if(i*i==n)
            cnt++;
        else if(n%2==0)
            cnt +=2;
    }
}
int main()
{

    return 0;
}
