#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={1,3,5,5,5,5,8,9,12};
    vector<int>vec(arr,arr+10);
    vector<int>::iterator it;
//    bool ans = binary_search(vec.begin(),vec.end(),10);
//    if(ans) cout<<"found."<<endl;
//    else cout<<"Not found."<<endl;
//    it = lower_bound(vec.begin(),vec.end(),5);
//    cout<<*it<<endl;
//    cout<<distance(vec.begin(),it)<<endl;
    it = upper_bound(vec.begin(),vec.end(),22);
    if(it==vec.end()) cout<<"not found."<<endl;
    cout<<*it<<endl;
    cout<<distance(vec.begin(),it)<<endl;
    return 0;
}
