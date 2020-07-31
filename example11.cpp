#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>vec;
    vector<int>vec1;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0) vec.push_back(i);
        else
            vec1.push_back(i);
    }
   cout<<"Discarded cards: ";
   for(int i=0;i<vec1.size();i++){
    cout<<vec1[i]<<", ";
   }
   for(int i=0;i<vec.size();i++){
    cout<<vec[i]<<", ";
   }
    return 0;
}
