#include<bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}









































/**

    #include<bits/stdc++.h>
using namespace std;
class myClass{
    bool rev;
public:
    myClass(const bool& _rev = false){
        rev = _rev;
    }
    bool operator()(const int& a,const int& b)const{
        if(rev)
            return a > b;
        else
            return a < b;
    }
};
int main()
{
    int arr[]={10,60,50,20};
    priority_queue<int>q1;
    priority_queue<int>q2(arr,arr+4);

    q2.push(-1);
    q2.push(3);

    while(!q2.empty()){
        cout<<q2.top()<<'\t';
        q2.pop();
    }
    cout<<endl;
    return 0;
}

  deque<int>q1;
    deque<int>q2(4,100);
    deque<int>q3(q2.begin(),q2.end());
    deque<int>q4(q3);
    deque<int>::iterator it;

    int arr[]={16,2,77,29};
    deque<int>q5(arr,arr+sizeof(arr)/sizeof(int));
    for(it=q5.begin();it!=q5.end();it++)
        cout<<*it<<'\t';
    cout<<endl;
    q1.assign();
    q1.push_back();
    q1.pop_back();
    q1.push_front();
    q1.insert();
    q1.erase();
    q1.clear();
    q1.front();
    q1.back();
    q1.begin();
    q1.end();
    q1.empty();


    ret = s1.insert(20);
    if(ret.second == false)
        it = ret.first;
    s1.insert(it,25);
    s1.insert(it,24);
    s1.insert(it,26);
    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<"\t";


    cout<<endl;
    int arr[]={5,10,15};

    s1.insert(arr,arr+3);

    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<"\t";
    cout<<endl;
    it = s1.begin();

    s1.erase(it);
    s1.erase(15);
    s1.erase(10);

      for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<"\t";
    cout<<endl;

    cout<<s1.size()<<endl;
    s1.clear();
    cout<<s1.size()<<endl;
int arr[]={10,20,30,40,50};
    set<int>s1(arr,arr+5);
    set<int>s2;
    set<int>::iterator it;

    for(it = s1.begin();it!=s1.end();it++)
        cout<<*it<<'\t';
    cout<<endl;
    s2 = s1;
    for(it=s2.begin();it!=s2.end();it++)
        cout<<*it<<'\t';
    cout<<endl;
    cout<<s1.size()<<'\t'<<s2.size()<<endl;
#include<bits/stdc++.h>
using namespace std;
bool fncomp(int a,int b){
    return a < b;
}
struct classcomp{
    bool operator()(const int& a, const int& b)const{
        return a < b;
    }
};  deque<int>q1;
    deque<int>q2(4,100);
    deque<int>q3(q2.begin(),q2.end());
    deque<int>q4(q3);
    deque<int>::iterator it;

    int arr[]={16,2,77,29};
    deque<int>q5(arr,arr+sizeof(arr)/sizeof(int));
    for(it=q5.begin();it!=q5.end();it++)
        cout<<*it<<'\t';
    cout<<endl;
    q1.assign();
    q1.push_back();
    q1.pop_back();
    q1.push_front();
    q1.insert();
    q1.erase();
    q1.clear();
    q1.front();
    q1.back();
    q1.begin();
    q1.end();
    q1.empty();


int main()
{
    set<int>s1;
    int arr[]={10,20,30,40,50};
    set<int>s2(arr,arr+5);
    set<int>s3;
    set<int>::iterator it;

    for(it=s2.begin();it!=s2.end();it++)
        cout<<*it<<'\t';
    cout<<endl;
     s3 = s2;

    for(it=s3.begin();it!=s3.end();it++)
        cout<<*it<<'\t';
    cout<<endl;

    s1.insert(-1);
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(5);

    for(it=s1.begin();it!=s1.end();it++)
        cout<<*it<<'\t';
    cout<<endl;

    set<int>s4(s1.begin(),s1.end());
    for(it=s4.begin();it!=s4.end();it++)
        cout<<*it<<'\t';
    cout<<endl;
    set<int,classcomp>s5;

    return 0;
}


 pair<string,double>p1;
    pair<string,double>p2("DUET",122.22);
    pair<string,double>p3(p2);

    p1 = make_pair(string("Gazipur"),9.33);
    p2.first = "Dinajpur";
    p2.second = 43.33;
    p3 = make_pair("DUET",4540);
    p2 = make_pair("HSTU",5200);
    p3 = p2;



    cout<<p1.first<<'\t'<<p1.second<<endl;
    cout<<p2.first<<'\t'<<p2.second<<endl;
    cout<<p3.first<<'\t'<<p3.second<<endl;

    map<char,int>m;
    map<char,int>::iterator it;
    m['a'] = 10;
    m['b'] = 20;
    m['c'] = 30;

    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<'\t'<<it->second<<endl;



    while(!m.empty()){
        cout<<m.begin()->first<<'\t'<<m.begin()->second<<endl;
        m.erase(m.begin());
    }
    cout<<endl;

 map<char,int>m;
    m['a'] = 10;
    m['b'] = 20;
    m['c'] = 30;
    m['d'] = 40;
    map<char,int>::iterator it;

    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<'\t'<<it->second<<endl;
    m.clear();
    m['a'] = 1234334;

      for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<'\t'<<it->second<<endl;

*/
