#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec[3];
    vec[0].push_back(10);
    vec[0].push_back(20);
    vec[0].push_back(30);
    vec[0].push_back(40);
    vec[1].push_back(100);
    vec[1].push_back(200);
    vec[1].push_back(300);
    vec[1].push_back(400);
    vec[1].push_back(500);
    cout<<vec[0].size()<<endl;
    cout<<vec[1].size()<<endl;
    cout<<vec[0][2]<<endl;
    for(int i=0;i<5;i++){
        cout<<vec[1][i]<<'\t';
    }
    cout<<endl;
    return 0;
}
