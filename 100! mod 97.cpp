#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,M,fact = 1;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the number that your mod: ";
    cin>>M;
    for(int i=1;i<=n;i++){
        fact = ((fact%M)*(i%M))%M;
    }
    cout<<"Mod : "<<fact<<endl;
    return 0;
}
