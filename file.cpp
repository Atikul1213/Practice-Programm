#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp;
    fp = fopen("new.txt","r");
    fp = fopen("nex2.txt","w");
    cout<<"DUET Gazipur"<<endl;
    fprintf(fp,"I am a DUETian");
    fclose(fp);
    return 0;
}
