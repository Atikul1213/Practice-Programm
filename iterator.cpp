#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    for(int i=5;i<=10;i++){
        vec.push_back(i);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<'\t';
    }
    cout<<endl;
    it = vec.begin();
    cout<<*it<<endl;
    it++;
    cout<<*it<<endl;
    return 0;
}
