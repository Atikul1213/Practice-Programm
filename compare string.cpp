#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100],str2[100];
    cout<<"Enter two string: "<<endl;
    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]",str2);
    int i=0,j=0,ck=1;
    while(str1[i]!='\0' && str2[j]!='\0'){
        if(str1[i]!=str2[j]){
            ck = 0;
            break;
        }
        i++,j++;
    }
    if(ck==1) cout<<"Same"<<endl;
    else
        cout<<"Not same."<<endl;
    return 0;
}
