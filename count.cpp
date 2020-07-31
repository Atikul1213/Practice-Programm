#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100],str1[100];
    int cnt=0;
    char *ptr;
    cin.getline(str,100);
    ptr = strtok(str," .,!?-0123456789");
    while(ptr!=NULL){
        cout<<ptr;
        ptr = strtok(NULL," ,.!?-0123456789");
    }
    return 0;
}
