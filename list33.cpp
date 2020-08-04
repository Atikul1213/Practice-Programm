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
    it = find(mylist.begin(),mylist.end(),1);
    mylist.insert(it,100);
    it = find(mylist.begin(),mylist.end(),3);
    mylist.insert(it,99);
    it = find(mylist.begin(),mylist.end(),333);
    if(it==mylist.end())
        cout<<"Not found."<<endl;
    else
        cout<<"Found."<<endl;

    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    it = mylist.begin();
    mylist.erase(it);
    it = find(mylist.begin(),mylist.end(),1);
    mylist.erase(it);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    return 0;
}
