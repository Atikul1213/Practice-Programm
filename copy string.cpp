#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[100],str2[100];
    cout<<"Enter the string: "<<endl;
    scanf("%[^\n]%*c",str1);
    scanf("%[^\n]",str2);
    cout<<str1<<'\t'<<str2<<endl;
    int i;
    for(i=0;str1[i]!='\0';i++);
    for(int j=0;str2[j]!='\0';j++){
        str1[i+j] = str2[j];
    }
    cout<<str1<<'\t'<<str2<<endl;
    return 0;
}
