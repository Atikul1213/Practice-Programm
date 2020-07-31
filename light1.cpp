#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000];
    char *ptr;
    while(1){
        cin.getline(str,1000);
    ptr = strtok(str," ");
    while(ptr!=NULL){
        cout<<strrev(ptr)<<" ";
        ptr = strtok(NULL," ");
        }
    cout<<endl;
    }
    return 0;
}
