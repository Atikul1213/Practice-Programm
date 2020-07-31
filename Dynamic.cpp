#include<bits/stdc++.h>
using namespace std;
int main()
{
    char *str;
    str = (char *)calloc(5,sizeof(char));
    strcpy(str,"abcde");
    cout<<str<<endl;
    str = (char *)realloc(str,6*1);
    cout<<str<<endl;
    free(str);
    return 0;
}
