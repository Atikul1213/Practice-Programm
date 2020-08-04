#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={5,2,1,6,3};
    list<int>mylist(arr,arr+5);
    list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    it = mylist.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    mylist.insert(it,33);
//    it = find(mylist.begin(),mylist.end(),60);
//    if(it==mylist.end())
//        cout<<"Not found"<<endl;
//    else
//        cout<<"found"<<endl;
    it = find(mylist.begin(),mylist.end(),5);
    mylist.erase(it);
    mylist.insert(it,100);
     for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    return 0;
}
