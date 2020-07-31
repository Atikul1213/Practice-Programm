#include<bits/stdc++.h>
#define llll long long
using namespace std;
typedef long long ll;
typedef long long lll;
typedef vector<ll>vii;
typedef vector<lll>viii;
#define INF 1000000000
int main()
{
    int arr[100];
    memset(arr,-1,sizeof(arr));
    memset(arr,0,sizeof(arr));
    memset(arr,127,sizeof(arr));
    memset(arr,128,sizeof(arr));
    int ans,a,b,c;
    a = 0,b = 10,c =20;
    ans = a?b:c;
    cout<<ans<<endl;
    return 0;
}
