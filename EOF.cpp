#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fac,*fck;
    int a,b;
    fac = fopen("accepted.txt","r");
    fck = fopen("output.txt","r");
    while(fscanf(fac,"%d",&a)!=EOF){
    fscanf(fck,"%d",&b);
    if(a!=b){
        cout<<"Wrong answer."<<endl;
        return 0;
    }
    }
    cout<<"Accepted."<<endl;
    fclose(fac);
    fclose(fck);
    return 0;
}
