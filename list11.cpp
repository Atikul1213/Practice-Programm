#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={5,2,1,6,3};
    list<int>mylist(arr,arr+5);
    list<int>::iterator it;
    mylist.push_front(8);
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;
    it = mylist.begin();

    cout<<*it<<endl;
    it++;
    mylist.insert(it,10);
    cout<<*it<<endl;
    it = find(mylist.begin(),mylist.end(),1);
    mylist.insert(it,101);
    sort(mylist.begin(),mylist.end());
    for(it=mylist.begin();it!=mylist.end();it++){
        cout<<*it<<'\t';
    }
    cout<<endl;

    return 0;
}
