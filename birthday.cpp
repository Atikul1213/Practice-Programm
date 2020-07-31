#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    int n,dd,mm,yy,total,max=0,min=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>dd>>mm>>yy;
        total = yy*365 + mm*30 +  dd;
        vec.push_back(total);
    }
   for(int i=0;i<vec.size();i++){
        if(max<vec[i]){
            max = vec[i];
        }
   }
   cout<<"Maximum: "<<max<<endl;
   for(int i=0;i<vec.size();i++){
        if(min > vec[i])
            min = vec[i];
   }
   cout<<"Minimum = "<<min<<endl;
    return 0;
}
