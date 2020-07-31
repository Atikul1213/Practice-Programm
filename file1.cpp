#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp,*fp1,*fp2;
    char str[100];
   /** fp = fopen("new.txt","w");
    scanf("%[^\n]",str);
    fprintf(fp,"%s",str);
    fclose(fp); */

    fp1 = fopen("new.txt","r");
    if(fp1==NULL)
        cout<<"File not found."<<endl;
    fp2 =
    fp2 = fopen("new2.txt","w");
    fscanf(fp1,"%s",str);
    fprintf(fp2,"%s",str);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
/**
    Mode: read, write, append
*/
