#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    vector<ll>vec;
    ll a;
    while(scanf("%lld",&a)!=EOF){
        vec.push_back(a);
    }
    for(int i=vec.size()-1;i>=0;i--){
        printf("%.4lf\n",sqrt(vec[i]));
    }
    return 0;
}
