#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000001];
    int cnt;
    while(scanf("%s",str)!=EOF){
        cnt = 0;
        for(int i=0;str[i]!='\0';i++)
            if(str[i]=='a') cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
