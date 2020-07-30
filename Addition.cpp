#include<bits/stdc++.h>
#define Max 104
using namespace std;
void Reverse(char *from,char *to){
    int len,j=0;
    len = strlen(from);
    for(int i=len-1;i>=0;i--)
        to[j++] = from[i];
    to[j] = '\0';
}
void Call_Add(char *first,char *sec,char *result){
    char F[Max],S[Max],res[Max];
    int f,s,now,rem,sum;
    f = strlen(first);
    s = strlen(sec);
    Reverse(first,F);
    Reverse(sec,S);
    for(now=0,rem=0;now<min(f,s);now++){
        sum = (F[now]-'0') + (S[now]-'0')+rem;
         res[now] = sum%10+'0';
         rem = sum / 10;
    }
    for(;now<f;now++){
        sum = (F[now]-'0')+rem;
        res[now] = sum+'0';
        rem = sum/10;
    }
    for(;now<s;now++){
        sum = (S[now]-'0')+rem;
        res[now] = sum % 10+'0';
        rem = sum / 10;
    }
    if(rem!=0)
        res[now++] = rem;
    res[now] = '\0';
    if(strlen(res)==0)
        strcpy(res,"0");
    Reverse(res,result);
}
int main()
{
    char fir[Max],sec[Max]={0},res[Max];
    while(scanf("%s%*c",fir)){
        if(!strcmp(fir,"0"))
            break;
        Call_Add(fir,sec,res);
        strcpy(sec,res);
    }
    for(int i=0;res[i]!='\0';i++)
        cout<<res[i];
    cout<<endl;
    return 0;
}
