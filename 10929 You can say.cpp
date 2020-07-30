#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1003];
    int rem;
    while(scanf("%s",str)){
            rem=0;
        int len = strlen(str);
        if(str[0]=='0' && len==1)
            break;
        for(int i=0;i<len;i++){
            rem = (rem*10 + (str[i]-'0'))%11;
        }
        if(rem==0)
            cout<<str<<" is a multiple of 11."<<endl;
        else
            cout<<str<<" is not a multiple of 11."<<endl;
    }
    return 0;
}
