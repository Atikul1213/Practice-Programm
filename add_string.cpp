#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[50]="DUET",str2[30]="Gazipur";
    cout<<"Enter first string: ";
    scanf("%s",str1);
    cout<<"Enter second string: ";
    scanf("%s",str2);
    int i;
    for(i=0;str1[i]!='\0';i++);
    int len = i;
    for(i=0;str2[i]!='\0';i++){
        str1[len+i] = str2[i];
    }
    cout<<str1<<endl;
    return 0;
}
