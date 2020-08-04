#include<bits/stdc++.h>
using namespace std;
int main()
{
    char *ptr;
    int len;
    cout<<"Enter the length of the string: ";
    cin>>len;
    ptr = (char *)malloc(len*sizeof(char));
    if(ptr==NULL)
        cout<<"Couldn't open successfully."<<endl;
    else{
        cout<<"Enter the string: ";
        cin>>ptr;
        cout<<ptr<<endl;
    }
    free(ptr);
    return 0;
}
