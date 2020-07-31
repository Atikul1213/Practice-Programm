#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,arr[100],i=0;
    cin>>n;
    while(n!=0){
        rem = n % 2;
        arr[i] = rem;
        n = n / 2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
        cout<<arr[j];
    cout<<endl;
    return 0;
}
