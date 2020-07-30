#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1002];
    int len,num;
    while(scanf("%s",str)!=EOF){
    num = 0;
    len = strlen(str);
        if(str[0]=='0' && len==1)
            break;
    if(len<6){
            for(int i=0;str[i]!='\0';i++){
                num = num *10 + (str[i]-'0');
            }
       if(num%11==0)
        cout<<str<<" is a multiple of 11."<<endl;
    else
        cout<<str<<" is not a multiple of 11."<<endl;
    }
    else{
    for(int i=len-5;str[i]!='\0';i++){
        num = num *10 + (str[i]-'0');
    }
    if(num%11==0)
        cout<<str<<" is a multiple of 11."<<endl;
    else
        cout<<str<<" is not a multiple of 11."<<endl;
    }
    }
    return 0;
}
