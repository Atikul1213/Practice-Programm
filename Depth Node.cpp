#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
int main()
{
    ll n,m,x,current_line = 0, ans = 0, new_value_of_x;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>x;
        new_value_of_x = x + current_line;
        ans = new_value_of_x / m;
        current_line = x % m;
        cout<<ans<<endl;
        if(i!=n) cout<<" ";
    }
    puts("");
    return 0;
}
