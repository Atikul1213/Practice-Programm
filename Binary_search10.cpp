#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8]={1,3,3,3,5,8,9,12};
    vector<int>vec(arr,arr+8);
//    vector<int>::iterator it = lower_bound(vec.begin(),vec.end(),3);
//    cout<<distance(vec.begin(),it)<<endl;
    vector<int>::iterator it = upper_bound(vec.begin(),vec.end(),3);
    cout<<distance(vec.begin(),it)<<endl;

    return 0;
}
//    vector<int>vec(arr,arr+6);
//    vector<int>::iterator it = lower_bound(vec.begin(),vec.end(),9);
//
////    bool ans = binary_search(vec.begin(),vec.end(),50);
////    if(ans==true)
////        cout<<"Found the value."<<endl;
////    else
////        cout<<"Not found."<<endl;
//    if(it==vec.end())
//        cout<<"Not found."<<endl;
//     cout<<*it<<endl;
//     cout<<distance(vec.begin(),it)<<endl;
//    it = upper_bound(vec.begin(),vec.end(),5);

