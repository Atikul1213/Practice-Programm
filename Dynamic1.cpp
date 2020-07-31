#include<bits/stdc++.h>
using namespace std;
int main()
{
    char *str;
    str = (char *)calloc(10,sizeof(char));
    str[0] = 'D';
    str[1] = 'U';
    str[2] = 'E';
    str[3] = 'T';
    str[4] = ' ';
    str[5] = 'G';
    str[6]  = 'a';
    str[7] = 'z';
    int i=0;
    while(str[i]!='\0'){
        cout<<str[i];
        i++;
    }
    str = (char *)realloc(str,15*sizeof(char));
    i=0;
    while(str[i]!='\0'){
        cout<<str[i];
        i++;
    }
    free(str);
    return 0;
}
