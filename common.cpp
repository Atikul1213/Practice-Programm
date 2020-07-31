#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[30],str2[30];
    int len,i,j,ck;
    while(scanf("%s",str1)!=EOF){
            ck = 1;
            len = strlen(str1);
    int half = len / 2;
    len = len -1;
    for(i=0;i<len/2;i++){
        if(str1[i]!=str1[len-i]){
            ck = 0;
            break;
        }
    }
//    for(i=len-1,j=0;i>=0;i--,j++){
//        str2[j] = str1[i];
//    }
//    str2[j] = '\0';
//    cout<<str2<<endl;
//    if(!strcmp(str1,str2))
//        cout<<"Palindrome."<<endl;
//    else
//        cout<<"Not palindrome."<<endl;
//    }
    if(ck==1)
        cout<<"Palindrome."<<endl;
    else
        cout<<"Not palindrome."<<endl;
}
    return 0;
}
