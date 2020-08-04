#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,diff,t,cas=1;
    char str[101];
    cin>>t;
    getchar();
    while(t--){
            sum = 0;
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' ')
            sum = sum + 1;
        else if(str[i]>='a' && str[i]<='r'){
            diff = (str[i]-'a');
            sum += ((diff%3)+1);
        }
        else if(str[i]=='s')
            sum +=4;
        else if(str[i]=='t')
            sum +=1;
        else if(str[i]=='u')
            sum +=2;
        else if(str[i]=='v')
            sum +=3;
        else if(str[i]=='w')
            sum +=1;
        else if(str[i]=='x')
            sum +=2;
        else if(str[i]=='y')
            sum +=3;
        else if(str[i]=='z')
            sum +=4;
    }
     cout<<"Case #"<<cas++<<": "<<sum<<endl;
    }
    return 0;
}
