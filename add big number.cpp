#include<bits/stdc++.h>
#define Max 10004
using namespace std;
void Reverse(char *from,char *to){
    int len,j=0;
    len = strlen(from);
    for(int i=len-1;i>=0;i--)
        to[j++] = from[i];
    to[j] = '\0';
}
void Call_Sum(char *first,char *sec,char *res){
    char F[Max],S[Max],Res[Max];
    int now,extra,s,f,sum;
    f = strlen(first);
    s = strlen(sec);
    Reverse(first,F);
    Reverse(sec,S);
    for(now=0,extra=0;(now<f && now<s);now++){
        sum = (F[now]-'0') + (S[now]-'0')+extra;
        Res[now] = sum % 10 + extra;
        extra = sum / 10;
    }
    for(;now<f;now++){
        sum = (F[now]-'0')+extra;
        Res[now]=sum % 10;
        extra = sum / 10;
    }
    for(;now<s;now++){
        sum = (S[now]-'0') + extra;
        Res[now] = sum % 10;
        extra = sum / 10;
    }
    if(extra!=0)
        Res[now++] = extra;
    Res[now] = '\0';
    if(strlen(Res)==0)
        strcpy(Res,"0");
    Reverse(Res,)
}
int main()
{
    char first[Max],sec[Max],res[Max];
    while(scanf("%s%s",first,sec)==2){
        Call_Sum(first,sec,res);
    }
    return 0;
}
