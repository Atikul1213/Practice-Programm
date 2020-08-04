#include<bits/stdc++.h>
using namespace std;
bool Palindrome(char str[]){
    int j,i=0;
    j = strlen(str);
    while(i<j){
        if(str[i]!=str[j-1]){
            return false;
            break;
        }
        i++,j--;
    }
    return true;
}
int main()
{
    char str[22];
    int pal,mir;
    while(scanf("%s%*c",str)!=EOF){
            cout<<str<<" -- ";
        pal = Palindrome(str);
        int len = strlen(str);
        for(int i=0;i<len-3;i++){
            if(str[i]=='E') str[i] = '3';
            else if(str[i]=='3') str[i] = 'E';
            else if(str[i]=='J') str[i] = 'L';
            else if(str[i]=='L') str[i] = 'J';
            else if(str[i]=='S') str[i] = '2';
            else if(str[i]=='2') str[i] = 'S';
            else if(str[i]=='Z') str[i] = '5';
            else if(str[i]=='5') str[i] = 'Z';
        }
        mir = Palindrome(str);
        if(pal==0 && mir==0) cout<<"is not a palindrome."<<endl<<endl;
        else if(pal==1 && mir==0) cout<<"is a regular palindrome."<<endl<<endl;
        else if(pal==0 && mir==1) cout<<"is a mirrored string."<<endl<<endl;
        else if(pal==1 && mir==1) cout<<"is a mirrored palindrome."<<endl<<endl;
    }
    return 0;
}
