#include<bits/stdc++.h>
#define Size 5
using namespace std;
int main()
{
    int student[Size];
    int i,j,index;
    cout<<"Enter the 5 element: ";
    for(i=0;i<Size;i++){
        cin>>student[i];
    }
    cout<<"Your element: "<<endl;
    for(int i=0;i<Size;i++){
        cout<<student[i]<<'\t';
    }
    cout<<endl<<endl;
    cout<<"Enter the index that you delete: ";
    cin>>index;
    while(index<Size){
        student[index] = student[index+1];
        index = index + 1;
    }
    for(i=0;i<Size-1;i++){
        cout<<student[i]<<'\t';
    }
    cout<<endl;
    return 0;
}
