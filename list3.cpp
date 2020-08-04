#include<bits/stdc++.h>
#include<list>
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
    mylist.insert(it,7);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    it = find(mylist.begin(),mylist.end(),6);
    mylist.insert(it,9);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    it = find(mylist.begin(),mylist.end(),4);
    return 0;
}
