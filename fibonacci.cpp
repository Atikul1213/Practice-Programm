#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int num,sum=0;
    cout<<"Enter your num: ";
    cin>>num;
    for(int i=1;i<=num;i++){
            cout<<fibonacci(i)<<'\t';
     sum = sum + fibonacci(i);
    }
    cout<<"\nYour summation is: "<<sum<<endl;
    return 0;
}
