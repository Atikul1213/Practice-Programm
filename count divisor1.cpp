#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
void count_Divisor(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            vec.push_back(i);
            if(i!=sqrt(n))
                vec.push_back(n/i);
        }
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<'\t';
    }
    cout<<endl;
}
int countDivisor(int n){
    int divisor = 0;
    for(int i=1;i*i<=n;i++){
        if(i*i==n)
            divisor+=1;
        else if(n%i==0)
            divisor+=2;
    }
    return divisor;
}

int main()
{
    count_Divisor(1000000);
    cout<<countDivisor(18)<<endl;
    return 0;
}
