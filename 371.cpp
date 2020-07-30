#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
int Sequence(unsigned int n){
    int cnt=0;
    do{
        if(n%2==0){
                cnt++;
            n = n /2;
        }
        else{
                cnt++;
            n = 3*n+1;
        }
    }while(n!=1);
   return cnt;
}

int Maximum(int a,int b){
    int Max = 0,large;
    if( a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    cout<<"Between "<<a<<" and "<<b<<", ";
    for(int i=a;i<=b;i++){
        if(Max<Sequence(i)){
            Max = Sequence(i);
            large = i;
        }
    }
    cout<<large<<" generates the longest sequence of ";
    return Max;
}
int main()
{
    int i,j;
    while(scanf("%d%d",&i,&j)!=EOF){
        if(i==0 && j==0)
            break;
        cout<<Maximum(i,j)<<" values."<<endl;

    }

    return 0;
}
