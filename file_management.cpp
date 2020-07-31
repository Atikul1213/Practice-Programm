#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp;
    char str1[100] = "Atikul DUETian";
    char str2[100];
    fp = fopen("new.txt","w");
   // fprintf(fp,"%s",str1);
//    fscanf(fp,"%s",str2);
//    cout<<str2<<endl;
    putc(str1[0],fp);
    fclose(fp);
    return 0;
}
