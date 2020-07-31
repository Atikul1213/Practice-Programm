#include<bits/stdc++.h>
using namespace std;
int count(char arr[],char ch){
    int len,cnt=0;
    len = strlen(arr);
    for(int i=0;i<len;i++){
        if(arr[i]==ch)
           cnt++;
    }
    return cnt;
}
int main()
{
    char str[100],c;
    while(scanf("%s%*c%c%*c",str,&c)){
        cout<<count(str,c)<<endl;
    }
    return 0;
}
