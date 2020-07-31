#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size=5,index,i,j;
    int age[size];
    for(int i=0;i<size;i++){
        cout<<"Enter age["<<i+1<<"] element: ";
        cin>>age[i];
    }
    for(int i=0;i<size;i++){
        cout<<age[i]<<'\t';
    }
    cout<<endl<<endl;

    cout<<"Input index number(0 to 4): ";
    cin>>index;
    j = index;
    while(j<size-1){
        age[j] = age[j+1];
        j++;
    }

    size = size - 1;
    for(int i=0;i<size;i++){
        cout<<age[i]<<'\t';
    }
    cout<<endl;
    return 0;
}
