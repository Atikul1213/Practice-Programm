#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
void divisor(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            vec.push_back(i);
        if(i!=sqrt(n))
            vec.push_back(n/i);
        }
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<'\t';
    }
}
int main()
{
    divisor(18);
    return 0;
}
