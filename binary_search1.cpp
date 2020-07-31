#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[13] = { 1,3,3,3,3,3,3,3,3,5,8,9,12};
    vector<int>vec(arr,arr+13);
    vector<int>::iterator it;
    it = lower_bound(vec.begin(),vec.end(),3);
    cout<<distance(vec.begin(),it)<<endl;
    it = upper_bound(vec.begin(),vec.end(),3);
    cout<<distance(vec.begin()+1,it)<<endl;
    cout<<(it-vec.begin()-1)<<endl;
    return 0;
}
