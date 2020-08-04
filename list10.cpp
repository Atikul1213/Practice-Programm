#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,3,2,6,4};
    list<int>mylist(arr,arr+5);
    list<int>::iterator it;
    if(mylist.empty()){
        cout<<"Empty."<<endl;
    }
    else
        cout<<"Filled."<<endl;
    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<'\t';
    cout<<endl;
    cout<<mylist.front()<<endl;
    cout<<mylist.back()<<endl;
    it = mylist.begin();
    mylist.erase(it);
    cout<<mylist.front()<<endl;
    mylist.pop_front();
    cout<<mylist.front()<<endl;
    mylist.pop_back();
    cout<<mylist.back()<<endl;
    return 0;
}
