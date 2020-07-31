#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Size = 5,index,i,j;
    int age[Size];
    cout<<"Enter 5 element: "<<endl;
    for(int i=0;i<Size;i++){
        cin>>age[i];
    }
    cout<<"Your element: "<<endl;
    for(i=0;i<Size;i++){
        cout<<age[i]<<'\t';
    }
    cout<<endl;
    cout<<"Enter the index that you delete: ";
    cin>>index;
    j = index;
    while(j<Size-1){
        age[j] = age[j+1];
        j = j + 1;
    }
    for(i=0;i<Size-1;i++){
        cout<<age[i]<<'\t';
    }
    cout<<endl;
    return 0;
}
