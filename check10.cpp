#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ck;
    char str[10],c;
    cin>>t;
    while(t--){
        cin>>str;
        ck = 0;
        for(int i=0;str[i]!='\0';i++){
                c = str[i];
            for(char ch='a';ch<='z';ch++){
                str[i] = ch;
                switch(str){
                case "one":
                    cout<<"1"<<endl;
                    break;
                case "two":
                    cout<<"2"<<endl;
                    break;
                case "three":
                    cout<<"3"<<endl;
                    break;
                }
                str[i] = c;
            }
        }
    }
    return 0;
}
