#include<bits/stdc++.h>
using namespace std;
multiset<int>::iterator firstLessThan(const multiset<int>&ms,int val){
    multiset<int>::iterator it;
    it = ms.lower_bound(val);
    if(it==ms.end())
        --it;
    while(it!=ms.begin()&&*it>=val)
        --it;
    return *it>=val ? ms.end():it;
}
int main()
{
    int arr[11]={1,3,3,3,3,3,3,5,8,9,12};
    vector<int>vec(arr,arr+11);
    multiset<int>s(vec.begin(),vec.end());
    multiset<int>::iterator it;
    it = firstLessThan(s,7);
    if(it==s.end())
        cout<<"Not found."<<endl;
    else
        cout<<"Found."<<endl;
    return 0;
}
