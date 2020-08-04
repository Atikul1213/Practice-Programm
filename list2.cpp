#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={10,4,9,2,8};
    list<int>mylist(arr,arr+5);
    list<int>::iterator it;
    it = find(mylist.begin(),mylist.end(),2);
    if(it==mylist.end()){
        cout<<"Not found."<<endl;
    }
    else
        cout<<"Found."<<endl;
    it = mylist.begin();
    mylist.erase(it);
    cout<<mylist.size()<<endl;
    return 0;
}
