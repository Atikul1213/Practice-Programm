#include<bits/stdc++.h>
using namespace std;
class info{
    int id;
public:
    int getid(){ cin>>id; return id; }
};
class lab{
    int lmark;
public:
    int getlmark(){ cin>>lmark; return lmark; }
};

class exam: public lab{
    int mark;
public:
    int getmark(){ cin>>mark; return mark+getlmark(); }
};

class result: private info, private exam{
public:
    void getResult(){
        int sid = getid();
        int res = getmark();
        cout<<sid<<'\t'<<res<<endl;
    }
};
int main()
{
    result s;
    s.getResult();
    return 0;
}
