#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *mark,len,i;
    cout<<"Enter the number of subject: ";
    cin>>len;
    mark = (int *)calloc(len,sizeof(int));
    if(mark==NULL)
        cout<<"Unable to allocate memory."<<endl;
    else{
        for(int i=0;i<len;i++){
            cout<<"Subject : "<<i+1<<" : ";
            cin>>mark[i];
        }
        for(int i=0;i<len;i++){
            cout<<"Subject : "<<i+1<<" : "<<mark[i]<<endl;
        }
    }
    return 0;
}
