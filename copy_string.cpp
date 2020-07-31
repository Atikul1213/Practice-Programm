#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[30],str2[30];
    scanf("%[^\n]",str1);
    int i;
    for(i=0;str1[i]!=0;i++){
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}
