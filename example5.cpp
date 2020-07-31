#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100],str1[100];
    int len,i,j;
    while(gets(str)){
        for(i=0,j=0;str[i]!='\0';i++,j++){
            if(str[i]!=' '){
                str1[j] = str[i];
            }
            str1[j]='\0';
        }
            cout<<str1<<endl;

    }
    return 0;
}
