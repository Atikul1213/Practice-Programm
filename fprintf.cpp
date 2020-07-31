#include<bits/stdc++.h>
using namespace std;
int main()
{
    FILE *fp;
    char name[30];
    int age;
    cout<<"Enter your name and age: ";
    cin>>name>>age;
    fp = fopen("output3.txt","w");
    if(fp==NULL)
        cout<<"File not open successfully."<<endl;
    else{
        cout<<"File open successfully."<<endl;
        fprintf(fp,"%s\t%d",name,age);
        cout<<"Data written successfully."<<endl;
    }
    return 0;
}
