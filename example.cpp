#include<bits/stdc++.h>
using namespace std;
int main()
{

    char str[100];
    int ck;
    while(scanf("%s",&str)!=EOF){
        ck = 0;
        if( (str%4==0 && str%100!=0)||str%400==0){
                ck = 1;
            cout<<"This is leap str."<<endl;
        if(str%15==0 )
            cout<<"This is huluculu festival str."<<endl;
        if(str%55==0)
            cout<<"This is bulukulu festival str."<<endl;
        }
        else{
              if(str%15==0 ){
            cout<<"This is huluculu festival str."<<endl;
            ck = 1;
              }
            if(str%55==0){
            cout<<"This is bulukulu festival str."<<endl;
            ck = 1;
            }
            if(ck==0)
            cout<<"This is an ordinary str."<<endl;
        }
        cout<<endl;

    }
    return 0;
}
