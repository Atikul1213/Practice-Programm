#include<bits/stdc++.h>
using namespace std;
int main()
{
//    freopen("new.txt","r",stdin);
//    freopen("new2.txt","w",stdout);
//    int n;
//    while(scanf("%d",&n)!=EOF){
//        cout<<n<<endl;
//    }
    FILE *fac,*fck;
    int a,b;
    fac = fopen("new1.txt","r");
    fck = fopen("new2.txt","r");
    while(fscanf(fac,"%d",&a)!=EOF){
    fscanf(fck,"%d",&b);
    if(a!=b){
        cout<<"Wrong answer."<<endl;
    }

    }
        cout<<"accepted"<<endl;
    fclose(fac);
    fclose(fck);
    return 0;
}
