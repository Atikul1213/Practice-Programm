#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp;
    fp = fopen("new1.txt","w");
    int sum;
    sum = 10 + 20;
    fprintf(fp,"%d",sum);
    fclose(fp);
    return 0;
}
