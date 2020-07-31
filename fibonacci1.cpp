#include<bits/stdc++.h>
using namespace std;
//int fibonacci(int n){
//    if(n==0)
//        return 0;
//    else if(n==1)
//        return 1;
//    return fibonacci(n-1) + fibonacci(n-2);
//}
int  fibonacci1(int n){
    int f0 =0, f1 = 1,fibo;
    for(int i=1;i<=n;i++){
        if(n==i)
            cout<<f0<<endl;
        fibo = f0 + f1;
        f0 = f1;
        f1 = fibo;
    }
    return fibo;
}
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    cout<<"Your fibonacci number is : "<<fibonacci1(n)<<endl;
    }
    return 0;
}
