#include<bits/stdc++.h>
using namespace std;
int Count(char str[],char ch){
    int cnt = 0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch) cnt++;
    }
    return cnt;
}
int main()
{
    char str[100],ch;
    while(scanf("%s %c",str,&ch)!=EOF){
        cout<<Count(str,ch)<<endl;
    }
    return 0;
}
